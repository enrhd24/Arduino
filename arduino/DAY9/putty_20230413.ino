#define cnt 2
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  if(Serial.available()){
    char input = Serial.read();
    for(int i = 1; i < 10; i++){
    Serial.println(input);
    if (i == cnt){break;}
    }
  } 
}
