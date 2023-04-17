int arr[3] = {8,9,10};
String Serial_Data = "";

void setup(){
  for(int i = 0; i < 3; i++){
    pinMode(i,OUTPUT);
  }
  pinMode(7,INPUT);

  Serial.begin(9600); // 통신속도로 설정
  Serial.flush(); // 시리얼 상의 잔여 데이터가 남지않도록 초기화

  // LED off
  digitalWrite(arr[0], LOW);
  digitalWrite(arr[1], LOW);
  digitalWrite(arr[2], LOW);

  Serial.println("해당 키를 입력해주세요");
  Serial.println();
}

void loop(){

   if (Serial.available() > 0)  // 시리얼 입력
  {
    Serial_Data = (char)Serial.read(); //한문자를 Serial_Data에 저장
    Serial.print("Serial_Data : ");
    Serial.println(Serial_Data);
    
    if (Serial_Data == "8") 
    {
      digitalWrite(arr[0], HIGH);
      digitalWrite(arr[1], LOW);
      digitalWrite(arr[2], LOW);
    }
     else if (Serial_Data == "9") 
    {
      digitalWrite(arr[0], LOW);
      digitalWrite(arr[01], HIGH);
      digitalWrite(arr[2], LOW);
    }
    else if (Serial_Data == "A")  
    {
      digitalWrite(arr[0], LOW);
      digitalWrite(arr[1], LOW);
      digitalWrite(arr[2], HIGH);
    }
  }
}