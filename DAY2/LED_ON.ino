const int LED = 8;

void setup(){
    pinMode(LED, OUTPUT);
    digitalWrite(LED, HIGH);
    Serial.begin(9600);
}

void loop(){
  int button = digitalRead(LED);
    Serial.println(button);
    if(button == 1){
        digitalWrite(LED, LOW);
        delay(100);
       
    }else{
       digitalWrite(LED, HIGH);
       delay(100);
    }
   
}