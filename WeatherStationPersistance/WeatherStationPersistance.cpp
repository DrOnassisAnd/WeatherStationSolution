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
		writer->WriteLine(ajustes->UnidadTemp + "," + ajustes->FormatoHoras + "," + ajustes->FormatoFecha);
	}
	
	else if (persistObject->GetType() == List<SensorTemperaturaHumedad^>::typeid) { //TempHum
		List<SensorTemperaturaHumedad^>^ tempHum = (List<SensorTemperaturaHumedad^>^)persistObject;
		for (int i = 0; i < tempHum->Count; i++) {
			SensorTemperaturaHumedad^ r = tempHum[i];
			writer->WriteLine(r->IdMedicion + "," + r->IdSensor + "," + r->Temperatura + "," + r->UnidadTemp + "," + r->Humedad);
		}
	}
	else if (persistObject->GetType() == List<SensorCO^>::typeid) { //CO
		List<SensorCO^>^ CO = (List<SensorCO^>^)persistObject;
		for (int i = 0; i < CO->Count; i++) {
			SensorCO^ r = CO[i];
			writer->WriteLine(r->IdMedicion + "," + r->IdSensor + "," + r->NivelCO);
		}
	}
	else if (persistObject->GetType() == List<SensorCalidadAire^>::typeid) { //CalidadAire
		List<SensorCalidadAire^>^ airq = (List<SensorCalidadAire^>^)persistObject;
		for (int i = 0; i < airq->Count; i++) {
			SensorCalidadAire^ r = airq[i];
			writer->WriteLine(r->IdMedicion + "," + r->IdSensor + "," + r->CalidadAire);
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
		else if (persistObject->GetType() == List<SensorTemperaturaHumedad^>::typeid) {
			XmlSerializer^ xmlSerializer = gcnew XmlSerializer(List<SensorTemperaturaHumedad^>::typeid);
			xmlSerializer->Serialize(writer, persistObject);
		}
		else if (persistObject->GetType() == List<SensorCO^>::typeid) {
			XmlSerializer^ xmlSerializer = gcnew XmlSerializer(List<SensorTemperaturaHumedad^>::typeid);
			xmlSerializer->Serialize(writer, persistObject);
		}
		else if (persistObject->GetType() == List<SensorCalidadAire^>::typeid) {
			XmlSerializer^ xmlSerializer = gcnew XmlSerializer(List<SensorCalidadAire^>::typeid);
			xmlSerializer->Serialize(writer, persistObject);
		}
		//si hay casos particulares :' La unica diferencia es el tipo de dato User^ nada mas
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally { //Es el m�s importante
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
	finally { //Es el m�s importante
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
				SensorCalidadAire^ CalidadAire = gcnew SensorCalidadAire();
				CalidadAire->IdMedicion = Convert::ToInt32(record[0]);
				CalidadAire->IdSensor = record[1];
				CalidadAire->CalidadAire = Convert::ToInt32(record[2]);
				((List<SensorCalidadAire^>^)result)->Add(CalidadAire);
			}
		}
		else if (fileName->Equals(CO_FILE)) {
			result = gcnew List<SensorCO^>();
			while (true) {
				String^ line = reader->ReadLine();
				if (line == nullptr) break;
				array<String^>^ record = line->Split(',');
				SensorCO^ CO = gcnew SensorCO();
				CO->IdMedicion = Convert::ToInt32(record[0]);
				CO->IdSensor = record[1];
				CO->NivelCO = Convert::ToInt32(record[2]);
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
				tempHum->IdMedicion = Convert::ToInt32(record[0]);
				tempHum->IdSensor = record[1];
				tempHum->Temperatura = Convert::ToInt32(record[2]);
				tempHum->UnidadTemp = record[3];
				tempHum->Humedad = Convert::ToInt32(record[4]);
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
			}//caso particular, cambia el nombre y la clase
			else if (fileName->Equals(TEMP_HUM_XML)) {
				xmlSerializer = gcnew XmlSerializer(List<SensorTemperaturaHumedad^>::typeid);
				result = (List<SensorTemperaturaHumedad^>^)xmlSerializer->Deserialize(reader);
			}
			else if (fileName->Equals(CALIDAD_AIRE_XML)) {
				xmlSerializer = gcnew XmlSerializer(List<SensorCalidadAire^>::typeid);
				result = (List<SensorCalidadAire^>^)xmlSerializer->Deserialize(reader);
			}
			if (reader != nullptr) reader->Close();
		}
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
			}//caso particular, cambia el nombre
			else if (fileName->Equals(TEMP_HUM_FILE)) {
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

List<User^>^ WeatherStationPersistance::Persistance::QueryAllUser() {
	//UserList = (List<User^>^)LoadTextFile(WEATHER_STATION);
	UserList = (List<User^>^)LoadXMLFile(USERS_XML);
	return UserList;
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

void WeatherStationPersistance::Persistance::AddAjustes(Ajustes^ ajustes) {
	AjustesList = (Ajustes^)ajustes;
	PersistTextFile(AJUSTES_FILE, AjustesList);
}

void WeatherStationPersistance::Persistance::AddMembresia(Membresia^ membresias) {
	MembresiaList = (Membresia^)membresias;
	PersistTextFile(MEMBRESIA_FILE, MembresiaList);
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



//temperatura humedad

void WeatherStationPersistance::Persistance::AddTempHumData(SensorTemperaturaHumedad^ tempHum) {
	sTempHumList->Add(tempHum);
	//PersistTextFile(TEMP_HUM_FILE, sTempHumList);
	PersistXMLFile(TEMP_HUM_XML, sTempHumList);
}

List<SensorTemperaturaHumedad^>^ WeatherStationPersistance::Persistance::QueryTempHumData() {
	sTempHumList = (List<SensorTemperaturaHumedad^>^)LoadXMLFile(TEMP_HUM_XML);
	//sTempHumList = (List<SensorTemperaturaHumedad^>^)LoadTextFile(TEMP_HUM_FILE);
	return sTempHumList;
}

SensorTemperaturaHumedad^ WeatherStationPersistance::Persistance::QueryTHbyIds(int IdMedicion, String^ IdSensor) {
	sTempHumList = (List<SensorTemperaturaHumedad^>^)LoadXMLFile(TEMP_HUM_XML);
	//sTempHumList = (List<SensorTemperaturaHumedad^>^)LoadTextFile(TEMP_HUM_FILE);
	for (int i = 0; i < sTempHumList->Count; i++) {
		if ((sTempHumList[i]->IdMedicion) == IdMedicion)
			if((sTempHumList[i]->IdSensor) == IdSensor)
				return sTempHumList[i];
	}
	return nullptr;
}

void WeatherStationPersistance::Persistance::UpdateTHData(SensorTemperaturaHumedad^ sTempHum) {
	for (int i = 0; i < sTempHumList->Count; i++) {
		if (sTempHumList[i]->IdMedicion == sTempHum->IdMedicion)
			//if (sTempHumList[i]->IdSensor == sTempHum->IdSensor)
			sTempHumList[i] = sTempHum;
	}
	//PersistTextFile(TEMP_HUM_FILE, sTempHumList);
	PersistXMLFile(TEMP_HUM_XML, sTempHumList);
	//PersistBinaryFile(TEMP_HUM_BIN, sTempHumList);
}

void WeatherStationPersistance::Persistance::DeleteTHData(int IdMedicion, String^ IdSensor) {
	for (int i = 0; i < sTempHumList->Count; i++) {
		if (sTempHumList[i]->IdMedicion == IdMedicion)
			if (sTempHumList[i]->IdSensor == IdSensor)
				sTempHumList->RemoveAt(i);
	}
	//PersistTextFile(TEMP_HUM_FILE, sTempHumList);
	PersistXMLFile(TEMP_HUM_XML, sTempHumList);
	//PersistBinaryFile(TEMP_HUM_BIN, sTempHumList);
}

//CONCENTRACION CO
SensorCO^ WeatherStationPersistance::Persistance::QueryCObyIds(int IdMedicion, String^ IdSensor) {
	sConcentracionCOList = (List<SensorCO^>^)LoadTextFile(CO_FILE);
	//sTempHumList = (List<SensorTemperaturaHumedad^>^)LoadTextFile(TEMP_HUM_FILE);
	for (int i = 0; i < sConcentracionCOList->Count; i++) {
		if ((sConcentracionCOList[i]->IdMedicion) == IdMedicion)
			if ((sConcentracionCOList[i]->IdSensor) == IdSensor)
				return sConcentracionCOList[i];
	}
	return nullptr;
}

void WeatherStationPersistance::Persistance::UpdateCOData(SensorCO^ sConcentracionCO) {
	for (int i = 0; i < sConcentracionCOList->Count; i++) {
		if (sConcentracionCOList[i]->IdMedicion == sConcentracionCO->IdMedicion)
			//if (sTempHumList[i]->IdSensor == sTempHum->IdSensor)
			sConcentracionCOList[i] = sConcentracionCO;
	}
	PersistTextFile(CO_FILE, sConcentracionCOList);
	//PersistXMLFile(CO_XML, sConcentracionCOList);
	//PersistBinaryFile(TEMP_HUM_BIN, sTempHumList);
}

void WeatherStationPersistance::Persistance::DeleteCOData(int IdMedicion, String^ IdSensor) {
	for (int i = 0; i < sConcentracionCOList->Count; i++) {
		if (sConcentracionCOList[i]->IdMedicion == IdMedicion)
			if (sConcentracionCOList[i]->IdSensor == IdSensor)
				sConcentracionCOList->RemoveAt(i);
	}
	PersistTextFile(CO_FILE, sConcentracionCOList);
	//PersistXMLFile(CO_XML, sConcentracionCOList);
	//PersistBinaryFile(TEMP_HUM_BIN, sTempHumList);
}

void WeatherStationPersistance::Persistance::AddCOData(SensorCO^ CO) {
	sConcentracionCOList->Add(CO);
	PersistTextFile(CO_FILE, sConcentracionCOList);
}

List<SensorCO^>^ WeatherStationPersistance::Persistance::QueryCOData() {
	sConcentracionCOList = (List<SensorCO^>^)LoadTextFile(CO_FILE);
	return sConcentracionCOList;
}

//calidad aire

SensorCalidadAire^ WeatherStationPersistance::Persistance::QueryCalidadAirebyIds(int IdMedicion, String^ IdSensor) {
	sCalidadAireList = (List<SensorCalidadAire^>^)LoadTextFile(CALIDAD_AIRE_FILE);
	//sTempHumList = (List<SensorTemperaturaHumedad^>^)LoadTextFile(TEMP_HUM_FILE);
	for (int i = 0; i < sCalidadAireList->Count; i++) {
		if ((sCalidadAireList[i]->IdMedicion) == IdMedicion)
			if ((sCalidadAireList[i]->IdSensor) == IdSensor)
				return sCalidadAireList[i];
	}
	return nullptr;
}

void WeatherStationPersistance::Persistance::UpdateCalidadAireData(SensorCalidadAire^ sCalidadAire) {
	for (int i = 0; i < sCalidadAireList->Count; i++) {
		if (sCalidadAireList[i]->IdMedicion == sCalidadAire->IdMedicion)
			//if (sTempHumList[i]->IdSensor == sTempHum->IdSensor)
			sCalidadAireList[i] = sCalidadAire;
	}
	PersistTextFile(CALIDAD_AIRE_FILE, sCalidadAireList);
	//PersistXMLFile(CO_XML, sConcentracionCOList);
	//PersistBinaryFile(TEMP_HUM_BIN, sTempHumList);
}

void WeatherStationPersistance::Persistance::DeleteCalidadAireData(int IdMedicion, String^ IdSensor) {
	for (int i = 0; i < sCalidadAireList->Count; i++) {
		if (sCalidadAireList[i]->IdMedicion == IdMedicion)
			if (sCalidadAireList[i]->IdSensor == IdSensor)
				sCalidadAireList->RemoveAt(i);
	}
	PersistTextFile(CALIDAD_AIRE_FILE, sCalidadAireList);
	//PersistXMLFile(CO_XML, sConcentracionCOList);
	//PersistBinaryFile(TEMP_HUM_BIN, sTempHumList);
}

void WeatherStationPersistance::Persistance::AddCalidadAireData(SensorCalidadAire^ CalidadAire) {
	sCalidadAireList->Add(CalidadAire);
	PersistTextFile(CALIDAD_AIRE_FILE, sCalidadAireList);
}


List<SensorCalidadAire^>^ WeatherStationPersistance::Persistance::QueryCalidadAireData() {
	sCalidadAireList = (List<SensorCalidadAire^>^)LoadTextFile(CALIDAD_AIRE_FILE);
	return sCalidadAireList;
}




