#include <LiquidCrystal.h> // Incluye la librería para el display LCD

int rs = 12;  // Define el pin RS del LCD 
int e = 11;   // Define el pin E (enable)
int d4 = 5;   // Define el pin de dato 4
int d5 = 4;   // Define el pin de dato 5
int d6 = 3;   // Define el pin de dato 6
int d7 = 2;   // Define el pin de dato 7

LiquidCrystal lcd(rs, e, d4, d5, d6, d7); // Crea el objeto lcd 

#include <DHT.h> // Incluye la librería para el sensor DHT
#include <DHT_U.h> // Incluye librería DHT_U

#define Type DHT22 // Define el tipo de sensor DHT22
int dhtPin = 8; // Define el pin del sensor DHT
DHT HT(dhtPin, Type); // Crea el objeto HT para el sensor DHT

int humidity; // Variable para la humedad 
float tempC; // Variable para temperatura en C
float tempF; // Variable para temperatura en F

void setup() {

  lcd.begin(16, 2); // Inicializa el LCD de 16x2

  Serial.begin(9600); // Inicia la comunicación serie

  HT.begin(); // Inicializa el sensor DHT

}

void loop() {

  humidity = HT.readHumidity(); // Lee la humedad

  tempC = HT.readTemperature(); // Lee la temperatura en C
  
  // Lee la temperatura en F
  //tempF = HT.readTemperature(true); 
  
  // Imprime los valores en el monitor serie
  Serial.print("Humedad Relativa: ");
  Serial.print(humidity);
  Serial.print("% / Temperatura: ");  
  Serial.print(tempC);
  Serial.print("oC / ");
  Serial.print(tempF);
  Serial.println("oF");

  // Muestra en el LCD  
  lcd.setCursor(0, 0);
  lcd.print("Humedad: ");
  lcd.print(humidity);
  lcd.print("%");

  lcd.setCursor(0, 1);
  lcd.print("Temp.: ");
  lcd.print(tempC);
  lcd.print("*C");

  delay(dTime);
  
  lcd.clear(); // Limpia la pantalla

}
