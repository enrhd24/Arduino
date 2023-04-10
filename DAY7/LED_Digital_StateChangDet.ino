const int BUTTON_PIN = 2;
const int LED_PIN_1 = 13;
const int LED_PIN_2 = 12;

unsigned long lastDebounceTime = 0;
unsigned long debounceDelay = 50;

int buttonPushCounter = 0;
int buttonState = 0;
int lastButtonState = 0;
int ledState = LOW;

void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  pinMode(LED_PIN_1, OUTPUT);
  pinMode(LED_PIN_2, OUTPUT);
}

void loop() {
  unsigned long currentTime = millis();
  if (currentTime - lastDebounceTime >= debounceDelay) {
    lastDebounceTime = currentTime;

    buttonState = digitalRead(BUTTON_PIN);
    if (buttonState != lastButtonState) {
      lastButtonState = buttonState;

      if (buttonState == HIGH) {
        buttonPushCounter++;
      }
    }
  }

  if (buttonPushCounter == 0) {
    if (ledState != LOW) {
      digitalWrite(LED_PIN_1, LOW);
      digitalWrite(LED_PIN_2, LOW);
      ledState = LOW;
    }
  } else if (buttonPushCounter % 2 == 0) {
    if (ledState != HIGH) {
      digitalWrite(LED_PIN_2, HIGH);
      digitalWrite(LED_PIN_1, LOW);
      ledState = HIGH;
    }
  } else if (buttonPushCounter % 2 != 0){
    if (ledState != HIGH) {
      digitalWrite(LED_PIN_2, LOW);
      digitalWrite(LED_PIN_1, HIGH);
      ledState = HIGH;
    }
  }

  digitalWrite(LED_PIN_1, ledState);
}