
int button[5] = {7,6,5,4,3};
int arr[5]={262,294,330,349,393};
void setup(){
  for(int i = 0; i < 5; i++){
    pinMode(arr[i],INPUT);
  }
  noTone(13);
}

void loop(){
  // 이부분은 일일히 하나하나 해야한다.
  for(int i = 0; i < 5; i++){
    if(digitalRead(button[i]) == HIGH){tone(13, arr[i]);}
    else{noTone(13);}
  }}
