#define ANALOG0 0

void setup() {
  // put your setup code here, to run once:

}
  int val;
  
void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(ANALOG0);
  analogWrite(5, val);
}
