#include <DHT.h>		// importa la Librerias DHT
#include <DHT_U.h>

int SENSOR = 2;			// pin DATA de DHT22 a pin digital 2
int idSENSOR = 1; //IdSensor de Ambiente
int TEMPERATURA;
int HUMEDAD;
String VALORCO;			// almacena valor leido del sensor
String VALORCALIDADAIRE;
int TRAMA1;
int TRAMA2;
String TRAMA3;

DHT dht(SENSOR, DHT11);		// creacion del objeto, cambiar segundo parametro
				// por DHT11 si se utiliza en lugar del DHT22
void setup(){
  Serial.begin(9600);		// inicializacion de monitor serial
  dht.begin();			// inicializacion de sensor
}

void loop(){
  if (Serial.available()>0){

    char flag = Serial.read();
    if (flag == '1'){

      TEMPERATURA = dht.readTemperature();	// obtencion de valor de temperatura
      HUMEDAD = dht.readHumidity();		// obtencion de valor de humedad
      VALORCO = String(analogRead(A0));	// lee entrada A0 y asigna a variable VALOR
      VALORCALIDADAIRE = String(analogRead(A1));

      TRAMA1 = idSENSOR*10;
      TRAMA2 = TEMPERATURA*1000+HUMEDAD;
      TRAMA3 = String(VALORCO.toInt()*1000 + VALORCALIDADAIRE.toInt());

  
  // Serial.print("Temperatura: ");	// escritura en monitor serial de los valores
  // Serial.print(TEMPERATURA);
  // Serial.print("Humedad: ");
  // Serial.print(HUMEDAD);
  // Serial.print("CalidadCO: ");
  //Serial.print(VALORCO);	// imprime en monitor serial el valor
  // Serial.print("CalidadAire: ");
  //Serial.println(VALORCALIDADAIRE);	// imprime en monitor serial el valor

  
    
      Serial.print(TRAMA1);
      Serial.print(TRAMA2);
      Serial.println(TRAMA3);
      flag = '0';
    }
    delay(1000);
  }
    
}
