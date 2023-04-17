
int trig = 2;          
int echo = 3;
int RED = 8;       
int YELLOW = 9;     
int GREEN = 10;    

void setup()
{
  Serial.begin(9600);
  pinMode(echo, INPUT);
  pinMode(trig, OUTPUT);
  pinMode(RED, OUTPUT);     
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);
}

void loop()
{
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  unsigned long duration = pulseIn(echo, HIGH); 
  float distance = ((float)(340 * duration) / 10000) / 2;  
  
  Serial.print(distance); Serial.println("cm"); delay(50);

  if (distance > 200 & distance < 250) digitalWrite(GREEN, HIGH);            
  else if (distance > 150 & distance < 200) digitalWrite(YELLOW, HIGH);
  else if (distance > 100 & distance < 150) digitalWrite(RED, HIGH);
  else{digitalWrite(GREEN, LOW); digitalWrite(YELLOW, LOW); digitalWrite(RED, LOW);
  }
}