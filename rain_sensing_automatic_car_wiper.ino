#include <Servo.h>

Servo wiper;

int rainSensor = A0;
int rainValue;

void setup()
{
  Serial.begin(9600);
  wiper.attach(9);
}

void loop()
{
  rainValue = analogRead(rainSensor);

  Serial.print("Rain Value: ");
  Serial.println(rainValue);

  // If rain detected
  if(rainValue < 600)
  {
    for(int pos = 0; pos <= 90; pos += 5)
    {
      wiper.write(pos);
      delay(20);
    }

    for(int pos = 90; pos >= 0; pos -= 5)
    {
      wiper.write(pos);
      delay(20);
    }
  }
  else
  {
    wiper.write(0);   // stop wiper
  }

  delay(200);
}