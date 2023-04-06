#define Read 7

void setup(){
  pinMode(Read, INPUT);
  Serial.begin(9600);
}

void loop(){
  if(digitalRead(6) == 0){
    Serial.println("흰색물체 감지");
  }else{
    Serial.println("감지없음");
  }
  delay(10);
}