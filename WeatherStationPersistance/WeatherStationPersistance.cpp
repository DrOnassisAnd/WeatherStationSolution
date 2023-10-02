#include "pch.h"
#include "WeatherStationPersistance.h"

using namespace System::Xml::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace System::IO;
void WeatherStationPersistance::Persistance::PersistTextFile(String^ fileName, Object^ persistObject) {
	FileStream^ file;
	StreamWriter^ writer;
	file = gcnew FileStream(fileName, FileMode::Create, FileAccess::Write);
	writer = gcnew StreamWriter(file);
	if (persistObject->GetType() == List<User^>::typeid) {
		List<User^>^ users = (List<User^>^)persistObject;
		for (int i = 0; i < users->Count; i++) {
			User^ r =users[i];
			writer->WriteLine(r->Name + "," + r->Password + "," + r->Email + "," + r->Id);
		}
	}
	else if (persistObject->GetType() == Ajustes::typeid) {
		Ajustes^ ajustes = (Ajustes^)persistObject;
		writer->WriteLine(ajustes->UnidadTemp + ", " + ajustes->FormatoHoras + ", " + ajustes->FormatoFecha);
	}
	else if (persistObject->GetType() == List<SensorCalidadAire^>::typeid) {
		List<SensorCalidadAire^>^ airq = (List<SensorCalidadAire^>^)persistObject;
		for (int i = 0; i < airq->Count; i++) {
			SensorCalidadAire^ r = airq[i];
			writer->WriteLine(r->IdSensor + ", " + r->CalidadAire);
		}
	}
	else if (persistObject->GetType() == List<SensorCO^>::typeid) {
		List<SensorCO^>^ CO = (List<SensorCO^>^)persistObject;
		for (int i = 0; i < CO->Count; i++) {
			SensorCO^ r = CO[i];
			writer->WriteLine(r->IdSensor + ", " + r->NivelCO);
		}
	}
	else if (persistObject->GetType() == List<SensorTemperaturaHumedad^>::typeid) {
		List<SensorTemperaturaHumedad^>^ tempHum = (List<SensorTemperaturaHumedad^>^)persistObject;
		for (int i = 0; i < tempHum->Count; i++) {
			SensorTemperaturaHumedad^ r = tempHum[i];
			writer->WriteLine(r->IdSensor + ", " + r->Temperatura + ", " + r->UnidadTemp + ", " + r->Humedad);
		}
	}
	if (writer != nullptr) writer->Close();
	if (file != nullptr) file->Close();
}

