#include "pch.h"
#include "WeatherStationPersistance.h"

using namespace System::Xml::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace System::IO;
using namespace System::Globalization;
void WeatherStationPersistance::Persistance::PersistTextFile(String^ fileName, Object^ persistObject) {
	FileStream^ file;
	StreamWriter^ writer;
	file = gcnew FileStream(fileName, FileMode::Create, FileAccess::Write);
	writer = gcnew StreamWriter(file);
	if (persistObject->GetType() == List<User^>::typeid) {
		List<User^>^ users = (List<User^>^)persistObject;
		for (int i = 0; i < users->Count; i++) {
			User^ r = users[i];
			writer->WriteLine(r->Name + "," + r->Password + "," + r->Email + "," + r->Id);
		}
	}
	else if (persistObject->GetType() == Ajustes::typeid) {
		Ajustes^ ajustes = (Ajustes^)persistObject;
		writer->WriteLine(ajustes->UnidadTemp + "," + ajustes->FormatoHoras + "," + ajustes->FormatoFecha);
	}
	else if (persistObject->GetType() == List<SensorCalidadAire^>::typeid) { //Calidad Aire
		List<SensorCalidadAire^>^ airq = (List<SensorCalidadAire^>^)persistObject;
		for (int i = 0; i < airq->Count; i++) {
			SensorCalidadAire^ r = airq[i];
			writer->WriteLine(r->IdMedicion + "," + r->IdSensor + "," + r->CalidadAire);
		}
	}
	else if (persistObject->GetType() == List<SensorCO^>::typeid) { //CO
		List<SensorCO^>^ CO = (List<SensorCO^>^)persistObject;
		for (int i = 0; i < CO->Count; i++) {
			SensorCO^ r = CO[i];
			writer->WriteLine(r->IdMedicion + "," + r->IdSensor + "," + r->NivelCO);
		}
	}
	else if (persistObject->GetType() == List<SensorTemperaturaHumedad^>::typeid) { //TempHum
		List<SensorTemperaturaHumedad^>^ tempHum = (List<SensorTemperaturaHumedad^>^)persistObject;
		for (int i = 0; i < tempHum->Count; i++) {
			SensorTemperaturaHumedad^ r = tempHum[i];
			writer->WriteLine(r->IdMedicion + "," + r->IdSensor + "," + r->Temperatura + "," + r->UnidadTemp + "," + r->Humedad);
		}
	}
	else if (persistObject->GetType() == List<SensorCO^>::typeid) { //TempHum
		List<SensorCO^>^ CO = (List<SensorCO^>^)persistObject;
		for (int i = 0; i < CO->Count; i++) {
			SensorCO^ r = CO[i];
			writer->WriteLine(r->IdMedicion + "," + r->IdSensor + "," + r->NivelCO);
		}
	}
	else if (persistObject->GetType() == List<AlertaMeteorologica^>::typeid) {
		List<AlertaMeteorologica^>^ alertaMeteorologica = (List<AlertaMeteorologica^>^)persistObject;
		for(int i=0;i<alertaMeteorologica->Count;i++){
			AlertaMeteorologica^ r = alertaMeteorologica[i];
			writer->WriteLine(r->IdAlerta + ", "+ r->IdSensor + ", "+r->ValorRef +", " + r->FechaHora);
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
			XmlSerializer^ xmlSerializer = gcnew XmlSerializer(List<SensorCO^>::typeid);
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
		else if (fileName->Equals(WEATHER_WARNING_FILE)) {
			result = gcnew List<AlertaMeteorologica^>();
			while (true) {
				String^ line = reader->ReadLine();
				if (line == nullptr) {
					break;
				}
				array<String^>^ record = line->Split(',');
				AlertaMeteorologica^ alertaMeteorologica = gcnew AlertaMeteorologica();
				String^ formatoFecha = "dd/MM/yyyy HH:mm:ss";
				alertaMeteorologica->IdAlerta = record[0];
				alertaMeteorologica->IdSensor = Int32::Parse(record[1]);
				alertaMeteorologica->ValorRef = Convert::ToDouble(record[2]);
				
				try {
					String^ StringRecord = record[3]->Trim();
					alertaMeteorologica->FechaHora = DateTime::ParseExact(StringRecord, formatoFecha, CultureInfo::InvariantCulture, DateTimeStyles::None);
				}
				catch (System::FormatException^ ex) {
					// Manejo de la excepción en caso de formato incorrecto
					// Puedes registrar el error o asignar un valor predeterminado a FechaHora
					alertaMeteorologica->FechaHora = DateTime::Today; // Valor predeterminado			
				}
				
				((List<AlertaMeteorologica^>^)result)->Add(alertaMeteorologica);
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
			else if (fileName->Equals(CO_XML)) {
				xmlSerializer = gcnew XmlSerializer(List<SensorCO^>::typeid);
				result = (List<SensorCO^>^)xmlSerializer->Deserialize(reader);
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
			else if (fileName->Equals(CO_XML)) {
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

void WeatherStationPersistance::Persistance::AddAirQData(SensorCalidadAire^ airq) {
	sCalidadAire->Add(airq);
	PersistTextFile(CALIDAD_AIRE_FILE, sCalidadAire);
}

void WeatherStationPersistance::Persistance::AddWeatherWarning(AlertaMeteorologica^ alertaMeteorologica) {
	WeatherWarningList->Add(alertaMeteorologica);
	PersistTextFile(WEATHER_WARNING_FILE, WeatherWarningList);
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
}

List<AlertaMeteorologica^>^ WeatherStationPersistance::Persistance::QueryWeatherWarning() {
	WeatherWarningList = (List<AlertaMeteorologica^>^)LoadTextFile(WEATHER_WARNING_FILE);
	return WeatherWarningList;
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

//CO Methods
void WeatherStationPersistance::Persistance::AddCOData(SensorCO^ CO) {

	sConcentracionCOList->Add(CO);
	//PersistTextFile(CO_FILE, sConcentracionCOList);
	PersistXMLFile(CO_XML, sConcentracionCOList);
}

List<SensorCO^>^ WeatherStationPersistance::Persistance::QueryCOData() {
	//sConcentracionCOList = (List<SensorCO^>^)LoadTextFile(CO_FILE);
	sConcentracionCOList = (List<SensorCO^>^)LoadXMLFile(CO_XML);
	return sConcentracionCOList;
}

SensorCO^ WeatherStationPersistance::Persistance::QueryCObyIds(int IdMedicion, String^ IdSensor) {
	//sConcentracionCOList = (List<SensorCO^>^)LoadTextFile(CO_FILE);
	sConcentracionCOList = (List<SensorCO^>^)LoadXMLFile(CO_XML);
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
	//PersistTextFile(CO_FILE, sConcentracionCOList);
	PersistXMLFile(CO_XML, sConcentracionCOList);
	//PersistBinaryFile(TEMP_HUM_BIN, sConcentracionCOList);
}

void WeatherStationPersistance::Persistance::DeleteCOData(int IdMedicion, String^ IdSensor) {
	for (int i = 0; i < sConcentracionCOList->Count; i++) {
		if (sConcentracionCOList[i]->IdMedicion == IdMedicion)
			if (sConcentracionCOList[i]->IdSensor == IdSensor)
				sConcentracionCOList->RemoveAt(i);
	}
	//PersistTextFile(CO_FILE, sConcentracionCOList);
	PersistXMLFile(CO_XML, sConcentracionCOList);
	//PersistBinaryFile(TEMP_HUM_BIN, sConcentracionCOList);
}
AlertaMeteorologica^ WeatherStationPersistance::Persistance::QueryWeatherWarningbyId(String^ selectedWeatherWarningId) {
	WeatherWarningList = (List<AlertaMeteorologica^>^)LoadTextFile(WEATHER_WARNING_FILE);
	for (int i = 0; i < WeatherWarningList->Count; i++) {
		//Obtenemos el IdAlerta(ESPACIOS INCLUIDOS)
		String^ currentWeatherWarningId = WeatherWarningList[i]->IdAlerta;
		//Obtenemos el IdAlerta(ESPACIOS VACIOS)
		String^ trimmedWeatherWarningId = currentWeatherWarningId->Trim();
		if (trimmedWeatherWarningId == selectedWeatherWarningId)
			return WeatherWarningList[i];
	}
	return nullptr;
}

void WeatherStationPersistance::Persistance::DeleteWeatherWarning(String^ WeatherWarningId) {
	for (int i = 0; i < WeatherWarningList->Count; i++) {
		//Obtenemos el IdAlerta(ESPACIOS INCLUIDOS)
		String^ currentWeatherWarningId = WeatherWarningList[i]->IdAlerta;
		//Obtenemos el IdAlerta(ESPACIOS VACIOS)
		String^ trimmedWeatherWarningId = currentWeatherWarningId->Trim();
		if (trimmedWeatherWarningId == WeatherWarningId)
			WeatherWarningList->RemoveAt(i);
	}
	PersistTextFile(WEATHER_WARNING_FILE, WeatherWarningList);

}