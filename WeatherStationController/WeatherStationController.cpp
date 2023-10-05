
#include "WeatherStationController.h"

//User

void Controller::Controller::AddUser(User^ user) {
	//Se puede programar más cosas.
	WeatherStationPersistance::Persistance::AddUser(user);
}

List<User^>^ Controller::Controller::QueryAllUser() {
	//Se puede programar más cosas
	return WeatherStationPersistance::Persistance::QueryAllUser();
}

User^ Controller::Controller::QueryUserbyName(String^ name) {
	return WeatherStationPersistance::Persistance::QueryUserbyName(name);
}

User^ Controller::Controller::QueryUserbyId(int Id) {
	return WeatherStationPersistance::Persistance::QueryUserbyId(Id);
}

void Controller::Controller::UpdateUser(User^ user) {
	WeatherStationPersistance::Persistance::UpdateUser(user);
}

void Controller::Controller::DeleteUser(int userId) {
	WeatherStationPersistance::Persistance::DeleteUser(userId);
}

//

void Controller::Controller::AddAjustes(Ajustes^ ajustes) {
	//Se puede programar más cosas.
	WeatherStationPersistance::Persistance::AddAjustes(ajustes);
}

void Controller::Controller::AddMembresia(Membresia^ membresias) {
	//Se puede programar más cosas.

	WeatherStationPersistance::Persistance::AddMembresia(membresias);
}


List<Membresia^>^ Controller::Controller::QueryMembresia() {
	//Se puede programar m�s cosas
	return WeatherStationPersistance::Persistance::QueryMembresia();
}

Membresia^ Controller::Controller::QueryMembresiabyId(int Id) {
	return WeatherStationPersistance::Persistance::QueryMembresiabyId(Id);
}

void Controller::Controller::UpdateMembresia(Membresia^ user) {
	WeatherStationPersistance::Persistance::UpdateMembresia(user);
}

void Controller::Controller::DeleteMembresia(int userId) {
	WeatherStationPersistance::Persistance::DeleteMembresia(userId);
}




void Controller::Controller::AddWeatherWarning(AlertaMeteorologica^ alertaMeteorologica) {
	//Se puede programar más cosas.
	WeatherStationPersistance::Persistance::AddWeatherWarning(alertaMeteorologica);
}

Ajustes^ Controller::Controller::QueryPrevAjustes() {
	//Se puede programar más cosas
	return WeatherStationPersistance::Persistance::QueryPrevAjustes();
}

//Sensor CO

void Controller::Controller::AddCOData(SensorCO^ CO) {
	//Se puede programar más cosas.
	WeatherStationPersistance::Persistance::AddCOData(CO);
}

List<SensorCO^>^ Controller::Controller::QueryCOData() {
	//Se puede programar más cosas
	return WeatherStationPersistance::Persistance::QueryCOData();
}

SensorCO^ Controller::Controller::QueryCObyIds(int IdMedicion, String^ IdSensor) {
	return WeatherStationPersistance::Persistance::QueryCObyIds(IdMedicion, IdSensor);
}

void Controller::Controller::UpdateCOData(SensorCO^ sConcentracionCO) {
	WeatherStationPersistance::Persistance::UpdateCOData(sConcentracionCO);
}

void Controller::Controller::DeleteCOData(int IdMedicion, String^ IdSensor) {
	WeatherStationPersistance::Persistance::DeleteCOData(IdMedicion, IdSensor);
}

//Sensor Temperatura Humedad

void Controller::Controller::AddTempHumData(SensorTemperaturaHumedad^ tempHum) {
	//Se puede programar más cosas.
	WeatherStationPersistance::Persistance::AddTempHumData(tempHum);
}

List<SensorTemperaturaHumedad^>^ Controller::Controller::QueryTempHumData() {
	//Se puede programar más cosas
	return WeatherStationPersistance::Persistance::QueryTempHumData();
}

SensorTemperaturaHumedad^ Controller::Controller::QueryTHbyIds(int IdMedicion, String^ IdSensor) {
	return WeatherStationPersistance::Persistance::QueryTHbyIds(IdMedicion, IdSensor);
}

List<AlertaMeteorologica^>^ Controller::Controller::QueryWeatherWarning() {
	return WeatherStationPersistance::Persistance::QueryWeatherWarning();
}

void Controller::Controller::UpdateTHData(SensorTemperaturaHumedad^ sTempHum) {
	WeatherStationPersistance::Persistance::UpdateTHData(sTempHum);
}

void Controller::Controller::DeleteTHData(int IdMedicion, String^ IdSensor) {
	WeatherStationPersistance::Persistance::DeleteTHData(IdMedicion, IdSensor);
}



//Weather Warning

//Sensor CalidadAire

void Controller::Controller::AddCalidadAireData(SensorCalidadAire^ CalidadAire) {
	//Se puede programar más cosas.
	WeatherStationPersistance::Persistance::AddCalidadAireData(CalidadAire);
}

List<SensorCalidadAire^>^ Controller::Controller::QueryCalidadAireData() {
	//Se puede programar más cosas
	return WeatherStationPersistance::Persistance::QueryCalidadAireData();
}

SensorCalidadAire^ Controller::Controller::QueryCalidadAirebyIds(int IdMedicion, String^ IdSensor) {
	return WeatherStationPersistance::Persistance::QueryCalidadAirebyIds(IdMedicion, IdSensor);
}

void Controller::Controller::UpdateCalidadAireData(SensorCalidadAire^ sCalidadAire) {
	WeatherStationPersistance::Persistance::UpdateCalidadAireData(sCalidadAire);
}

void Controller::Controller::DeleteCalidadAireData(int IdMedicion, String^ IdSensor) {
	WeatherStationPersistance::Persistance::DeleteCalidadAireData(IdMedicion, IdSensor);
}

AlertaMeteorologica^ Controller::Controller::QueryWeatherWarningbyId(String^ selectedWeatherWarningId) {
	return WeatherStationPersistance::Persistance::QueryWeatherWarningbyId(selectedWeatherWarningId);
}

void Controller::Controller::DeleteWeatherWarning(String^ WeatherWarningId) {
	WeatherStationPersistance::Persistance::DeleteWeatherWarning(WeatherWarningId);
}
void Controller::Controller::UpdateWeatherWarning(AlertaMeteorologica^ alertaMeteorologica) {
	WeatherStationPersistance::Persistance::UpdateWeatherWarning(alertaMeteorologica);
}

//Error Warning
void Controller::Controller::AddErrorWarning(AlertaError^ alertaError) {
	WeatherStationPersistance::Persistance::AddErrorWarning(alertaError);
}

List<AlertaError^>^ Controller::Controller::QueryErrorWarning() {
	return WeatherStationPersistance::Persistance::QueryErrorWarning();
}

void Controller::Controller::DeleteErrorWarning(String^ ErrorWarningId) {
	WeatherStationPersistance::Persistance::DeleteErrorWarning(ErrorWarningId);
}
AlertaError^ Controller::Controller::QueryErrorWarningbyId(String^ selectedErrorWarningId) {
	return WeatherStationPersistance::Persistance::QueryErrorWarningbyId(selectedErrorWarningId);
}

void Controller::Controller::UpdateErrorWarning(AlertaError^ alertaError) {
	WeatherStationPersistance::Persistance::UpdateErrorWarning(alertaError);
}