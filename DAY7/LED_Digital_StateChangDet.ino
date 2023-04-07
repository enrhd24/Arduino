const int buttonPin = 2; 
const int ledPin1 = 13;
const int ledPin2 = 12;   

int buttonPushCounter = 0;  
int buttonState = 0;        
int lastButtonState = 0;   

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  Serial.begin(9600);
}


void loop() {
  buttonState = digitalRead(buttonPin);
  if (buttonState != lastButtonState) {
    if (buttonState == HIGH) {
      buttonPushCounter++;
      Serial.println("on");
      Serial.print("number of button pushes: ");
      Serial.println(buttonPushCounter);
    } else {
      Serial.println("off");
    }
    delay(50);
  }
  lastButtonState = buttonState;


  if (buttonPushCounter == 0) {
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
  } else if (buttonPushCounter % 2 == 0) {
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin1, LOW);
  } else if (buttonPushCounter % 2 != 0){
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin1, HIGH);
    
  }
}
