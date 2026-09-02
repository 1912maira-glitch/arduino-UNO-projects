int value;
int mapped_value;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  value = analogRead(A1);
  mapped_value = map(value, 0, 1023, 100, 200);

  Serial.print("Original Value: ");
  Serial.print(value);

  Serial.print("   Mapped Value: ");
  Serial.print(mapped_value);

  if(mapped_value >= 100 && mapped_value <= 130)
  {
    Serial.println("  --> LOW");
  }
  else if(mapped_value >= 131 && mapped_value <= 170)
  {
    Serial.println("  --> MEDIUM");
  }
  else
  {
    Serial.println("  --> HIGH");
  }
  delay(200);
}