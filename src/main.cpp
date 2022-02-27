#include <Arduino.h>
#include "Adafruit_Keypad.h"

#include "Keypad.h"
#include "Sensors.h"

bool armed = false;
bool active = false;

String PIN = "";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  beginKeypad();
  setupSensors();
}

void logout(){

}

void loop() {
  // put your main code here, to run repeatedly:
  updateKeypadTick();

  char keypadInput = getKeypadInput();

  switch(keypadInput){
    case 'Z':
      // null character
      break;
    case 'A':
      break;
    case 'B':
      break;
    case 'C':
      //call 911
      break;
    case 'D':
      // enter
      Serial.println(PIN);
      logout();
      PIN = "";
      break;
    case '*':
      break;
    case '#':
      //backspace
      if(PIN.length() > 0) PIN = PIN.substring(0, PIN.length() - 1);
      break;
    default:
      PIN = PIN + keypadInput;
      break;
  }

  delay(15);
}