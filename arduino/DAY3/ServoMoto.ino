#include <TimerOne.h>

const int SERVO = 10;

const int SERVO_PERIOD = 20000;
const int SERVO_MINDUTY = (1024/20)*0.7;
const int SERVO_MAXDUTY = (1024/20)*2.3;

void setup(){
 Timer1.initialize();
 Timer1.pwm(SERVO,0);

 Timer1.setPeriod(SERVO_PERIOD);
 Timer1.setPwmDuty(SERVO, SERVO_MINDUTY);
 delay(1000);
for(;;){
 for(int i = SERVO_MINDUTY; i <=SERVO_MAXDUTY; i++){
   Timer1.setPwmDuty(SERVO, i);
   delay(100); 
   }

  for(int i = SERVO_MAXDUTY; i > SERVO_MINDUTY; i--){
   Timer1.setPwmDuty(SERVO, i);
   delay(100); 
   }
 }
 Timer1.disablePwm(SERVO);
}

void loop(){

}