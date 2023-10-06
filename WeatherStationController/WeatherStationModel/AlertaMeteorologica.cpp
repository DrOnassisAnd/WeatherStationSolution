/**
 * Project Untitled
 */


#include "AlertaMeteorologica.h"

/**
 * AlertaMeteorologica implementation
 */


Model::AlertaMeteorologica::AlertaMeteorologica(String^ IdAlerta, int IdSensor, double ValorRef, DateTime FechaHora)
{
    this->IdAlerta = IdAlerta;
	this->IdSensor = IdSensor;
	this->ValorRef = ValorRef;
	this->FechaHora = FechaHora;
}