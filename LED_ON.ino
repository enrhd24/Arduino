// LED가 항상 켜지는 상태
void setup() {
  pinMode(4, OUTPUT);
}

void loop() {
  digitalWrite(4, HIGH); 
  delay(1000);
}