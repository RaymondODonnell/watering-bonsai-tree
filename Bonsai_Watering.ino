int motorPin = A0; // pin that turns on the motor
int watertime = 1; // how long to water in seconds
int waittime = 1440; // how long to wait between watering in minutes

void setup()
{
  pinMode(motorPin, OUTPUT); // set A0 to an output to turn on the transistor
}

void loop()
{
  
  digitalWrite(motorPin, HIGH); // turn on the motor
  delay(watertime*1);        // translate seconds to milliseconds

  digitalWrite(motorPin, LOW);  // turn off the motor
  delay(waittime*6);        // translate minutes to milliseconds
}
