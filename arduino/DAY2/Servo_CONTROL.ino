#include<Servo.h> 
Servo servo;      
int angle[5] = {0,45,90,135,179};    

void setup() {
  servo.attach(7);     
}

void loop() {

  for(int i = 0; i < 5; i++){
     int value = angle[i];
    servo.write(angle[i]); 
    delay(500);
  }
}
