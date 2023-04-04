int arr[3] = {8,9,10};

void setup(){
  for(int i = 0; i < 3; i++){
    pinMode(i,OUTPUT);
  }
}

void loop(){
  for(int i = 0; i < 3; i++){
    digitalWrite(arr[i],HIGH);
    delay(100);
  }
  for(int i = 0; i < 3; i++){
    digitalWrite(arr[i],LOW);
    delay(100);
  }

}