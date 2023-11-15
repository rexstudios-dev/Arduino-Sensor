Hola Ailen, te dejo esta explicación del código para leer el sensor DHT22 y mostrar temperatura y humedad:

## Descripción general

Este código está diseñado para funcionar con un sensor DHT22 y mostrar los valores de temperatura y humedad en el monitor serial. 

Utiliza la librería DHT que permite leer fácilmente los sensores DHT11, DHT22 y otros.

Los componentes principales son:

- Sensor DHT22 para medir temperatura y humedad.

- Arduino para leer los datos del sensor y mostrarlos. 

- Cable USB para conectar Arduino al computador.

- Monitor serial para visualizar los datos.

## Librerías 

Se incluyen dos librerías relacionadas con el sensor DHT:

```cpp
#include <DHT.h>
#include <DHT_U.h>
```

DHT contiene las funciones principales para manejar el sensor.

DHT_U complementa con funciones adicionales.

## Definiciones

Se define el pin digital donde se conecta el sensor DHT22:

```cpp 
int SENSOR = 2;
```

También las variables para guardar los valores de temperatura y humedad:

```cpp
int TEMPERATURA;
int HUMEDAD; 
```

## Configuración 

En setup() se inicia la comunicación serial y el sensor DHT:

```cpp
Serial.begin(9600);
dht.begin();
```

## Lectura de datos

En loop() se ejecuta repetidamente:

- Se leen los valores de temperatura y humedad con las funciones dht.readTemperature() y dht.readHumidity().

- Se imprimen los valores en el monitor serial con Serial.print()

- Delay de 500ms para esperar entre lecturas.

## Resultado

Al cargar el código en Arduino, se puede abrir el monitor serial a 9600 baudios para visualizar los valores de temperatura y humedad actualizándose cada 500ms.

Espero Te Sirva HDP jajajjaa 
