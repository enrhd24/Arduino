int intvalue = 77;
char charvalue = 'a';
float floatvalue = 1.2345;

void setup(){
  Serial.begin(9600);
  
  Serial.print("DEC: ");
  Serial.println(intvalue);
  Serial.print("HEX: ");
  Serial.println(intvalue, HEX);

  Serial.print("charvalue: ");
  Serial.println(charvalue);
  Serial.print("floatvalue: ");
  Serial.println(floatvalue, HEX);
}

void loop(){
}
