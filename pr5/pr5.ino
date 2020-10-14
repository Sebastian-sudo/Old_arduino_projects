int number;
int buzz = 7;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(buzz, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  while (Serial.available() == 0) {
    
  }
  number = Serial.parseInt();
  if (number > 10) {
    digitalWrite(buzz, HIGH);
  }
  else {
    digitalWrite(buzz, LOW);
  }
 }
