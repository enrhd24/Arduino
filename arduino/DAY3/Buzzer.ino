#include <TimerOne.h>

const int BUZZER = 10;
const int listen[] = {262,294,330,349,393,440,494,523};
const int LIST[] = {330,294,262,294,330,330,330,294,294,294,330,330,330,330,294,262,294,330,330,330,294,294,330,294,262};

void setup(){
  Timer1.initialize();
  Timer1.pwm(BUZZER,0);

  Timer1.setPwmDuty(BUZZER,100);
  for(int i = 0; i <25; i++){
    Timer1.setPeriod(1000000/LIST[i]);
    delay(250);
  }
  Timer1.setPwmDuty(BUZZER,0);
}

void loop(){

}