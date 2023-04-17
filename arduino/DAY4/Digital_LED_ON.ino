const int LED = 13;

void setup(){
	pinMode(LED,OUTPUT);
}

void loop(){
  for (int i = 0; i <= 1; i++){
  	digitalWrite(LED, i);
    delay(500);
  }
}