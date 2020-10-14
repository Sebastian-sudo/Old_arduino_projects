int count = 0;
int motor = 6;
int switchButton = 5;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(motor, OUTPUT);
  pinMode(switchButton, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  count = digitalRead(switchButton);
  Serial.println(count);
  if (count == 0) {
    digitalWrite(motor, LOW);
  }
  if (count == 1) {
    digitalWrite(motor, HIGH);
  }
  delay(500);  
}
