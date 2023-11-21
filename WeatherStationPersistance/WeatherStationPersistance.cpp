#include "pch.h"
#include "WeatherStationPersistance.h"

using namespace System::Xml::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace System::IO;
using namespace System::Globalization;


SqlConnection^ WeatherStationPersistance::Persistance::GetConnection() {
	SqlConnection^ conn = gcnew SqlConnection();
	String^ password = "uPAXrnSA";
	conn->ConnectionString = "Server=200.16.7.140;Database=a20212422;User ID=a20212422;Password=" + password + ";";
	conn->Open();
	return conn;
}




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
	
	else if (persistObject->GetType() == List<SensorTemperaturaHumedad^>::typeid) { //TempHum
		List<SensorTemperaturaHumedad^>^ tempHum = (List<SensorTemperaturaHumedad^>^)persistObject;
		for (int i = 0; i < tempHum->Count; i++) {
			SensorTemperaturaHumedad^ r = tempHum[i];
			writer->WriteLine(r->IdSensor + "," + r->Temperatura + "," + r->UnidadTemp + "," + r->Humedad);
		}
	}
	else if (persistObject->GetType() == List<SensorCO^>::typeid) { //CO
		List<SensorCO^>^ CO = (List<SensorCO^>^)persistObject;
		for (int i = 0; i < CO->Count; i++) {
			SensorCO^ r = CO[i];
			writer->WriteLine(r->IdSensor + "," + r->NivelCO);
		}
	}

	else if (persistObject->GetType() == List<SensorCalidadAire^>::typeid) { //CalidadAire
		List<SensorCalidadAire^>^ airq = (List<SensorCalidadAire^>^)persistObject;
		for (int i = 0; i < airq->Count; i++) {
			SensorCalidadAire^ r = airq[i];
			writer->WriteLine(r->IdSensor + "," + r->CalidadAire);
		}
	}

	else if (persistObject->GetType() == List<AlertaMeteorologica^>::typeid) {
		List<AlertaMeteorologica^>^ alertaMeteorologica = (List<AlertaMeteorologica^>^)persistObject;
		for(int i=0;i<alertaMeteorologica->Count;i++){
			AlertaMeteorologica^ r = alertaMeteorologica[i];
			writer->WriteLine(r->IdAlerta + ", "+ r->IdSensor + ", "+r->ValorRef +", " + r->FechaHora);
	    }
    }

	else if (persistObject->GetType()==List<AlertaError^>::typeid) {
		List<AlertaError^>^ alertaError = (List<AlertaError^>^)persistObject;
		for (int i = 0; i < alertaError->Count; i++) {
			AlertaError^ r = alertaError[i];
			writer->WriteLine(r->IdError + "," + r->IdSensor + "," + r->limitValue + "," + r->ErrorDate);
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
		else if (persistObject->GetType() == List<SensorCalidadAire^>::typeid) {
			XmlSerializer^ xmlSerializer = gcnew XmlSerializer(List<SensorCalidadAire^>::typeid);
			xmlSerializer->Serialize(writer, persistObject);
		}
		else if (persistObject->GetType() == List<AlertaMeteorologica^>::typeid) {
			XmlSerializer^ xmlSerializer = gcnew XmlSerializer(List<AlertaMeteorologica^>::typeid);
			xmlSerializer->Serialize(writer, persistObject);
		}
		else if (persistObject->GetType() == List<AlertaError^>::typeid) {
			XmlSerializer^ xmlSerializer = gcnew XmlSerializer(List<AlertaError^>::typeid);
			xmlSerializer->Serialize(writer, persistObject);
		}//si hay casos particulares :' La unica diferencia es el tipo de dato User^ nada mas
		else if (persistObject->GetType() == String::typeid) {
			XmlSerializer^ xmlSerializer = gcnew XmlSerializer(String::typeid);
			xmlSerializer->Serialize(writer, persistObject);
		}
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
			/*result = gcnew List<Membresia^>();
			while (true) {
				String^ line = reader->ReadLine();
				if (line == nullptr) break;
				array<String^>^ record = line->Split(',');
				Membresia^ membresia = gcnew Membresia();
				String^ formatoFecha = "dd/MM/yyyy HH:mm:ss";
				membresia->Id = Convert::ToInt32(record[0]);

				try {
					String^ StringRecord = record[1]->Trim();
					membresia->fechaInicio = DateTime::ParseExact(StringRecord, formatoFecha, CultureInfo::InvariantCulture, DateTimeStyles::None);

					String^ StringRecordz = record[2]->Trim();
					membresia->fechaFinalizacion = DateTime::ParseExact(StringRecordz, formatoFecha, CultureInfo::InvariantCulture, DateTimeStyles::None);


				}
				catch (System::FormatException^ ex) {
					// Manejo de la excepción en caso de formato incorrecto
					// Puedes registrar el error o asignar un valor predeterminado a FechaHora
					membresia->fechaInicio = DateTime::Today; // Valor predeterminado			
				}

				((List<Membresia^>^)result)->Add(membresia);



			}*/
		}
		else if (fileName->Equals(CALIDAD_AIRE_FILE)) {
			result = gcnew List<SensorCalidadAire^>();
			while (true) {
				String^ line = reader->ReadLine();
				if (line == nullptr) break;
				array<String^>^ record = line->Split(',');
				SensorCalidadAire^ CalidadAire = gcnew SensorCalidadAire();
				CalidadAire->IdSensor = Convert::ToInt32(record[0]);
				CalidadAire->CalidadAire = Convert::ToInt32(record[1]);
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
				CO->IdSensor = Convert::ToInt32(record[0]);
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
				tempHum->IdSensor = Convert::ToInt32(record[0]);
				tempHum->Temperatura = Convert::ToInt32(record[1]);
				tempHum->UnidadTemp = record[2];
				tempHum->Humedad = Convert::ToInt32(record[3]);
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
		else if (fileName->Equals(ERROR_WARNING_FILE)) {
			result = gcnew List<AlertaError^>();
			while (true) {
				String^ line = reader->ReadLine();
				if (line == nullptr) {
					break;
				}
				array<String^>^ record = line->Split(',');
				AlertaError^ alertaError = gcnew AlertaError();
				String^ formatoFecha = "dd/MM/yyyy HH:mm:ss";
				alertaError->IdError = record[0];
				alertaError->IdSensor = Int32::Parse(record[1]);
				alertaError->limitValue = Double::Parse(record[2]);
				try{
					String ^ StringRecord = record[3]->Trim();
					alertaError->ErrorDate = DateTime::ParseExact(StringRecord, formatoFecha, CultureInfo::InvariantCulture, DateTimeStyles::None);
				}
					catch (System::FormatException^ ex) {
					alertaError->ErrorDate = DateTime::Today; // Valor predeterminado			
				}
					((List<AlertaError^>^)result)->Add(alertaError);

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

			else if (fileName->Equals(WEATHER_WARNING_XML)) {
				xmlSerializer = gcnew XmlSerializer(List<AlertaMeteorologica^>::typeid);
				result = (List<AlertaMeteorologica^>^)xmlSerializer->Deserialize(reader);
			}
			else if (fileName->Equals(ERROR_WARNING_XML)) {
				xmlSerializer = gcnew XmlSerializer(List<AlertaError^>::typeid);
				result = (List<AlertaError^>^)xmlSerializer->Deserialize(reader);
    	} 

			else if (fileName->Equals(CALIDAD_AIRE_XML)) {
				xmlSerializer = gcnew XmlSerializer(List<SensorCalidadAire^>::typeid);
				result = (List<SensorCalidadAire^>^)xmlSerializer->Deserialize(reader);

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
		}

		if (fileName->Equals(USERS_BIN)) {
			result = gcnew List<User^>();
			if (File::Exists(fileName)) {
				result = (List<User^>^)formatter->Deserialize(file);
			}
		}
		else if (File::Exists(fileName) && fileName->Equals(TEMP_HUM_BIN)) {
			result = gcnew List<SensorTemperaturaHumedad^>();
			if (File::Exists(fileName)) {
				result = (List<SensorTemperaturaHumedad^>^)formatter->Deserialize(file);
			}
		}
		else if (File::Exists(fileName) && file->Equals(WEATHER_WARNING_BIN)) {
			result = formatter->Deserialize(file);
		}
		else if (File::Exists(fileName) && file->Equals(ERROR_WARNING_BIN)) {
			result = formatter->Deserialize(file);
		}
		else if (File::Exists(fileName) && fileName->Equals(CO_BIN)) {

			result = formatter->Deserialize(file);
		}
		else if (fileName->Equals(SENSORDATA_BIN)) {
			result = gcnew List<Ambiente^>();
			if (File::Exists(fileName)) {
				result = (List<Ambiente^>^)formatter->Deserialize(file);
			}
		}
	}
	catch (NullReferenceException^ ex) {
		//Acciones a realizar si ocurre una excepción del tipo NullReference.
		throw ex;
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
	//UserList->Add(user);
	//PersistTextFile(WEATHER_STATION, UserList);
	//PersistXMLFile(USERS_XML, UserList);
	//PersistBinaryFile(USERS_BIN, UserList);


	SqlConnection^ conn;
	try {
		/* Paso 1: Se obtiene la conexión a la BD */
		conn = GetConnection();

		/* Paso 2: Se prepara la sentencia SQL */
		/*
		* 		String^ sqlStr = "dbo.usp_AddAmbienteData";
		String^ sqlStr = "INSERT INTO Robot_Waiter(BRAND, SPEED, BATTERY_LEVEL) " +
			"VALUES('" + robot->Brand + "'," + robot->Speed + ", " + robot->BatteryLevel + ")";
		*/
		String^ sqlStr = "dbo.usp_AddUserData";
		SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->CommandType = System::Data::CommandType::StoredProcedure;
		/**/
		cmd->Parameters->Add("@NOMBRE", System::Data::SqlDbType::VarChar, 200);
		cmd->Parameters->Add("@CONTRASENA", System::Data::SqlDbType::VarChar, 200);
		cmd->Parameters->Add("@EMAIL", System::Data::SqlDbType::VarChar, 200);
		cmd->Parameters->Add("@TIPOMEMBRESIA", System::Data::SqlDbType::VarChar, 200);
		cmd->Parameters->Add("@FECHAINICIO", System::Data::SqlDbType::VarChar, 200);
		cmd->Parameters->Add("@FECHAFINALIZACION", System::Data::SqlDbType::VarChar, 200);
		cmd->Parameters->Add("@UNIDADTEMP", System::Data::SqlDbType::VarChar, 200);
		cmd->Parameters->Add("@FORMATOHORAS", System::Data::SqlDbType::VarChar, 200);
		cmd->Parameters->Add("@FORMATOFECHAS", System::Data::SqlDbType::VarChar, 200);

		cmd->Parameters->Add("@PUNTOSTOTALES", System::Data::SqlDbType::Int);
		cmd->Parameters->Add("@PUNTOSDIARIOS", System::Data::SqlDbType::Int);
		cmd->Parameters->Add("@FECHAACTUALIZACION", System::Data::SqlDbType::VarChar, 200);
		cmd->Parameters->Add("@NUMERODECUENTA", System::Data::SqlDbType::Int);
		cmd->Parameters->Add("@CCV", System::Data::SqlDbType::Int);
		//cmd->Parameters->Add("@PREGUNTASCONTESTADAS", System::Data::SqlDbType::VarChar, -1); // VARCHAR(MAX) 

		SqlParameter^ outputIdParam = gcnew SqlParameter("@ID", System::Data::SqlDbType::Int);
		outputIdParam->Direction = System::Data::ParameterDirection::Output;
		cmd->Parameters->Add(outputIdParam);
		cmd->Prepare();
		cmd->Parameters["@NOMBRE"]->Value = user->Name;
		cmd->Parameters["@CONTRASENA"]->Value = user->Password;
		cmd->Parameters["@EMAIL"]->Value = user->Email;
		cmd->Parameters["@TIPOMEMBRESIA"]->Value = user->membresia->TipoMembresia;
		cmd->Parameters["@FECHAINICIO"]->Value = user->membresia->fechaInicio;
		cmd->Parameters["@FECHAFINALIZACION"]->Value = user->membresia->fechaFinalizacion;
		cmd->Parameters["@UNIDADTEMP"]->Value = user->ajustes->UnidadTemp;
		cmd->Parameters["@FORMATOHORAS"]->Value = user->ajustes->FormatoHoras;
		cmd->Parameters["@FORMATOFECHAS"]->Value = user->ajustes->FormatoFecha;

		cmd->Parameters["@PUNTOSTOTALES"]->Value = user->PuntosTotales;
		cmd->Parameters["@PUNTOSDIARIOS"]->Value = user->PuntosDiarios;
		cmd->Parameters["@FECHAACTUALIZACION"]->Value = user->fechaUltimaActualizacion;
		cmd->Parameters["@NUMERODECUENTA"]->Value = user->NumeroDeCuentaUser;
		cmd->Parameters["@CCV"]->Value = user->CCVUSER;
		//cmd->Parameters["@PREGUNTASCONTESTADAS"]->Value = user->PreguntasContestadas;

		/*
		cmd->Parameters["@UNIDADTEMP"]->Value = dynamic_cast<SensorTemperaturaHumedad^>(sensordata->DataBase[0])->UnidadTemp;
		cmd->Parameters["@HUM"]->Value = dynamic_cast<SensorTemperaturaHumedad^>(sensordata->DataBase[0])->Humedad;
		cmd->Parameters["@CONCCO"]->Value = dynamic_cast<SensorCO^>(sensordata->DataBase[1])->NivelCO;
		cmd->Parameters["@CALAIRE"]->Value = dynamic_cast<SensorCalidadAire^>(sensordata->DataBase[2])->CalidadAire;
		cmd->Parameters["@UBIGEO"]->Value = sensordata->UbicacionGeografica;
		cmd->Parameters["@TMED"]->Value = sensordata->TiempoMedicion;
		cmd->Parameters["@FEMED"]->Value = sensordata->FechaMedicion;
		*/
		/* Paso 3: Se ejecuta la sentencia SQL */
		cmd->ExecuteNonQuery();
	}
	catch (Exception^ ex) {
		//Guardar en el log o mandar un correo electrónico al Administrador
	}
	finally {
		/* Paso 4: Se cierran los objetos de conexión */
		if (conn != nullptr) conn->Close();
	}
}

List<User^>^ WeatherStationPersistance::Persistance::QueryAllUser() {
	//UserList = (List<User^>^)LoadTextFile(WEATHER_STATION);
	//UserList = (List<User^>^)LoadXMLFile(USERS_XML);
	//UserList = (List<User^>^)LoadBinaryFile(USERS_BIN);
	UserList = LoadUser();
	return UserList;
}

User^ WeatherStationPersistance::Persistance::QueryUserbyName(String^ name) {
	//UserList = (List<User^>^)LoadTextFile(WEATHER_STATION);
	//UserList = (List<User^>^)LoadXMLFile(USERS_XML);
	UserList = (List<User^>^)LoadUser();
	for (int i = 0; i < UserList->Count; i++) {
		if (UserList[i]->Name == name)
			return UserList[i];
	}
	return nullptr;
}

User^ WeatherStationPersistance::Persistance::QueryUserbyId(int Id) {
	//UserList = (List<User^>^)LoadTextFile(WEATHER_STATION);
	//UserList = (List<User^>^)LoadXMLFile(USERS_XML);
	UserList = (List<User^>^)LoadUser();
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

	SqlConnection^ conn;
	try {
		/* Paso 1: Se obtiene la oconexión a la BD */
		conn = GetConnection();

		/* Paso 2: Se prepara la sentencia SQL */
		/*
		String^ sqlStr = "UPDATE Robot_Waiter " +
			"SET BRAND='" + robot->Brand + "', " +
			" SPEED=" + robot->Speed + ", " +
			" BATTERY_LEVEL=" + robot->BatteryLevel +
			" WHERE id=" + robot->Id;
		*/
		String^ sqlStr = "dbo.usp_UpdateUserData";
		SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->CommandType = System::Data::CommandType::StoredProcedure;
		cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int);
		cmd->Parameters->Add("@NOMBRE", System::Data::SqlDbType::VarChar,200);
		cmd->Parameters->Add("@CONTRASENA", System::Data::SqlDbType::VarChar,200);
		cmd->Parameters->Add("@EMAIL", System::Data::SqlDbType::VarChar,200);
		cmd->Parameters->Add("@TIPOMEMBRESIA", System::Data::SqlDbType::VarChar,200);
		cmd->Parameters->Add("@FECHAINICIO", System::Data::SqlDbType::VarChar, 200);
		cmd->Parameters->Add("@FECHAFINALIZACION", System::Data::SqlDbType::VarChar, 200);
		cmd->Parameters->Add("@UNIDADTEMP", System::Data::SqlDbType::VarChar, 200);
		cmd->Parameters->Add("@FORMATOHORAS", System::Data::SqlDbType::VarChar, 200);
		cmd->Parameters->Add("@FORMATOFECHAS", System::Data::SqlDbType::VarChar, 200);

		cmd->Parameters->Add("@PUNTOSTOTALES", System::Data::SqlDbType::Int);
		cmd->Parameters->Add("@PUNTOSDIARIOS", System::Data::SqlDbType::Int);
		cmd->Parameters->Add("@FECHAACTUALIZACION", System::Data::SqlDbType::VarChar, 200);
		cmd->Parameters->Add("@NUMERODECUENTA", System::Data::SqlDbType::Int);
		cmd->Parameters->Add("@CCV", System::Data::SqlDbType::Int);





		cmd->Prepare();
		cmd->Parameters["@ID"]->Value = user->Id;
		cmd->Parameters["@NOMBRE"]->Value = user->Name;
		cmd->Parameters["@CONTRASENA"]->Value = user->Password;
		cmd->Parameters["@EMAIL"]->Value = user->Email;
		cmd->Parameters["@TIPOMEMBRESIA"]->Value = user->membresia->TipoMembresia;
		cmd->Parameters["@FECHAINICIO"]->Value = user->membresia->fechaInicio;
		cmd->Parameters["@FECHAFINALIZACION"]->Value = user->membresia->fechaFinalizacion;
		cmd->Parameters["@UNIDADTEMP"]->Value = user->ajustes->UnidadTemp;
		cmd->Parameters["@FORMATOHORAS"]->Value = user->ajustes->FormatoHoras;
		cmd->Parameters["@FORMATOFECHAS"]->Value = user->ajustes->FormatoFecha;


		cmd->Parameters["@PUNTOSTOTALES"]->Value = user->PuntosTotales;
		cmd->Parameters["@PUNTOSDIARIOS"]->Value = user->PuntosDiarios;
		cmd->Parameters["@FECHAACTUALIZACION"]->Value = user->fechaUltimaActualizacion;
		cmd->Parameters["@NUMERODECUENTA"]->Value = user->NumeroDeCuentaUser;
		cmd->Parameters["@CCV"]->Value = user->CCVUSER;

		/* Paso 3: Se ejecuta la sentencia SQL */
		cmd->ExecuteNonQuery();
	}
	catch (Exception^ ex) {
	}
	finally {
		/* Paso 4: Se cierra la conexión */
		if (conn != nullptr) conn->Close();
	}

	//PersistTextFile(WEATHER_STATION, UserList);
	//PersistXMLFile(USERS_XML, UserList);
	//PersistBinaryFile(USERS_BIN, UserList);
}

void WeatherStationPersistance::Persistance::DeleteUser(int userId) {
	/*for (int i = 0; i < UserList->Count; i++) {
		if (UserList[i]->Id == userId)
			UserList->RemoveAt(i);
	}*/
	//PersistTextFile(WEATHER_STATION, UserList);
	//PersistXMLFile(USERS_XML, UserList);
	//PersistBinaryFile(USERS_BIN, UserList);
	SqlConnection^ conn;

	try {
		/* Paso 1: Se obtiene la oconexión a la BD */
		conn = GetConnection();

		/* Paso 2: Se prepara la sentencia SQL */
		/*
		String^ sqlStr = "DELETE FROM Robot_Waiter " +
			" WHERE id=" + robotId;
		*/
		String^ sqlStr = "dbo.usp_DeleteUserData";
		SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->CommandType = System::Data::CommandType::StoredProcedure;
		cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int);
		cmd->Prepare();
		cmd->Parameters["@ID"]->Value = userId;

		/* Paso 3: Se ejecuta la sentencia SQL */
		cmd->ExecuteNonQuery();
	}
	catch (Exception^ ex) {

	}
	finally {
		/* Paso 4: Se cierra la conexión */
		if (conn != nullptr) conn->Close();
	}






}

void WeatherStationPersistance::Persistance::AddAjustes(Ajustes^ ajustes) {
	AjustesList = (Ajustes^)ajustes;
	PersistTextFile(AJUSTES_FILE, AjustesList);
}

void WeatherStationPersistance::Persistance::AddPregunta(Pregunta^ Pregunta)
{
	throw gcnew System::NotImplementedException();
}

List<Pregunta^>^ WeatherStationPersistance::Persistance::QueryAllPregunta()
{
	PreguntasList = LoadPreguntas();
	return PreguntasList;
}

Ajustes^ WeatherStationPersistance::Persistance::QueryPrevAjustes() {
	AjustesList = (Ajustes^)LoadTextFile(AJUSTES_FILE);
	return AjustesList;
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
	/*for (int i = 0; i < sTempHumList->Count; i++) {
		if ((sTempHumList[i]->IdMedicion) == IdMedicion)
			if((sTempHumList[i]->IdSensor) == IdSensor)
				return sTempHumList[i];
	}*/
	return nullptr;
}

void WeatherStationPersistance::Persistance::UpdateTHData(SensorTemperaturaHumedad^ sTempHum) {
	//for (int i = 0; i < sTempHumList->Count; i++) {
	//	if (sTempHumList[i]->IdMedicion == sTempHum->IdMedicion)
	//		//if (sTempHumList[i]->IdSensor == sTempHum->IdSensor)
	//		sTempHumList[i] = sTempHum;
	//}
	//PersistTextFile(TEMP_HUM_FILE, sTempHumList);
	//PersistXMLFile(TEMP_HUM_XML, sTempHumList);
	//PersistBinaryFile(TEMP_HUM_BIN, sTempHumList);
}

void WeatherStationPersistance::Persistance::DeleteTHData(int IdMedicion, String^ IdSensor) {
	/*for (int i = 0; i < sTempHumList->Count; i++) {
		if (sTempHumList[i]->IdMedicion == IdMedicion)
			if (sTempHumList[i]->IdSensor == IdSensor)
				sTempHumList->RemoveAt(i);
	}*/
	//PersistTextFile(TEMP_HUM_FILE, sTempHumList);
	//PersistXMLFile(TEMP_HUM_XML, sTempHumList);
	//PersistBinaryFile(TEMP_HUM_BIN, sTempHumList);
}


//CONCENTRACION CO

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
	/*sConcentracionCOList = (List<SensorCO^>^)LoadXMLFile(CO_XML);
	for (int i = 0; i < sConcentracionCOList->Count; i++) {
		if ((sConcentracionCOList[i]->IdMedicion) == IdMedicion)
			if ((sConcentracionCOList[i]->IdSensor) == IdSensor)
				return sConcentracionCOList[i];
	}*/
	return nullptr;
}

void WeatherStationPersistance::Persistance::UpdateCOData(SensorCO^ sConcentracionCO) {
	//for (int i = 0; i < sConcentracionCOList->Count; i++) {
	//	if (sConcentracionCOList[i]->IdMedicion == sConcentracionCO->IdMedicion)
	//		//if (sTempHumList[i]->IdSensor == sTempHum->IdSensor)
	//		sConcentracionCOList[i] = sConcentracionCO;
	//}
	//PersistTextFile(CO_FILE, sConcentracionCOList);
	//PersistXMLFile(CO_XML, sConcentracionCOList);
	//PersistBinaryFile(TEMP_HUM_BIN, sConcentracionCOList);
}

void WeatherStationPersistance::Persistance::DeleteCOData(int IdMedicion, String^ IdSensor) {
	/*for (int i = 0; i < sConcentracionCOList->Count; i++) {
		if (sConcentracionCOList[i]->IdMedicion == IdMedicion)
			if (sConcentracionCOList[i]->IdSensor == IdSensor)
				sConcentracionCOList->RemoveAt(i);
	}*/

	//PersistTextFile(CO_FILE, sConcentracionCOList);
	//PersistXMLFile(CO_XML, sConcentracionCOList);
	//PersistBinaryFile(TEMP_HUM_BIN, sTempHumList);
}


//Weather Warning
List<AlertaMeteorologica^>^ WeatherStationPersistance::Persistance::QueryWeatherWarning() {
	//WeatherWarningList = (List<AlertaMeteorologica^>^)LoadTextFile(WEATHER_WARNING_FILE);
	WeatherWarningList = (List<AlertaMeteorologica^>^)LoadXMLFile(WEATHER_WARNING_XML);
	return WeatherWarningList;
}

void WeatherStationPersistance::Persistance::AddWeatherWarning(AlertaMeteorologica^ alertaMeteorologica) {
	WeatherWarningList->Add(alertaMeteorologica);
	//PersistTextFile(WEATHER_WARNING_FILE, WeatherWarningList);
	PersistXMLFile(WEATHER_WARNING_XML, WeatherWarningList);
}

void WeatherStationPersistance::Persistance::UpdateWeatherWarning(AlertaMeteorologica^ alertaMeteorologica) {
	for (int i = 0; i < WeatherWarningList->Count; i++) {
		if (WeatherWarningList[i]->IdAlerta == alertaMeteorologica->IdAlerta)
			//if (sTempHumList[i]->IdSensor == sTempHum->IdSensor)
			WeatherWarningList[i] = alertaMeteorologica;
	}
	//PersistTextFile(WEATHER_WARNING_FILE, WeatherWarningList);
	PersistXMLFile(WEATHER_WARNING_XML, WeatherWarningList);
  }
  

//calidad aire

SensorCalidadAire^ WeatherStationPersistance::Persistance::QueryCalidadAirebyIds(int IdMedicion, String^ IdSensor) {
	sCalidadAireList = (List<SensorCalidadAire^>^)LoadTextFile(CALIDAD_AIRE_FILE);
	//sTempHumList = (List<SensorTemperaturaHumedad^>^)LoadTextFile(TEMP_HUM_FILE);
	/*for (int i = 0; i < sCalidadAireList->Count; i++) {
		if ((sCalidadAireList[i]->IdMedicion) == IdMedicion)
			if ((sCalidadAireList[i]->IdSensor) == IdSensor)
				return sCalidadAireList[i];
	}*/
	//PersistTextFile(CO_FILE, sConcentracionCOList);
	PersistXMLFile(CO_XML, sConcentracionCOList);
	//PersistBinaryFile(TEMP_HUM_BIN, sConcentracionCOList)
	return nullptr;
}

AlertaMeteorologica^ WeatherStationPersistance::Persistance::QueryWeatherWarningbyId(String^ selectedWeatherWarningId) {
	//WeatherWarningList = (List<AlertaMeteorologica^>^)LoadTextFile(WEATHER_WARNING_FILE);
	WeatherWarningList = (List<AlertaMeteorologica^>^)LoadXMLFile(WEATHER_WARNING_XML);
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


void WeatherStationPersistance::Persistance::UpdateCalidadAireData(SensorCalidadAire^ sCalidadAire) {
	//for (int i = 0; i < sCalidadAireList->Count; i++) {
	//	if (sCalidadAireList[i]->IdMedicion == sCalidadAire->IdMedicion)
	//		//if (sTempHumList[i]->IdSensor == sTempHum->IdSensor)
	//		sCalidadAireList[i] = sCalidadAire;
	//}
	//PersistTextFile(CALIDAD_AIRE_FILE, sCalidadAireList);
	//PersistXMLFile(CO_XML, sConcentracionCOList);
	//PersistBinaryFile(TEMP_HUM_BIN, sTempHumList);
}

void WeatherStationPersistance::Persistance::DeleteCalidadAireData(int IdMedicion, String^ IdSensor) {
	/*for (int i = 0; i < sCalidadAireList->Count; i++) {
		if (sCalidadAireList[i]->IdMedicion == IdMedicion)
			if (sCalidadAireList[i]->IdSensor == IdSensor)
				sCalidadAireList->RemoveAt(i);
	}*/
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


void WeatherStationPersistance::Persistance::DeleteWeatherWarning(String^ WeatherWarningId) {
	for (int i = 0; i < WeatherWarningList->Count; i++) {
		//Obtenemos el IdAlerta(ESPACIOS INCLUIDOS)
		String^ currentWeatherWarningId = WeatherWarningList[i]->IdAlerta;
		//Obtenemos el IdAlerta(ESPACIOS VACIOS)
		String^ trimmedWeatherWarningId = currentWeatherWarningId->Trim();
		if (trimmedWeatherWarningId == WeatherWarningId)
			WeatherWarningList->RemoveAt(i);
	}
	//PersistTextFile(WEATHER_WARNING_FILE, WeatherWarningList);
	PersistXMLFile(WEATHER_WARNING_XML, WeatherWarningList);

}

//ErrorWarning
List<AlertaError^>^ WeatherStationPersistance::Persistance::QueryErrorWarning() {
	//ErrorWarningList = (List<AlertaError^>^)LoadTextFile(ERROR_WARNING_FILE);
	ErrorWarningList = (List<AlertaError^>^)LoadXMLFile(ERROR_WARNING_XML);
	return ErrorWarningList;
}

void WeatherStationPersistance::Persistance::AddErrorWarning(AlertaError^ alertaError) {
	ErrorWarningList->Add(alertaError);
	//PersistTextFile(ERROR_WARNING_FILE, ErrorWarningList);
	PersistXMLFile(ERROR_WARNING_XML, ErrorWarningList);
}


AlertaError^ WeatherStationPersistance::Persistance::QueryErrorWarningbyId(String^ selectedErrorWarningId) {
	//ErrorWarningList = (List<AlertaError^>^)LoadTextFile(ERROR_WARNING_FILE);
	ErrorWarningList = (List<AlertaError^>^)LoadXMLFile(ERROR_WARNING_XML);
	for (int i = 0; i < ErrorWarningList->Count; i++) {
		//Obtenemos el IdAlerta(ESPACIOS INCLUIDOS)
		String^ currentErrorWarningId = ErrorWarningList[i]->IdError;
		//Obtenemos el IdAlerta(ESPACIOS VACIOS)
		String^ trimmedErrorWarningId = currentErrorWarningId->Trim();
		if (trimmedErrorWarningId == selectedErrorWarningId)
			return ErrorWarningList[i];
	}
	return nullptr;
}


void WeatherStationPersistance::Persistance::DeleteErrorWarning(String^ ErrorWarningId) {
	for (int i = 0; i < ErrorWarningList->Count; i++) {
		//Obtenemos el IdError(ESPACIOS INCLUIDOS)
		String^ currentErrorWarningId = ErrorWarningList[i]->IdError;
		//Obtenemos el IdError(ESPACIOS VACIOS)
		String^ trimmedErrorWarningId = currentErrorWarningId->Trim();
		if (trimmedErrorWarningId == ErrorWarningId)
			ErrorWarningList->RemoveAt(i);
	}
	//PersistTextFile(ERROR_WARNING_FILE, ErrorWarningList);
	PersistXMLFile(ERROR_WARNING_XML, ErrorWarningList);

}

void WeatherStationPersistance::Persistance::UpdateErrorWarning(AlertaError^ alertaError) {
	for (int i = 0; i < ErrorWarningList->Count; i++) {
		if (ErrorWarningList[i]->IdError == alertaError->IdError)
			//if (sTempHumList[i]->IdSensor == sTempHum->IdSensor)
			ErrorWarningList[i] = alertaError;
	}
	//PersistTextFile(ERROR_WARNING_FILE, ErrorWarningList);
	PersistXMLFile(ERROR_WARNING_XML, ErrorWarningList);
}



List<Ambiente^>^ WeatherStationPersistance::Persistance::LoadAmbientes() {
	List<Ambiente^>^ ambientelist = gcnew List<Ambiente^>();
	SqlConnection^ conn;
	SqlDataReader^ reader;
	try {
		//Paso 1: Se obtiene la conexión
		conn = GetConnection();
		//Paso 2: Se prepara la sentencia SQL
		/*
		SqlCommand^ cmd = gcnew SqlCommand("SELECT * FROM ROBOT_WAITER", conn);
		*/
		/*
		String^ sqlStr = "dbo.usp_QueryAmbienteData";
		SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
		*/
		String^ sqlStr = "dbo.usp_QueryAmbienteData";
		SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->CommandType = System::Data::CommandType::StoredProcedure;
		cmd->Prepare();

		/*
		*/
		//Paso 3: Se ejecuta la sentencia
		reader = cmd->ExecuteReader();
		//Paso 4: Se procesa los resultados
		while (reader->Read()) {	
			Ambiente^ ambiente = gcnew Ambiente();
			
			ambiente->IdMedicion = Convert::ToInt32(reader["ID"]->ToString());

			ambiente->UbicacionGeografica = reader["UBIGEO"]->ToString();
			String^ UbiGeo;
			int idSensor{};

			UbiGeo=(ambiente->UbicacionGeografica);

			if (UbiGeo == "FACI") {
				idSensor = 1;
			}
			else if (UbiGeo == "CIA") {
				idSensor = 2;
			}
			else if (UbiGeo == "BIBLIOTECA CENTRAL") {
				idSensor = 3;
			}
			else if (UbiGeo == "TINKUY") {
				idSensor = 4;
			}
			// Crear un objeto SensorTemperaturaHumedad y asignar valores de temperatura
			SensorTemperaturaHumedad^ sensorTH = gcnew SensorTemperaturaHumedad();
			sensorTH->IdSensor = idSensor;
			sensorTH->Temperatura = Convert::ToInt32(reader["TEMP"]->ToString());
			sensorTH->UnidadTemp = reader["UNIDADTEMP"]->ToString();
			sensorTH->Humedad = Convert::ToInt32(reader["HUM"]->ToString());
			// Crear un objeto SensorNivelCO y asignar valores
			SensorCO^ sensorNivelCO = gcnew SensorCO();
			sensorNivelCO->NivelCO = Convert::ToInt32(reader["CONCCO"]->ToString());
			sensorNivelCO->IdSensor = idSensor;
			// Crear un objeto SensorCalidadAire y asignar valores
			SensorCalidadAire^ sensorCalidadAire = gcnew SensorCalidadAire();
			sensorCalidadAire->CalidadAire = Convert::ToInt32(reader["CALAIRE"]->ToString());
			sensorCalidadAire->IdSensor = idSensor;
			// Agregar el sensor a la lista de sensores en el ambiente
			List<Sensor^>^ sensorList = gcnew List<Sensor^>();
			sensorList->Add(sensorTH);
			sensorList->Add(sensorNivelCO);
			sensorList->Add(sensorCalidadAire);

			ambiente->DataBase = sensorList;

			ambiente->TiempoMedicion = reader["TMED"]->ToString();
			ambiente->FechaMedicion = reader["FEMED"]->ToString();
			ambientelist->Add(ambiente);
		}
	}
	catch (Exception^ ex) {
	}
	finally {
		//Paso 5: Se cierran los objetos de conexión
		if (reader != nullptr) reader->Close();
		if (conn != nullptr) conn->Close();
	}
	return ambientelist;
}


List<Pregunta^>^ WeatherStationPersistance::Persistance::LoadPreguntas() {
	List<Pregunta^>^ preguntalist = gcnew List<Pregunta^>();
	SqlConnection^ conn;
	SqlDataReader^ reader;
	try {
		//Paso 1: Se obtiene la conexión
		conn = GetConnection();
		//Paso 2: Se prepara la sentencia SQL
		/*
		SqlCommand^ cmd = gcnew SqlCommand("SELECT * FROM ROBOT_WAITER", conn);
		*/
		/*
		String^ sqlStr = "dbo.usp_QueryAmbienteData";
		SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
		*/
		String^ sqlStr = "dbo.usp_QueryPreguntas";
		SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->CommandType = System::Data::CommandType::StoredProcedure;
		cmd->Prepare();

		/*
		*/
		//Paso 3: Se ejecuta la sentencia
		reader = cmd->ExecuteReader();
		//Paso 4: Se procesa los resultados
		while (reader->Read()) {
			Pregunta^ pregunta = gcnew Pregunta();

			pregunta->id = Convert::ToInt32(reader["ID"]->ToString());

			pregunta->Enunciado = reader["ENUNCIADO"]->ToString();

			pregunta->Respuesta1 = reader["RESPUESTA1"]->ToString();
			pregunta->Respuesta2 = reader["RESPUESTA2"]->ToString();
			pregunta->Respuesta3 = reader["RESPUESTA3"]->ToString();
			pregunta->RPTACORRECT = reader["RPTACORRECT"]->ToString();

			preguntalist->Add(pregunta);
		}
	}
	catch (Exception^ ex) {
	}
	finally {
		//Paso 5: Se cierran los objetos de conexión
		if (reader != nullptr) reader->Close();
		if (conn != nullptr) conn->Close();
	}
	return preguntalist;
}


List<User^>^ WeatherStationPersistance::Persistance::LoadUser() {

	List<User^>^ userlist = gcnew List<User^>();
	SqlConnection^ conn;
	SqlDataReader^ reader;
	try {
		//Paso 1: Se obtiene la conexión
		conn = GetConnection();
		//Paso 2: Se prepara la sentencia SQL
		/*
		SqlCommand^ cmd = gcnew SqlCommand("SELECT * FROM ROBOT_WAITER", conn);
		*/
		/*
		String^ sqlStr = "dbo.usp_QueryAmbienteData";
		SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
		*/

		SqlCommand^ cmd = gcnew SqlCommand("SELECT * FROM USUARIO", conn);
		/*cmd->CommandType = System::Data::CommandType::StoredProcedure;
		cmd->Prepare();
		*/
		//Paso 3: Se ejecuta la sentencia
		reader = cmd->ExecuteReader();
		//Paso 4: Se procesa los resultados
		while (reader->Read()) {
			User^ user = gcnew User();

			user->Id = Convert::ToInt32(reader["ID"]->ToString());
			user->Name = reader["NOMBRE"]->ToString();
			user->Password = reader["CONTRASENA"]->ToString();

			user->Email = reader["EMAIL"]->ToString();

			Membresia^ membresia = gcnew Membresia();
			membresia->TipoMembresia = reader["TIPOMEMBRESIA"]->ToString();
			membresia->fechaFinalizacion = reader["FECHAFINALIZACION"]->ToString();
			membresia->fechaInicio = reader["FECHAINICIO"]->ToString();

			user->membresia = membresia;

			Ajustes^ ajustes = gcnew Ajustes();
			ajustes->UnidadTemp = reader["UNIDADTEMP"]->ToString();;
			ajustes->FormatoHoras = reader["FORMATOHORAS"]->ToString();
			ajustes->FormatoFecha = reader["FORMATOFECHAS"]->ToString();

			user->ajustes = ajustes;

			//
			user->PuntosTotales = Convert::ToInt32(reader["PUNTOSTOTALES"]->ToString());
			user->PuntosDiarios = Convert::ToInt32(reader["PUNTOSDIARIOS"]->ToString());
			
			user->fechaUltimaActualizacion = reader["FECHAACTUALIZACION"]->ToString();

			user->NumeroDeCuentaUser = Convert::ToInt32(reader["NUMERODECUENTA"]->ToString());
			user->CCVUSER = Convert::ToInt32(reader["CCV"]->ToString());

			userlist->Add(user);
		}
	}
	catch (Exception^ ex) {
	}
	finally {
		//Paso 5: Se cierran los objetos de conexión
		if (reader != nullptr) reader->Close();
		if (conn != nullptr) conn->Close();
	}
	return userlist;
}




void WeatherStationPersistance::Persistance::AddAmbienteData(Ambiente^ sensordata) {
		//sAmbienteDB->Add(sensordata);
	// PersistBinaryFile(SENSORDATA_BIN, sAmbienteDB);

	SqlConnection^ conn;
	try {
		/* Paso 1: Se obtiene la conexión a la BD */
		conn = GetConnection();

		/* Paso 2: Se prepara la sentencia SQL */
		/*
		* 		String^ sqlStr = "dbo.usp_AddAmbienteData";
		String^ sqlStr = "INSERT INTO Robot_Waiter(BRAND, SPEED, BATTERY_LEVEL) " +
			"VALUES('" + robot->Brand + "'," + robot->Speed + ", " + robot->BatteryLevel + ")";
		*/
		String^ sqlStr = "dbo.usp_AddAmbienteData";
		SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->CommandType = System::Data::CommandType::StoredProcedure;
		/**/
		cmd->Parameters->Add("@TEMP", System::Data::SqlDbType::Int);
		cmd->Parameters->Add("@UNIDADTEMP", System::Data::SqlDbType::VarChar, 200);
		cmd->Parameters->Add("@HUM", System::Data::SqlDbType::Int);
		cmd->Parameters->Add("@CONCCO", System::Data::SqlDbType::Int);
		cmd->Parameters->Add("@CALAIRE", System::Data::SqlDbType::Int);
		cmd->Parameters->Add("@UBIGEO", System::Data::SqlDbType::VarChar, 200);
		cmd->Parameters->Add("@TMED", System::Data::SqlDbType::VarChar, 200);
		cmd->Parameters->Add("@FEMED", System::Data::SqlDbType::VarChar, 200);

		SqlParameter^ outputIdParam = gcnew SqlParameter("@ID", System::Data::SqlDbType::Int);
		outputIdParam->Direction = System::Data::ParameterDirection::Output;
		cmd->Parameters->Add(outputIdParam);
		cmd->Prepare();

		cmd->Parameters["@TEMP"]->Value = dynamic_cast<SensorTemperaturaHumedad^>(sensordata->DataBase[0])->Temperatura;
		cmd->Parameters["@UNIDADTEMP"]->Value = dynamic_cast<SensorTemperaturaHumedad^>(sensordata->DataBase[0])->UnidadTemp;
		cmd->Parameters["@HUM"]->Value = dynamic_cast<SensorTemperaturaHumedad^>(sensordata->DataBase[0])->Humedad;
		cmd->Parameters["@CONCCO"]->Value = dynamic_cast<SensorCO^>(sensordata->DataBase[1])->NivelCO;
		cmd->Parameters["@CALAIRE"]->Value = dynamic_cast<SensorCalidadAire^>(sensordata->DataBase[2])->CalidadAire;
		cmd->Parameters["@UBIGEO"]->Value = sensordata->UbicacionGeografica;
		cmd->Parameters["@TMED"]->Value = sensordata->TiempoMedicion;
		cmd->Parameters["@FEMED"]->Value = sensordata->FechaMedicion;

		/* Paso 3: Se ejecuta la sentencia SQL */
		cmd->ExecuteNonQuery();
	}
	catch (Exception^ ex) {
		//Guardar en el log o mandar un correo electrónico al Administrador
	}
	finally {
		/* Paso 4: Se cierran los objetos de conexión */
		if (conn != nullptr) conn->Close();
	}

}


List<Ambiente^>^ WeatherStationPersistance::Persistance::QueryAmbienteData() {
	//ErrorWarningList = (List<AlertaError^>^)LoadTextFile(ERROR_WARNING_FILE);
	//sAmbienteDB = (List<Ambiente^>^)LoadBinaryFile(SENSORDATA_BIN);
	sAmbienteDB = LoadAmbientes();
	return sAmbienteDB;
}

Ambiente^ WeatherStationPersistance::Persistance::QueryLastUbiGeoData(String^ ubigeo) {
	sAmbienteDB = LoadAmbientes();
	for (int i = sAmbienteDB->Count - 1; i >= 0; i--) {
		if (sAmbienteDB[i]->UbicacionGeografica == ubigeo)
			return sAmbienteDB[i];
	}
	return nullptr;
}


Ambiente^ WeatherStationPersistance::Persistance::QueryAmbienteDatabyId(int IdMedicion) {
	//UserList = (List<User^>^)LoadTextFile(WEATHER_STATION);
	//UserList = (List<User^>^)LoadXMLFile(USERS_XML);
	//sAmbienteDB = (List<Ambiente^>^)LoadBinaryFile(SENSORDATA_BIN);
	sAmbienteDB = LoadAmbientes();
	for (int i = 0; i < sAmbienteDB->Count; i++) {
		if (sAmbienteDB[i]->IdMedicion == IdMedicion)
			return sAmbienteDB[i];
	}

	return nullptr;

	}

void WeatherStationPersistance::Persistance::UpdateAmbienteData(Ambiente^ sensorData) {
	//sAmbienteDB = LoadAmbientes();
	for (int i = 0; i < sAmbienteDB->Count; i++) {
		if (sAmbienteDB[i]->IdMedicion == sensorData->IdMedicion)
			sAmbienteDB[i] = sensorData;
	}
	//PersistTextFile(WEATHER_STATION, UserList);
	//PersistXMLFile(USERS_XML, UserList);
	// PersistBinaryFile(SENSORDATA_BIN, sAmbienteDB);
	SqlConnection^ conn;
	try {
		/* Paso 1: Se obtiene la oconexión a la BD */
		conn = GetConnection();

		/* Paso 2: Se prepara la sentencia SQL */
		/*
		String^ sqlStr = "UPDATE Robot_Waiter " +
			"SET BRAND='" + robot->Brand + "', " +
			" SPEED=" + robot->Speed + ", " +
			" BATTERY_LEVEL=" + robot->BatteryLevel +
			" WHERE id=" + robot->Id;
		*/
		String^ sqlStr = "dbo.usp_UpdateAmbienteData";
		SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->CommandType = System::Data::CommandType::StoredProcedure;
		cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int);
		cmd->Parameters->Add("@TEMP", System::Data::SqlDbType::Int);
		cmd->Parameters->Add("@UNIDADTEMP", System::Data::SqlDbType::VarChar, 200);
		cmd->Parameters->Add("@HUM", System::Data::SqlDbType::Int);
		cmd->Parameters->Add("@CONCCO", System::Data::SqlDbType::Int);
		cmd->Parameters->Add("@CALAIRE", System::Data::SqlDbType::Int);
		cmd->Parameters->Add("@UBIGEO", System::Data::SqlDbType::VarChar, 200);
		cmd->Parameters->Add("@TMED", System::Data::SqlDbType::VarChar, 200);
		cmd->Parameters->Add("@FEMED", System::Data::SqlDbType::VarChar, 200);
		cmd->Prepare();
		cmd->Parameters["@ID"]->Value = sensorData->IdMedicion;
		cmd->Parameters["@TEMP"]->Value = dynamic_cast<SensorTemperaturaHumedad^>(sensorData->DataBase[0])->Temperatura;
		cmd->Parameters["@UNIDADTEMP"]->Value = dynamic_cast<SensorTemperaturaHumedad^>(sensorData->DataBase[0])->UnidadTemp;
		cmd->Parameters["@HUM"]->Value = dynamic_cast<SensorTemperaturaHumedad^>(sensorData->DataBase[0])->Humedad;
		cmd->Parameters["@CONCCO"]->Value = dynamic_cast<SensorCO^>(sensorData->DataBase[1])->NivelCO;
		cmd->Parameters["@CALAIRE"]->Value = dynamic_cast<SensorCalidadAire^>(sensorData->DataBase[2])->CalidadAire;
		cmd->Parameters["@UBIGEO"]->Value = sensorData->UbicacionGeografica;
		cmd->Parameters["@TMED"]->Value = sensorData->TiempoMedicion;
		cmd->Parameters["@FEMED"]->Value = sensorData->FechaMedicion;

		/* Paso 3: Se ejecuta la sentencia SQL */
		cmd->ExecuteNonQuery();
	}
	catch (Exception^ ex) {
	}
	finally {
		/* Paso 4: Se cierra la conexión */
		if (conn != nullptr) conn->Close();
	}


}

void WeatherStationPersistance::Persistance::DeleteAmbienteData(int IdMedicion) {
	/*
	for (int i = 0; i < sAmbienteDB->Count; i++) {
		if (sAmbienteDB[i]->IdMedicion == IdMedicion)
			sAmbienteDB->RemoveAt(i);
	}
	*/
	//PersistTextFile(WEATHER_STATION, UserList);
	//PersistXMLFile(USERS_XML, UserList);
	// PersistBinaryFile(SENSORDATA_BIN, sAmbienteDB);

	SqlConnection^ conn;

	try {
		/* Paso 1: Se obtiene la oconexión a la BD */
		conn = GetConnection();

		/* Paso 2: Se prepara la sentencia SQL */
		/*
		String^ sqlStr = "DELETE FROM Robot_Waiter " +
			" WHERE id=" + robotId;
		*/
		String^ sqlStr = "dbo.usp_DeleteAmbienteData";
		SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->CommandType = System::Data::CommandType::StoredProcedure;
		cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int);
		cmd->Prepare();
		cmd->Parameters["@ID"]->Value = IdMedicion;

		/* Paso 3: Se ejecuta la sentencia SQL */
		cmd->ExecuteNonQuery();
	}
	catch (Exception^ ex) {

	}
	finally {
		/* Paso 4: Se cierra la conexión */
		if (conn != nullptr) conn->Close();
	}

	
}


