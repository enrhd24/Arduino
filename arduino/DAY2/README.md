### ![Terrific](../image/JoyStick_ON.png)
#### 아두이노로 이용한 5가지 센서
1. LED_ON ~ LED_ON1
> [1] LED_ON [blink Test]<br>
2. JoyStick_ON
> [1] 조이스틱 'x축'과'y축'선정 <br>
> [2] 조이스틱 'x축'과'y축'출력 <br>
> [3] 스틱버튼 "ON","Off" 확인 <br>
3. Busser_ON
> [1] Buzzer의 음량 7개 선정 <br>
> [2] Buzzer의 버튼 7개 선정 <br>
> [2] button의 선택의 음량조절 <br>
4. Servo_CONTROL
> [1] 센서모터의 펄스값 5개로 분류작업 <br>
> [2] 센서모터에 입력할 값 'attach'한다. <br>
> [3] 펄스값을 나눈 범위에 따라 모터움직임. <br>

### ![Terrific](../image/Ultrasonic_LEDON.png)
### 5. LED_ON 5
> [1] 초음파센서의 INPUT과 OUTPUT핀을 구분 <br>
> [2] blink의 test코드를 넣은다음 거리를 계산. <br>
> [3] 조건문을 활용하여 전구의 불끼는 범위 지정 <br>
> [4] 전구의 초기값은 로우이며, 범위에따른 자극. <br>