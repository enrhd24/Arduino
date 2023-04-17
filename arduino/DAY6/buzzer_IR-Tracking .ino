#define Read 7
#define LED 2
#define speakpin 8
int note[] = {2093,2349,2637,2793,3136,3520,3951,4186};


void setup(){
  pinMode(Read, INPUT);
  pinMode(LED,OUTPUT);
  Serial.begin(9600);
}

void loop(){
  if(digitalRead(Read) == 0){
    digitalWrite(LED,HIGH);
    delay(100);
    Serial.println("흰색물체 감지");

    tone(speakpin,note[0],500);
    delay(200);
  }
  else{
    digitalWrite(LED,LOW);
    delay(100);
    Serial.println("감지없음");
  }
  delay(10);
}