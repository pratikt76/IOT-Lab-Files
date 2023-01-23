#include <SoftwareSerial.h>
SoftwareSerial xbeeSerial(2, 3); // RX, TX

void setup()
{
  Serial.begin(9600);
  xbeeSerial.begin(9600);
}

void loop()
{
  if (Serial.available() > 0)
  {
    char input = Serial.read();
    xbeeSerial.print(input);
  }
}
