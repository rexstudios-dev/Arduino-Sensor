#include <DHT.h>		// Importa la librería DHT 
#include <DHT_U.h>	// Importa la librería DHT_U

int SENSOR = 2;			// Define el pin 2 como pin de datos del sensor
int TEMPERATURA;	// Variable para almacenar temperatura 
int HUMEDAD;			// Variable para almacenar humedad

DHT dht(SENSOR, DHT22);	// Crea el objeto DHT en el pin 2, para DHT22

void setup(){
  Serial.begin(9600);		// Inicia la comunicación serial a 9600 bps
  dht.begin();			// Inicializa el sensor DHT
} 

void loop(){
  TEMPERATURA = dht.readTemperature(); // Lee la temperatura y la guarda
  HUMEDAD = dht.readHumidity();		// Lee la humedad y la guarda
  
  Serial.print("Temperatura: "); // Imprime etiqueta en serial
  Serial.print(TEMPERATURA);   // Imprime valor de temperatura
  
  Serial.print(" Humedad: ");   // Imprime etiqueta
  Serial.println(HUMEDAD);     // Imprime valor de humedad
  
  delay(500);			// Delay de 0.5 segundos
}
