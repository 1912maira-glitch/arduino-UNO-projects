int LDRpin = A1;
int LEDpin = 3;

void setup()
{
  pinMode(LEDpin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int LDRvalue = analogRead(LDRpin);

  int brightness = map(LDRvalue, 0, 1023, 255, 0);

  analogWrite(LEDpin, brightness);

  Serial.print("LDR Value: ");
  Serial.print(LDRvalue);
  Serial.print(" | LED Brightness: ");
  Serial.println(brightness);

  delay(100);
}