#include <DHT.h>
#define Type DHT11
int sensePin = 3;
DHT ht(sensePin, Type);
float humidity;
float temp;

void setup(){
  Serial.begin(9600);
  ht.begin();
}

void loop(){
  humidity = ht.readHumidity();
  temp = ht.readTemperature();
  Serial.println("Humidtity:");
  Serial.println(humidity);
  Serial.println("Temperature:");
  Serial.println(temp);
  delay(1000);
  Serial.println("\n");
}
