/**
 * Project Untitled
 */


#include "SensorTemperaturaHumedad.h"

/**
 * SensorTemperaturaHumedad implementation
 */
Model::SensorTemperaturaHumedad::SensorTemperaturaHumedad(double Temperatura, String^ UnidadTemp, int Humedad)
{

	this->Temperatura = Temperatura;
	this->UnidadTemp = UnidadTemp;
	this->Humedad = Humedad;

}
