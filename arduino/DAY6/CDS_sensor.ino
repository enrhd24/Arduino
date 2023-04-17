int CDS = A0;   // 조도 센서 모듈 연결한 핀
int LED = 8;    // LED 연결한 핀
 
void setup() {
  Serial.begin(9600);
  pinMode(CDS, INPUT);  // 조도 센서를 입력 핀으로 설정
  pinMode(LED,OUTPUT);  // LED를 출력 핀으로 설정
}
 
void loop() {
  CDS = analogRead(CDS);    // 조도 센서의 측정 값을 val에 저장
  Serial.print("CDS_Sensor: ");
  Serial.println(CDS);         // 시리얼 모니터에 조도 센서의 측정 값 출력
 
  if(CDS > 400) {               // 측정 값이 500 초과이면
    digitalWrite(LED, HIGH);    // LED 켜기
    Serial.println("LED ON");   // 시리얼 모니터에 출력
  }
  if(CDS <= 400){
    digitalWrite(LED, LOW);    // LED 끄기
    Serial.println("LED OFF");   // 시리얼 모니터에 출력
  }
}