void setup(){

  pinMode(10, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  int button1 = digitalRead(5);
  int button2 = digitalRead(6);
  // Serial.println(button1);
  Serial.println(button2);
  
  if(button1 == HIGH || button2 == HIGH){
    digitalWrite(10, HIGH);
    delay(1000);
    digitalWrite(10,LOW);
    delay(1000);
  }

}