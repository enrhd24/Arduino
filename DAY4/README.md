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