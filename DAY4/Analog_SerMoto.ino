
#include <Servo.h>

Servo myservo;  

const int ledPin = 10;
const int analogPin = A0;

void setup(){
	Serial.begin(9600);
  myservo.attach(10);
}

void loop(){
	int sensorInput = analogRead(analogPin);
  int senInput = map(sensorInput, 0, 1023, 0, 180);
    myservo.write(senInput);
    delay(20);
}