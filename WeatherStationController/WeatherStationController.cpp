
#include "WeatherStationController.h"

//User

void Controller::Controller::AddUser(User^ user) {
	//Se puede programar m�s cosas.
	WeatherStationPersistance::Persistance::AddUser(user);
}

List<User^>^ Controller::Controller::QueryAllUser() {
	//Se puede programar m�s cosas
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
	//Se puede programar m�s cosas.
	WeatherStationPersistance::Persistance::AddAjustes(ajustes);
}

void Controller::Controller::AddMembresia(Membresia^ membresias) {
	//Se puede programar m�s cosas.
	WeatherStationPersistance::Persistance::AddMembresia(membresias);
}

void Controller::Controller::AddAirQData(SensorCalidadAire^ airq) {
	//Se puede programar m�s cosas.
	WeatherStationPersistance::Persistance::AddAirQData(airq);
}

void Controller::Controller::AddCOData(SensorCO^ CO) {
	//Se puede programar m�s cosas.
	WeatherStationPersistance::Persistance::AddCOData(CO);
}

Ajustes^ Controller::Controller::QueryPrevAjustes() {
	//Se puede programar m�s cosas
	return WeatherStationPersistance::Persistance::QueryPrevAjustes();
}

Membresia^ Controller::Controller::QueryMembresia() {
	//Se puede programar m�s cosas
	return WeatherStationPersistance::Persistance::QueryMembresia();
}

List<SensorCalidadAire^>^ Controller::Controller::QueryAirQData() {
	//Se puede programar m�s cosas
	return WeatherStationPersistance::Persistance::QueryAirQData();
}

List<SensorCO^>^ Controller::Controller::QueryCOData() {
	//Se puede programar m�s cosas
	return WeatherStationPersistance::Persistance::QueryCOData();
}

//Sensor Temperatura Humedad

void Controller::Controller::AddTempHumData(SensorTemperaturaHumedad^ tempHum) {
	//Se puede programar m�s cosas.
	WeatherStationPersistance::Persistance::AddTempHumData(tempHum);
}

List<SensorTemperaturaHumedad^>^ Controller::Controller::QueryTempHumData() {
	//Se puede programar m�s cosas
	return WeatherStationPersistance::Persistance::QueryTempHumData();
}

SensorTemperaturaHumedad^ Controller::Controller::QueryTHbyIds(int IdMedicion, String^ IdSensor) {
	return WeatherStationPersistance::Persistance::QueryTHbyIds(IdMedicion, IdSensor);
}

void Controller::Controller::UpdateTHData(SensorTemperaturaHumedad^ sTempHum) {
	WeatherStationPersistance::Persistance::UpdateTHData(sTempHum);
}

void Controller::Controller::DeleteTHData(int IdMedicion, String^ IdSensor) {
	WeatherStationPersistance::Persistance::DeleteTHData(IdMedicion, IdSensor);
}

