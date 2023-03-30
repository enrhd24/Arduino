int array[6] = {3,5,6,7,8,9};
void setup()
{
  Serial.begin(9600);
  Serial.println("touch Board");
  pinMode(array[0],INPUT);
  pinMode(array[1],OUTPUT);
  pinMode(array[2],OUTPUT);
  pinMode(array[3],OUTPUT);
  pinMode(array[4],OUTPUT);
  pinMode(array[5],OUTPUT);
 
}

void loop()
{
  int button = digitalRead(array[0]);
  Serial.println(button);

  if(button == HIGH){
    for(int i = 1; i < 6; i+=2){
      digitalWrite(array[i], HIGH);
      delay(100);
    }

    for(int i = 1; i < 6; i+=2){
      digitalWrite(array[i], LOW);
      delay(100);
    }
  }
  else if (button == LOW){
    for(int i = 2; i < 6; i+=2){
      digitalWrite(array[i], HIGH);
      delay(100);
    }
    for(int i = 2; i < 6; i+=2){
      digitalWrite(array[i], LOW);
      delay(100);
    }
  }
}