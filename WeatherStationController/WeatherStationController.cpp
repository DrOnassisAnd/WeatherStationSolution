#include "pch.h"

#include "WeatherStationController.h"

void Controller::Controller::AddUser(User^ user) {
	//Se puede programar m�s cosas.
	WeatherStationPersistance::Persistance::AddUser(user);
}

List<User^>^ Controller::Controller::QueryAllUser() {
	//Se puede programar m�s cosas
	return WeatherStationPersistance::Persistance::QueryAllUser();
}