void WeatherStationPersistance::Persistance::PersistXMLFile(String^ fileName, Object^ persistObject) {
	StreamWriter^ writer;
	try {
		writer = gcnew  StreamWriter(fileName);
		if (persistObject->GetType() == List<User^>::typeid) {
			XmlSerializer^ xmlSerializer = gcnew XmlSerializer(List<User^>::typeid);
			xmlSerializer->Serialize(writer, persistObject);
		}
		//si hay casos particulares :' La unica diferencia es el tipo de dato User^ nada mas
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally { //Es el más importante
		if (writer != nullptr) writer->Close();
	}
}

void WeatherStationPersistance::Persistance::PersistBinaryFile(String^ fileName, Object^ persistObject) {
	FileStream^ file;
	BinaryFormatter^ formatter = gcnew BinaryFormatter();
	try {
		file = gcnew FileStream(fileName, FileMode::Create, FileAccess::Write);
		formatter->Serialize(file, persistObject);
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally { //Es el más importante
		if (file != nullptr) file->Close();
	}
}

Object^ WeatherStationPersistance::Persistance::LoadTextFile(String^ fileName) {
	FileStream^ file;
	StreamReader^ reader;
	Object^ result;
	//Falta programar la lectura de los datos
	if (File::Exists(fileName)) {
		file = gcnew FileStream(fileName, FileMode::Open, FileAccess::Read);
		reader = gcnew StreamReader(file);
		if (fileName->Equals(WEATHER_STATION)) {
			result = gcnew List<User^>();
			while (true) {
				String^ line = reader->ReadLine();
				if (line == nullptr) break;
				array<String^>^ record = line->Split(',');
				User^ user = gcnew User();
				user->Name = record[0];
				user->Password = record[1];
				user->Email = record[2];
				user->Id = Convert::ToInt32(record[3]);
				((List<User^>^)result)->Add(user);
			}
		}
		else if (fileName->Equals(AJUSTES_FILE)) {
			result = gcnew Ajustes();
			while (true) {
				String^ line = reader->ReadLine();
				if (line == nullptr) break;
				array<String^>^ record = line->Split(',');
				Ajustes^ ajustes = gcnew Ajustes();
				ajustes->UnidadTemp = record[0];
				ajustes->FormatoHoras = record[1];
				ajustes->FormatoFecha = record[2];
				result = ajustes;
			}
		}
		else if (fileName->Equals(MEMBRESIA_FILE)) {
			result = gcnew Membresia();
			while (true) {
				String^ line = reader->ReadLine();
				if (line == nullptr) break;
				array<String^>^ record = line->Split(',');
				Membresia^ membresia = gcnew Membresia();
				membresia->tipoMembresia = record[0];
				membresia->nombreMiembro = record[1];
				membresia->fechaInicio = record[2];
				membresia->fechaFinalizacion = record[3];
				membresia->Metododepago = record[4];
				result = membresia;
			}
		}
		else if (fileName->Equals(CALIDAD_AIRE_FILE)) {
			result = gcnew List<SensorCalidadAire^>();
			while (true) {
				String^ line = reader->ReadLine();
				if (line == nullptr) break;
				array<String^>^ record = line->Split(',');
				SensorCalidadAire^ airQ = gcnew SensorCalidadAire();
				airQ->IdSensor = record[0];
				airQ->CalidadAire = Convert::ToInt32(record[1]);
				((List<SensorCalidadAire^>^)result)->Add(airQ);
			}
		}
		else if (fileName->Equals(CO_FILE)) {
			result = gcnew List<SensorCO^>();
			while (true) {
				String^ line = reader->ReadLine();
				if (line == nullptr) break;
				array<String^>^ record = line->Split(',');
				SensorCO^ CO = gcnew SensorCO();
				CO->IdSensor = record[0];
				CO->NivelCO = Convert::ToInt32(record[1]);
				((List<SensorCO^>^)result)->Add(CO);
			}
		}
		else if (fileName->Equals(TEMP_HUM_FILE)) {
			result = gcnew List<SensorTemperaturaHumedad^>();
			while (true) {
				String^ line = reader->ReadLine();
				if (line == nullptr) break;
				array<String^>^ record = line->Split(',');
				SensorTemperaturaHumedad^ tempHum = gcnew SensorTemperaturaHumedad();
				tempHum->IdSensor = record[0];
				tempHum->Temperatura = Convert::ToInt32(record[1]);
				tempHum->UnidadTemp = record[2];
				tempHum->Humedad = Convert::ToInt32(record[3]);
				((List<SensorTemperaturaHumedad^>^)result)->Add(tempHum);
			}
		}

		if (reader != nullptr) reader->Close();
		if (file != nullptr) file->Close();
	}
	return result;
}

Object^ WeatherStationPersistance::Persistance::LoadXMLFile(String^ fileName) {
	StreamReader^ reader;
	Object^ result;
	XmlSerializer^ xmlSerializer;
	try {
		if (File::Exists(fileName)) {
			reader = gcnew StreamReader(fileName);
			if (fileName->Equals(USERS_XML)) {
				xmlSerializer = gcnew XmlSerializer(List<User^>::typeid);
				result = (List<User^>^)xmlSerializer->Deserialize(reader);
			}
			if (reader != nullptr) reader->Close();
		}//caso particular, cambia el nombre y la clase
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (reader != nullptr) reader->Close();
	}
	return result;
}

Object^ WeatherStationPersistance::Persistance::LoadBinaryFile(String^ fileName) {
	Object^ result;
	FileStream^ file;
	BinaryFormatter^ formatter;
	try {
		if (File::Exists(fileName)) {
			file = gcnew FileStream(fileName, FileMode::Open, FileAccess::Read);
			formatter = gcnew BinaryFormatter();

			if (fileName->Equals(USERS_BIN)) {
				result = formatter->Deserialize(file);
			}
		}
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (file != nullptr) file->Close();
	}
	return result;
}


void WeatherStationPersistance::Persistance::AddUser(User^user) {
	UserList->Add(user);
	//PersistTextFile(WEATHER_STATION, UserList);
	PersistXMLFile(USERS_XML, UserList);
}

void WeatherStationPersistance::Persistance::AddAjustes(Ajustes^ ajustes) {
	AjustesList = (Ajustes^)ajustes;
	PersistTextFile(AJUSTES_FILE, AjustesList);
}

void WeatherStationPersistance::Persistance::AddMembresia(Membresia^ membresias) {
	MembresiaList = (Membresia^)membresias;
	PersistTextFile(MEMBRESIA_FILE, MembresiaList);
}

void WeatherStationPersistance::Persistance::AddAirQData(SensorCalidadAire^ airq) {
	sCalidadAire->Add(airq);
	PersistTextFile(CALIDAD_AIRE_FILE, sCalidadAire);
}

void WeatherStationPersistance::Persistance::AddCOData(SensorCO^ CO) {
	sConcentracionCO->Add(CO);
	PersistTextFile(CO_FILE, sConcentracionCO);
}

void WeatherStationPersistance::Persistance::AddTempHumData(SensorTemperaturaHumedad^ tempHum) {
	sTempHum->Add(tempHum);
	PersistTextFile(TEMP_HUM_FILE, sTempHum);
}

List<User^>^ WeatherStationPersistance::Persistance::QueryAllUser() {
	//UserList = (List<User^>^)LoadTextFile(WEATHER_STATION);
	UserList = (List<User^>^)LoadXMLFile(USERS_XML);
	return UserList;
}

Ajustes^ WeatherStationPersistance::Persistance::QueryPrevAjustes() {
	AjustesList = (Ajustes^)LoadTextFile(AJUSTES_FILE);
	return AjustesList;
}

Membresia^ WeatherStationPersistance::Persistance::QueryMembresia()
{
	MembresiaList = (Membresia^)LoadTextFile(MEMBRESIA_FILE);
	return MembresiaList;
}

List<SensorCalidadAire^>^ WeatherStationPersistance::Persistance::QueryAirQData() {
	sCalidadAire = (List<SensorCalidadAire^>^)LoadTextFile(CALIDAD_AIRE_FILE);
	return sCalidadAire;
}

List<SensorCO^>^ WeatherStationPersistance::Persistance::QueryCOData() {
	sConcentracionCO = (List<SensorCO^>^)LoadTextFile(CO_FILE);
	return sConcentracionCO;
}

List<SensorTemperaturaHumedad^>^ WeatherStationPersistance::Persistance::QueryTempHumData() {
	sTempHum = (List<SensorTemperaturaHumedad^>^)LoadTextFile(TEMP_HUM_FILE);
	return sTempHum;
}

User^ WeatherStationPersistance::Persistance::QueryUserbyName(String^ name) {
	//UserList = (List<User^>^)LoadTextFile(WEATHER_STATION);
	UserList = (List<User^>^)LoadXMLFile(USERS_XML);
	for (int i = 0; i < UserList->Count; i++) {
		if (UserList[i]->Name == name)
			return UserList[i];
	}
	return nullptr;
}

User^ WeatherStationPersistance::Persistance::QueryUserbyId(int Id) {
	//UserList = (List<User^>^)LoadTextFile(WEATHER_STATION);
	UserList = (List<User^>^)LoadXMLFile(USERS_XML);
	for (int i = 0; i < UserList->Count; i++) {
		if (UserList[i]->Id == Id)
			return UserList[i];
	}
	return nullptr;
}

void WeatherStationPersistance::Persistance::UpdateUser(User^ user) {
	for (int i = 0; i < UserList->Count; i++) {
		if (UserList[i]->Id == user->Id)
			UserList[i] = user;
	}
	//PersistTextFile(WEATHER_STATION, UserList);
	PersistXMLFile(USERS_XML, UserList);
	//PersistBinaryFile(USERS_BIN, UserList);
}

void WeatherStationPersistance::Persistance::DeleteUser(int userId) {
	for (int i = 0; i < UserList->Count; i++) {
		if (UserList[i]->Id == userId)
			UserList->RemoveAt(i);
	}
	//PersistTextFile(WEATHER_STATION, UserList);
	PersistXMLFile(USERS_XML, UserList);
	//PersistBinaryFile(USERS_BIN, UserList);
}