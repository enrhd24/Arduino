// C++ code
//
void setup()
{
  Serial.begin(9600);
  Serial.println("touch Board");
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
 
}

void loop()
{
  
  for(int i = 2; i < 10; i+=2){
    digitalWrite(i, HIGH);
    delay(100);
  }

  for(int i = 2; i < 10; i+=2){
     digitalWrite(i, LOW);
    delay(100);
  }
  
   
  for(int i = 3; i < 10; i+=2){
     digitalWrite(i, HIGH);
    delay(100);
  }

  for(int i = 3; i < 10; i+=2){
       digitalWrite(i, LOW);
    delay(100);
  }
}