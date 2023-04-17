#define CDS 2
#define LED 8
#define speakpin 7
int note[] = {2093,2349,2637,2793,3136,3520,3951,4186};

void setup() {
  Serial.begin(9600);
  pinMode(CDS, INPUT);
  pinMode(LED,OUTPUT);
}

void loop() {
  if (digitalRead(CDS) == HIGH) {
    Serial.println("CDS ON");
    digitalWrite(LED,HIGH); 
    
    tone(speakpin,note[0],500);
    delay(200);
  }else{
    Serial.println("CDS off");
    digitalWrite(LED,LOW); 
    
    tone(speakpin,note[1],500);
    delay(200);
  }
 delay(500);
}
