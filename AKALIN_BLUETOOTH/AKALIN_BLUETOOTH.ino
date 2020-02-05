//https://diytechdotnet.wordpress.com/2015/01/29/error-pada-bluetooth-hc-05/
#include <SoftwareSerial.h>
char val;
int ledpin = 13;
SoftwareSerial Serial1(2, 3);

void setup() {
pinMode(ledpin, OUTPUT);
Serial1.begin(9600);
}

void loop()

{
if( Serial1.available() )
{
//digitalWrite(ledpin, HIGH);
val = Serial1.read();
}
if (val == 'H')
{
digitalWrite(ledpin, HIGH);
} 
else

{
digitalWrite(ledpin, LOW);
}
delay(100);
}
