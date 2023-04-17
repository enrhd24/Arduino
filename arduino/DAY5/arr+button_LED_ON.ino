int arr[3] = {8,9,10};

void setup(){
  for(int i = 0; i < 3; i++){
    pinMode(i,OUTPUT);
  }
  pinMode(7,INPUT);
}

void loop(){
  int button = digitalRead(7);
  if(button == HIGH){
    for(int i = 0; i < 3; i++){
    digitalWrite(arr[i],HIGH);
    delay(100);
    }
  }
  else{
    for(int i = 0; i < 3; i++){
    digitalWrite(arr[i],LOW);
    delay(100);
    }
  }
}