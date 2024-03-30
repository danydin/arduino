int DELAY_3S = 3000;

void setup() {
  // put your setup code here, to run once:
  // OUT{UT means the arduino will output voltage - INPUT means arduino will send information
  pimMode(3, OUTPUT);
  pimMode(4, OUTPUT);
  pimMode(5, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  // HIGH = 5v

  // used for greed led
  digitalWrite(3,HIGH);
  delay(DELAY_3S);
  digitalWriter(3,LOW);

  // yellow
  digitalWrite(4,HIGH);
  delay(1000);
  digitalWriter(4,LOW);
  
  //red
  digitalWrite(5,HIGH);
  delay(DELAY_3S);
  digitalWriter(5,LOW);
}
