
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

//void Controller::Controller::AddMembresia(Membresia^ membresias) {
//	//Se puede programar más cosas.
//
//	WeatherStationPersistance::Persistance::AddMembresia(membresias);
//}
//
//
//List<Membresia^>^ Controller::Controller::QueryMembresia() {
//	//Se puede programar m�s cosas
//	return WeatherStationPersistance::Persistance::QueryMembresia();
//}
//
//Membresia^ Controller::Controller::QueryMembresiabyId(int Id) {
//	return WeatherStationPersistance::Persistance::QueryMembresiabyId(Id);
//}
//
//void Controller::Controller::UpdateMembresia(Membresia^ user) {
//	WeatherStationPersistance::Persistance::UpdateMembresia(user);
//}
//
//void Controller::Controller::DeleteMembresia(int userId) {
//	WeatherStationPersistance::Persistance::DeleteMembresia(userId);
//}




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



void Controller::Controller::OpenPort() {
	try {
		ArduinoPort = gcnew SerialPort();
		ArduinoPort->PortName = "COM5";
		ArduinoPort->BaudRate = 9600;
		ArduinoPort->Open();
	}
	catch (Exception^ ex) {
		throw(ex);
	}
}

void Controller::Controller::ClosePort() {
	try {
		if (ArduinoPort->IsOpen) ArduinoPort->Close();
	}
	catch (Exception^ ex) {
		throw(ex);
	}
}

String^ Controller::Controller::SendSensorsData() {
	
	try {
		OpenPort();
		String^ sensordata = ArduinoPort->ReadLine();
		ClosePort();
		return sensordata;
	}
	catch (Exception^ ex) {
		throw ex;
	}
}

//Ambiente

void Controller::Controller::AddAmbienteData(Ambiente^ sensorData) {
	//Se puede programar más cosas.
	WeatherStationPersistance::Persistance::AddAmbienteData(sensorData);
}

List<Ambiente^>^ Controller::Controller::QueryAmbienteData() {
	//Se puede programar más cosas
	return WeatherStationPersistance::Persistance::QueryAmbienteData();
}

Ambiente^ Controller::Controller::QueryAmbienteDatabyId(int IdMedicion) {
	return WeatherStationPersistance::Persistance::QueryAmbienteDatabyId(IdMedicion);
}

void Controller::Controller::UpdateAmbienteData(Ambiente^ sensorData) {
	WeatherStationPersistance::Persistance::UpdateAmbienteData(sensorData);
}

void Controller::Controller::DeleteAmbienteData(int IdMedicion) {
	WeatherStationPersistance::Persistance::DeleteAmbienteData(IdMedicion);
}

List<int>^ Controller::Controller::GetTempfromAmbiente(List<Ambiente^>^ sensordata) {
	List<int>^ tempdata =  gcnew List<int>();
	for each (Ambiente^ dato in sensordata) {
		int temp = dynamic_cast<SensorTemperaturaHumedad^>(dato->DataBase[0])->Temperatura;
		tempdata->Add(temp);
	}
	return tempdata;
}

List<int>^ Controller::Controller::GetHumfromAmbiente(List<Ambiente^>^ sensordata) {
	List<int>^ humdata = gcnew List<int>();
	for each (Ambiente^ dato in sensordata) {
		int hum = dynamic_cast<SensorTemperaturaHumedad^>(dato->DataBase[0])->Humedad;
		humdata->Add(hum);
	}
	return humdata;
}

List<int>^ Controller::Controller::GetCOfromAmbiente(List<Ambiente^>^ sensordata) {
	List<int>^ COdata = gcnew List<int>();
	for each (Ambiente^ dato in sensordata) {
		int CO = dynamic_cast<SensorCO^>(dato->DataBase[1])->NivelCO;
		COdata->Add(CO);
	}
	return COdata;
}

List<int>^ Controller::Controller::GetAirQfromAmbiente(List<Ambiente^>^ sensordata) {
	List<int>^ airqdata = gcnew List<int>();
	for each (Ambiente^ dato in sensordata) {
		int airq = dynamic_cast<SensorCalidadAire^>(dato->DataBase[2])->CalidadAire;
		airqdata->Add(airq);
	}
	return airqdata;
}

List<String^>^ Controller::Controller::GetDateTimefromAmbiente(List<Ambiente^>^ sensordata) {
	List<String^>^ datetimedata = gcnew List<String^>();
	for each (Ambiente^ dato in sensordata) {
		String^ date = dato->FechaMedicion;
		String^ time = dato->TiempoMedicion;
		DateTime dateDT = DateTime::ParseExact(date, "yyyy-MM-dd", nullptr);
		DateTime timeDT = DateTime::ParseExact(time, "HH:mm:ss", nullptr);
		DateTime datetimeDT = dateDT.Date + timeDT.TimeOfDay;
		String^ datetime = datetimeDT.ToString("yyyy-MM-dd HH:mm:ss");
		datetimedata->Add(datetime);

	}
	return datetimedata;
}

List<int>^ Controller::Controller::GetIndexfromAmbiente(List<Ambiente^>^ sensordata, String^ UbiGeo) {
	List<int>^ indexdata = gcnew List<int>();
	for (int i = 0; i < sensordata->Count; i++){
		if (sensordata[i]->UbicacionGeografica == UbiGeo) {
			indexdata->Add(i);
		}	
	}
	return indexdata;
}