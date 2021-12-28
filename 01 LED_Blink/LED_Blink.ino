const int ledpin = 13;
const int delaytime = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledpin, OUTPUT); // ledpin as output
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledpin, HIGH); // led on
  delay(delaytime); // wait
  digitalWrite(ledpin, LOW); //led off
  delay(delaytime); // wait
}
