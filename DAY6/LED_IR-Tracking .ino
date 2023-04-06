#define Read 7
#define LED 2

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
  }else{
    digitalWrite(LED,LOW);
    delay(100);
    Serial.println("감지없음");
  }
  delay(10);
}