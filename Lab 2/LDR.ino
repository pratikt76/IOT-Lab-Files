#define sensorPin A0
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int reading = analogRead(sensorPin);

  float voltage = reading * (5000 / 1024.0);

  float temperature = voltage / 10;

  Serial.print(temperature);
  Serial.print(" \xC2\xB0");
  Serial.println("C");

  delay(1000);
}
