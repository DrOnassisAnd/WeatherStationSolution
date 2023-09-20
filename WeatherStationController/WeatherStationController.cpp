#include "pch.h"

#include "WeatherStationController.h"

void Controller::Controller::AddUser(User^ user) {
	//Se puede programar más cosas.
	WeatherStationPersistance::Persistance::AddUser(user);
}

List<User^>^ Controller::Controller::QueryAllUser() {
	//Se puede programar más cosas
	return WeatherStationPersistance::Persistance::QueryAllUser();
}