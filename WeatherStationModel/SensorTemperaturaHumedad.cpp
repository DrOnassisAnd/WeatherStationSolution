/**
 * Project Untitled
 */


#include "SensorTemperaturaHumedad.h"

/**
 * SensorTemperaturaHumedad implementation
 */
Model::SensorTemperaturaHumedad::SensorTemperaturaHumedad(int IdSensor, int Temperatura, String^ UnidadTemp, int Humedad)
{

	this->Temperatura = Temperatura;
	this->UnidadTemp = UnidadTemp;
	this->Humedad = Humedad;
	this->IdSensor = IdSensor;

}
