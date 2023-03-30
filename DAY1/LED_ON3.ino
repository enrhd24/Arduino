int array[10] = {2,3,4,5,6,7,8,9};
void setup()
{
  Serial.begin(9600);
  Serial.println("touch Board");
  pinMode(array[0],OUTPUT);
  pinMode(array[1],INPUT);
  pinMode(array[2],OUTPUT);
  pinMode(array[3],OUTPUT);
  pinMode(array[4],OUTPUT);
  pinMode(array[5],OUTPUT);
  pinMode(array[6],OUTPUT);
  pinMode(array[7],OUTPUT);
 
}

void loop()
{
  int button = digitalRead(array[1]);
  Serial.println(button);
  
  for(int i = 2; i < 10; i+=2){
    digitalWrite(i, HIGH);
    delay(100);
  }
  for(int i = 2; i <10; i+=2){
    digitalWrite(i, LOW);
    delay(100);
  }

  for(int i = 3; i < 10; i+=2){
    digitalWrite(i, HIGH);
    delay(100);
  }
  for(int i = 3; i <10; i+=2){
    digitalWrite(i, LOW);
    delay(100);
  }

  

}