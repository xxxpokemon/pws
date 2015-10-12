#define ANALOG0 0

void setup() {
  // put your setup code here, to run once:
  //setPwmFrequency(5, 1);
  //https://www.arduino.cc/en/Tutorial/SecretsOfArduinoPWM
  //we moeten de pwm freq naar 60kHz doen
  
}
  int val;
  
void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(ANALOG0);
  analogWrite(5, val);
}
