#define TRIG 9 //TRIG 초음파 보냄
#define ECHO 8 //ECHO 초음파 받음
#define speakpin 7
#define LED 5
#define button 3
int note[] = {2093,2349,2637,2793,3136,3520,3951,4186};


void setup() {

  Serial.begin(9600); //PC모니터로 센서값을 확인을 위한 시리얼 통신
  pinMode(TRIG, OUTPUT); //초음파를 보낸다.
  pinMode(ECHO, INPUT);  //초음파를 받는다.

  pinMode(LED,OUTPUT);  //    LED핀 번호
  pinMode(button,INPUT); // button핀 번호

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

  int Button = digitalRead(button);
  Serial.println(Button);

  if(Button == 1){
    if (4 < distance && distance <= 8){
      tone(speakpin,note[0],500);
      delay(200);
      digitalWrite(LED,HIGH);
      delay(100);
    }
    if (8 < distance && distance <= 12){
      tone(speakpin,note[1],500);
      delay(200);
      digitalWrite(LED,LOW);
      delay(100);
    }
    if (12 < distance && distance <= 16){
      tone(speakpin,note[2],500);
      delay(200);
      digitalWrite(LED,HIGH);
      delay(100);
    }
    if (16 < distance && distance <= 20){
      tone(speakpin,note[3],500);
      delay(200);
      digitalWrite(LED,LOW);
      delay(100);
    }
  }else{
    if (20 < distance && distance <= 24){
      tone(speakpin,note[4],500);
      delay(200);
      digitalWrite(LED,HIGH);
      delay(100);
      }
    if (24 < distance && distance <= 28){
      tone(speakpin,note[5],500);
      delay(200);
      digitalWrite(LED,LOW);
      delay(100);
      }
     if (28 < distance && distance <= 32){
      tone(speakpin,note[6],500);
      delay(200);
      digitalWrite(LED,HIGH);
      delay(100);
      }
     if (0 < distance && distance <= 4){
      tone(speakpin,note[7],500);
      delay(200);
      digitalWrite(LED,LOW);
      delay(100);
     }
  }

  delay(100); //0.1초마다 측정값을 보여줍니다.
}