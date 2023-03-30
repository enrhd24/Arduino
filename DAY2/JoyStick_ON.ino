const int Xin = A0; //조이스틱 X좌표 입력 핀
const int Yin = A1; //조이스틱 Y좌표 입력 핀
const int KEYin = 3; //조이스틱 푸스버튼 입력 핀

void setup(){
    pinMode(KEYin,INPUT);
    Serial.begin(9600);
}

void loop(){
    int xVal = analogRead(Xin);
    int yYal = analogRead(Yin);
    int buttonVal = digitalRead(KEYin);

    Serial.print(" X= ");
    Serial.println(xVal,DEC);

    Serial.print(" Y= ");
    Serial.println(xVal,DEC);

    Serial.print(" Button is ");

    if(button == HIGH){
        Serial.println(" not pressed ");
    }else{
        Serial.println(" PRESSED ");
    }
}
