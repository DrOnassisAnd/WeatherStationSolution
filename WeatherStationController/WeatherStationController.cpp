#include "pch.h"

#include "WeatherStationController.h"

void Controller::Controller::AddUser(User^ user) {
	//Se puede programar m�s cosas.
	WeatherStationPersistance::Persistance::AddUser(user);
}

void Controller::Controller::AddAjustes(Ajustes^ ajustes) {
	//Se puede programar m�s cosas.
	WeatherStationPersistance::Persistance::AddAjustes(ajustes);
}

List<User^>^ Controller::Controller::QueryAllUser() {
	//Se puede programar m�s cosas
	return WeatherStationPersistance::Persistance::QueryAllUser();
}

Ajustes^ Controller::Controller::QueryPrevAjustes() {
	//Se puede programar m�s cosas
	return WeatherStationPersistance::Persistance::QueryPrevAjustes();
}