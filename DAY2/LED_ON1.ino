
void setup()
{
  Serial.begin(9600);  
  pinMode(13, OUTPUT);
  
}

void loop()
{
  
  int analogValue = analogRead(A0);
  Serial.println(analogValue);
  
  analogWrite(13, analogValue/4); 
}