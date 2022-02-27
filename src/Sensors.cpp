#include "Sensors.h"
#include <Arduino.h>

const int relayPin = 41;
const int sensor1Pin = 38;
const int sensor2Pin = 39;

void setupSensors(){
  pinMode(relayPin, OUTPUT);

  digitalWrite(relayPin, HIGH);
}

void enableSensor1(){
    
}

void disableSensor1(){

}

void enableSensor2(){

}

void disableSensor2(){
    
}