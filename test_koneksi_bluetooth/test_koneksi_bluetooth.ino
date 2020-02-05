#include <SoftwareSerial.h>

SoftwareSerial mySerial(10,11); //rx,tx

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

pinMode(9,OUTPUT);
digitalWrite(9,HIGH);
Serial.println("Enter AT Commands:");
mySerial.begin(38400);
}

void loop() {
  // put your main code here, to run repeatedly:
if(mySerial.available())
Serial.write(mySerial.read());
if(Serial.available());
mySerial.write(Serial.read());
}
