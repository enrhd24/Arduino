const int ledPin= 10;
const int analogPin= A0;

void setup(){
    Serial.begin(9600);
}

void loop(){
    int sensorInput = analogRead(analogPin);
    Serial.println(sensorInput);

    analogWrite(ledPin,sensorInput/4);
}