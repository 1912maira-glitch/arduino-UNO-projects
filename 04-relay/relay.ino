int relay = 7;
int button = 11;
int relayState = LOW;
int lastButtonState = HIGH;

void setup()
{
  pinMode(relay, OUTPUT);
  pinMode(button, INPUT_PULLUP);
}

void loop()
{
  int buttonState = digitalRead(button);
  if (lastButtonState == HIGH && buttonState == LOW)
  {
    relayState = !relayState;  
    digitalWrite(relay,relayState);                   
  }
  lastButtonState = buttonState;
}