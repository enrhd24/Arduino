### 아두이노로 이용한 millios함수
1. ALED_ON ~ DLED_ON
> [1] ALED_ON ~ DLED_ON [millos blink Test]<br>
2. millis_millis
> [1] 아두이노시작시점부터 시간측정 <br>
3. millis_delay + 'delay'
> [1] 아두이노시작시점의 delay지정 <br>
> [2] 아두이노시작시점의 delay+delay 다중작업<br>
> [2] LED_ON으로 사용시 하이로우 사이 간격지정<br>
4. millis_A+D_LED_ON
> [1] LED_ON의 베타테스크 blink 실행 <br>
> [2] millis의 현재시점과 delay시점 측정 <br>
> [3] LED_ON의 delay의 시점과 맞게 결합 <br>
5. Analog_ServoMoto ~ millis_ServoMoto
>[1] ServoMoto [millos blink Test]<br>
>[2] 초기값, 앵글, delay(milis), Servo구조체, analogPin지정<br>
>[3] setup의 pinMode와 servo.arrach()지정 <br>
>[4] 현재시간, analogPin입력, ServoMoto angle 지정 및 angle 초기화<br>
>[5] 인터럽트를 활용하여 delay 범위랑 angle 범위 지정 <br> 
### ![ServoMoto](../image/millis_ServoMoto.png)
#### 6. 최종본
> [1] Analog_ServoMoto ~ millis_ServoMoto <br>
> [2] Analog_LED_ON 단, 가변저항 받은 값으로 처리<br>