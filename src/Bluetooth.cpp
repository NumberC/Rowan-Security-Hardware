#include <SoftwareSerial.h>

const int rxPin = 47;
const int txPin = 48;

SoftwareSerial mySerial (rxPin, txPin);

void setup(){
    mySerial.begin(9600);
}

int read(){
    if(mySerial.available()) return mySerial.read();
    return NULL;
}