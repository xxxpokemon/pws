#define ANALOG0 0

void setup() {
  // put your setup code here, to run once:
  //setPwmFrequency(5, 1);
  //https://www.arduino.cc/en/Tutorial/SecretsOfArduinoPWM
  //we moeten de pwm freq naar 60kHz doen
  //TCCR1A=0b10000011;
  //TCCR1B=0b00001001;

  TCCR1A = ((1 << COM1A1) | (1 << WGM11) | (1 << WGM10));
  TCCR1B = ((1 << WGM12) | (1 << CS10));
  DDRB = (1 << 1);
    
}
  
int val;
  
void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(ANALOG0);
  OCR1A = val;
}
