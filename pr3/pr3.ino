int number;
int led = 7;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Enter number: ");
  while (Serial.available() == 0) {
    
  }
  number = Serial.parseInt();
  for (int i = 0; i < number; i++) {
    digitalWrite(led, HIGH);
    delay(200);
    digitalWrite(led, LOW);
    delay(200);
  }
}
