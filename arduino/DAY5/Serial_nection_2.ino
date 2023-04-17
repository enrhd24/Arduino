int intvalue = 0;
String stringvalue = "";
float floatvalue = 0.0;

void setup(){
  Serial.begin(9600);
  Serial.flush();
}

void loop(){
  if(Serial.available() > 0){
    intvalue = Serial.read();
    Serial.print("intvalue: ");
    Serial.println(intvalue);

    stringvalue = (char)Serial.read();
    Serial.print("stringvalue: ");
    Serial.println(stringvalue);

    floatvalue = (float)Serial.read();
    Serial.print("floatvalue: ");
    Serial.println(floatvalue);
  }
}
