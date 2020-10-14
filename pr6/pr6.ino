int ledPin = 4;;
int buttonPin = 7;
int buttonRead;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonRead = digitalRead(buttonPin);
  Serial.println(buttonRead);
  if (buttonRead == 0) {
    digitalWrite(ledPin, HIGH);
  }
  if (buttonRead == 1) {
    digitalWrite(ledPin, LOW);
  }
}
