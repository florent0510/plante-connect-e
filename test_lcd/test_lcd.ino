#include <dht_nonblocking.h>


/*
  Affichage de la température et de l'humidité ambiante sur un écran LCD.
  Author : Alexandre PERETJATKO.
*/
// ------------------------------------------------------------------
// Ecran LCD
#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
// ------------------------------------------------------------------
// for DHT11, ( Capteur Temperature + Humidité )
//      VCC: 5V or 3V
//      GND: GND
//      DATA: pinDHT11

long a;
// =======================================================================
void setup() {
  Serial.begin(9600);
  // Initialisation de l'écran LCD
  lcd.begin(16, 2); // 16 colonnes et 2 lignes
}
// =======================================================================
void loop() {
  // Affichage sur le terminal
  Serial.println("=================================");
  // Lecture de la température et de l'humidité ------------------
a=sr04.Distance();

  }

  // Ecran LCD --------------------------------------------------
  lcd.setCursor(0, 0);
  lcd.print("Temperature: "); lcd.print((long)a); lcd.print("C");
 // lcd.setCursor(0, 1);
 // lcd.print("Humidite   : ");    lcd.print((int)humidity);    lcd.print("%");
  delay(2000);
