#include <SoftSerial.h>//new software serial lib
#include <TinyPinChange.h>//required for Digispark

SoftSerial mySerial(2, 3); // RX, TX

void setup() {
//Set the data rate for the SoftwareSerial port
mySerial.begin(9600);
mySerial.println("Hello, world?");//Write to serial
}


void loop() {
mySerial.println("Something here");//a loop write
}
