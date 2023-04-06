#define CDS 2
#define LED 8

void setup() {
  Serial.begin(9600);
  pinMode(CDS, INPUT);
  pinMode(LED,OUTPUT);
}

void loop() {
  if (digitalRead(CDS) == HIGH) {
    Serial.println("CDS ON");
    digitalWrite(LED,HIGH); 
  }else{
    Serial.println("CDS off");
    digitalWrite(LED,LOW); 
    
  }
 delay(500);
}


