int trigPin = 6;
int echoPin = 5;
float TravelTime;

void setup() {
  // put your setup code here, to run once:
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigPin, LOW);
  delay(10);
  digitalWrite(trigPin, HIGH);
  delay(10);
  digitalWrite(trigPin, LOW);
  TravelTime = pulseIn(echoPin, HIGH) * 0.0064 * 2.54;
  Serial.println(TravelTime);
  delay(1000);
}
