#define TRIG 9 //TRIG 초음파 보냄
#define ECHO 8 //ECHO 초음파 받음

void setup() {

  Serial.begin(9600); //PC모니터로 센서값을 확인을 위한 시리얼 통신
  pinMode(TRIG, OUTPUT); //초음파를 보낸다.
  pinMode(ECHO, INPUT);  //초음파를 받는다.
}

void loop()
{
  long duration, distance;

  digitalWrite(TRIG, LOW);
  delayMicroseconds(2); //delay보다 짧은 것
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);

  duration = pulseIn (ECHO, HIGH); //초음파의 시간
  distance = duration * 17 / 1000; //초음파센서의 거리값 및 계산값 [CM]

  Serial.println(duration); 
  Serial.print("\nDIstance : "); //초음파의 시간

  Serial.print(distance); 
  Serial.println(" Cm"); //초음파센서의 거리값 및 계산값 [CM]

  delay(100); //0.1초마다 측정값을 보여줍니다.
}
