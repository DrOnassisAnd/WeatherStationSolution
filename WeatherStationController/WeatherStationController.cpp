
#include "WeatherStationController.h"


void Controller::Controller::AddUser(User^ user) {
	//Se puede programar m�s cosas.
	WeatherStationPersistance::Persistance::AddUser(user);
}

void Controller::Controller::AddAjustes(Ajustes^ ajustes) {
	//Se puede programar m�s cosas.
	WeatherStationPersistance::Persistance::AddAjustes(ajustes);
}
void Controller::Controller::AddMembresia(Membresia^ membresias) {
	//Se puede programar m�s cosas.
	WeatherStationPersistance::Persistance::AddMembresia(membresias);
}

List<User^>^ Controller::Controller::QueryAllUser() {
	//Se puede programar m�s cosas
	return WeatherStationPersistance::Persistance::QueryAllUser();
}

Ajustes^ Controller::Controller::QueryPrevAjustes() {
	//Se puede programar m�s cosas
	return WeatherStationPersistance::Persistance::QueryPrevAjustes();
}

Membresia^ Controller::Controller::QueryMembresia() {
	//Se puede programar m�s cosas
	return WeatherStationPersistance::Persistance::QueryMembresia();
}