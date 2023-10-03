
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

void Controller::Controller::AddAirQData(SensorCalidadAire^ airq) {
	//Se puede programar más cosas.
	WeatherStationPersistance::Persistance::AddAirQData(airq);
}

void Controller::Controller::AddWeatherWarning(AlertaMeteorologica^ alertaMeteorologica) {
	//Se puede programar más cosas.
	WeatherStationPersistance::Persistance::AddWeatherWarning(alertaMeteorologica);
}

Ajustes^ Controller::Controller::QueryPrevAjustes() {
	//Se puede programar más cosas
	return WeatherStationPersistance::Persistance::QueryPrevAjustes();
}

Membresia^ Controller::Controller::QueryMembresia() {
	//Se puede programar más cosas
	return WeatherStationPersistance::Persistance::QueryMembresia();
}

List<SensorCalidadAire^>^ Controller::Controller::QueryAirQData() {
	//Se puede programar más cosas
	return WeatherStationPersistance::Persistance::QueryAirQData();
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

List<AlertaMeteorologica^>^ Controller::Controller::QueryWeatherWarning() {
	return WeatherStationPersistance::Persistance::QueryWeatherWarning();
}

}

void Controller::Controller::UpdateTHData(SensorTemperaturaHumedad^ sTempHum) {
	WeatherStationPersistance::Persistance::UpdateTHData(sTempHum);
}

void Controller::Controller::DeleteTHData(int IdMedicion, String^ IdSensor) {
	WeatherStationPersistance::Persistance::DeleteTHData(IdMedicion, IdSensor);
}

AlertaMeteorologica^ Controller::Controller::QueryWeatherWarningbyId(String^ selectedWeatherWarningId) {
	return WeatherStationPersistance::Persistance::QueryWeatherWarningbyId(selectedWeatherWarningId);
}

void Controller::Controller::DeleteWeatherWarning(String^ WeatherWarningId) {
	WeatherStationPersistance::Persistance::DeleteWeatherWarning(WeatherWarningId);
}

