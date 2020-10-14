#include <LiquidCrystal.h> //Dołączenie bilbioteki
LiquidCrystal lcd(7, 8, 9, 10, 11, 12); //Informacja o podłączeniu nowego wyświetlacza
float num1;
float num2;
String operator_temp;
 
void setup() {
  lcd.begin(16, 2); //Deklaracja typu
  lcd.setCursor(0, 0); //Ustawienie kursora
  lcd.print("Start"); //Wyświetlenie tekstu
  Serial.begin(9600);
}
 
void loop() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("First number:");
  while (Serial.available() == 0) {
    
  }
  num1 = Serial.parseFloat();
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Second number:");
  while (Serial.available() == 0) {
    
  }
  num2 = Serial.parseFloat();
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Operator (+-*/)");
  while (Serial.available() == 0) {
    
  }
  operator_temp = Serial.readString();
  lcd.clear();
  lcd.setCursor(0, 0);
  if (operator_temp == "+") {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(num1);
    lcd.print("+");
    lcd.print(num2);
    lcd.print("=");
    lcd.print(num1 + num2);
  }
  if (operator_temp == "-") {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(num1);
    lcd.print("-");
    lcd.print(num2);
    lcd.print("=");
    lcd.print(num1 - num2);
  }
  if (operator_temp == "*") {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(num1);
    lcd.print("*");
    lcd.print(num2);
    lcd.print("=");
    lcd.print(num1 * num2);
  }
  if (operator_temp == "/") {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(num1);
    lcd.print("/");
    lcd.print(num2);
    lcd.print("=");
    lcd.print(num1 / num2);
  }
  delay(5000);
}
