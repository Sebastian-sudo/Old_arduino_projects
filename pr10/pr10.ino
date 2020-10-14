#include <LiquidCrystal.h> //Dołączenie bilbioteki
LiquidCrystal lcd(7, 8, 9, 10, 11, 12); //Informacja o podłączeniu nowego wyświetlacza
 
void setup() {
  lcd.begin(16, 2); //Deklaracja typu
  lcd.setCursor(0, 0); //Ustawienie kursora
  lcd.print("Start"); //Wyświetlenie tekstu
}
 
void loop() {
  lcd.setCursor(0, 0);
  lcd.print("Counting: ");
  for (int i = 0; i < 10000; i++) {
    lcd.setCursor(0, 1);
    lcd.print(i);
    delay(50);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Counting: ");
  }
}
