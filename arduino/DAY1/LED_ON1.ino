// C++ code
//
void setup()
{
  Serial.begin(9600);
  Serial.println("touch Board");
  pinMode(3, INPUT);
  
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
 
}

void loop()
{
  int button = digitalRead(3);
  Serial.println(button)
  
  if(button == HIGH){
   for(int i = 2; i < 10; i+=2){
    digitalWrite(i, HIGH);
    delay(100);
    digitalWrite(i, LOW);
    delay(100);
  }
  }else{
   for(int i = 3; i < 10; i+=2){
     digitalWrite(i, HIGH);
    delay(100);
    digitalWrite(i, LOW);
    delay(100);
  }
}
 
}