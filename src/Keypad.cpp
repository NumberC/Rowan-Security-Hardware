#include "Keypad.h"
#include <Arduino.h>

#include "Adafruit_Keypad.h"

const byte ROWS = 4;
const byte COLS = 4;
const char KEYS[ROWS][COLS] = {
{'1', '2', '3', 'A'},
{'4', '5', '6', 'B'},
{'7', '8', '9', 'C'},
{'*', '0', '#', 'D'}
};

byte ROW_PINS[ROWS] = {9, 8, 7, 6};
byte COL_PINS[COLS] = {5, 4, 3, 2};

Adafruit_Keypad keypad = Adafruit_Keypad(makeKeymap(KEYS), ROW_PINS, COL_PINS, ROWS, COLS);

void beginKeypad() {
    keypad.begin();
}

void updateKeypadTick() {
    keypad.tick();
}

char getKeypadInput(){
  if(keypad.available()){
    keypadEvent e = keypad.read();
    if(e.bit.EVENT == KEY_JUST_PRESSED) return (char) e.bit.KEY;
    else if(e.bit.EVENT == KEY_JUST_RELEASED) Serial.println(" released");
    return 'Z';
  }
  return 'Z';
}