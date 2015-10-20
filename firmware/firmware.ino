#define ANALOG0 0

#define OFFSET 256
        

void setup() 
{
  // put your setup code here, to run once:
  //ADC setup - here
  ADMUX = 0b00000000;
  ADCSRA = ((1 << ADEN) | (1 << ADSC) | (1 << ADATE) | (1 << ADIE)); 
  ADCSRB = 0b00000000;
  //setPwmFrequency(5, 1);
  //https://www.arduino.cc/en/Tutorial/SecretsOfArduinoPWM
  //we moeten de pwm freq naar 60kHz doen
  //TCCR1A=0b10000011;
  //TCCR1B=0b00001001;

  TCCR1A = ((1 << COM1A1) | (1<<COM1B1)|(1 << WGM11));
  TCCR1B = ((1 << WGM12) | (1 << CS10));
  DDRB = (1 << 1)| (1<<2);//pin b1 & pin b2 output
    
}
  
uint16_t val;
  
void loop() 
{
 
}

// Interrupt service routine for the ADC completion
ISR(ADC_vect)
{

  // Must read low first
  val = ADCL | (ADCH << 8);
  //val is nu 10 bits , we willen 9 bits (we moeten door 2 delen) 
  val = val/2;
  if (val >= OFFSET) {
    OCR1B = 0;    //eerst uit, anders kortsluiting 
    OCR1A = val - OFFSET; 
   } else {
    OCR1A = 0;
    OCR1B = OFFSET - val; 
   }
}



