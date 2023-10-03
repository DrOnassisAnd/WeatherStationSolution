/**
 * Project Untitled
 */


#include "AlertaError.h"

/**
 * AlertaError implementation
 */

Model::AlertaError::AlertaError(String^ IdError, int IdSensor, double limitValue, DateTime ErrorDate)
{
	this->IdError    = IdError;
	this->IdSensor   = IdSensor;
	this->limitValue = limitValue;
	this->ErrorDate  = ErrorDate;
}
