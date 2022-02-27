#ifndef KEYPAD_H
#define KEYPAD_H

#include <Arduino.h>

#include "Adafruit_Keypad.h"

void beginKeypad();
void updateKeypadTick();
char getKeypadInput();

#endif