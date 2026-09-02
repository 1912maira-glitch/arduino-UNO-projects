void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int value = analogRead(A1);
  if (value >= 500)
  {
    Serial.println(value);
    Serial.println("Very Bright");
  }
  else
  {
    Serial.println(value);
    Serial.println("Dim");
  }
}