#include <TimerOne.h>

const int LED = 10;

void setup(){
  Timer1.initialize();
  Timer1.pwm(LED,0);

  Timer1.setPeriod(1000000/20); 
  //1Hz/n = 주파수 주기간격 조절 -> 1초당 1*n번 점멸

  for(int i = 0; i <= 1023; i++){
    Timer1.setPwmDuty(LED,i*i);
    delay(100);  
    //HIGH : 0~1023 -> LED 밝기 조절 
  }
}

void loop(){

}