#include <Servo.h>
int ANGLE = 0;
const int analogPin = A0;

const int LED = 13;
int t_hight = 0;

Servo servo;
unsigned long t_prev = 0;
const unsigned long t_delay = 1000;;

void setup()
{
pinMode(A0, INPUT);
servo.attach(9);
}

void loop()
{
  unsigned long t_now = millis();
  int sensorInput = analogRead(analogPin);
  analogWrite(A1, sensorInput/4);
  int senInput = map(sensorInput, 0, 1023, 0, 180);
  servo.write(senInput);
  if (t_now - t_prev >= t_delay) {
    
    if(ANGLE < 90) {
      servo.write(senInput);}  
    else {
      servo.write(senInput);}
    }
}