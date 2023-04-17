#### 아두이노로 이용한 3가지 센서
1. LED_ON
> [1] LED_ON [TimerOne Test]<br>
> [2] Timer1.initialize() , Timer1.pwm(LED,0); //초기값<br>
> [3] Timer1.setPEriod(1000000/n); // 주파수 주기간격 -> 1chekd 1*n번<br> 
< [4] Timer1.setPwmDuty(LED,i); // LED의 밝기 조절하는 i.<br>
2. LED_ON1
> [1] analogRead(pin 번호) // 연속적인 변화량을 읽는 명령어  <br>
> [2] analogWrite(pin번호, analogRead/n) // 핀번호의 밝기 양 조절 <br>
3. LED_ON3
> [1] buttonPRessed() //LED의 버튼상태 true,false 상태 지정함수  <br>
> [2] pinMode(pin,state) //INPUT, OUTPUT의 핀번호를 입력 <br>
> [3] attachInterrupt() //디바이스 컨트롤러를 통한 "인터럽트" 작용으로 기계제어하는 함수<br>
> [4] LED_state_change // while문을 통한 if조건문으로 digitalWrite를 통한 상태변경 <br>
4. Buzzer
> [1] LED_ON[TimerOne Test] 를 통한 버즈음향에 해당한 배열값 입력 <br>
> [2] 기본 명령어 세팅한 후 for문을 통핸 setPeriod()명령 변경하여 음량 조절<br>
> [3] 기본 초기값 버즈의 음향 테스트로 loop문을 돌지 않고, 확인작업만 했다<br>
5. ServoMoto
> [1] LED_ON[TimerOne Test] 를 통한 SERVO_MINDUTY, SERVO_MAXDUTY 초기값 지정. <br>
> [2] 기본 명령어 세팅한 후 for문을 통핸 setPeriod()함수 호출로 SERVO의 펄스 값 지정<br>
> [3] SERVO의 값의 변경 및 초기화 뿐만 아닌 초기버전으로 돌리기 위해 되돌리는 for문 작성<br>