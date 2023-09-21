#include "pch.h"
#include "WeatherStationPersistance.h"
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
			writer->WriteLine(r->Name + ", " + r->Password + ", " + r->Email + ", " + r->Id + ", " + r->Membresia);
		}
	}
	else if (persistObject->GetType() == Ajustes::typeid) {
		Ajustes^ ajustes = (Ajustes^)persistObject;
		writer->WriteLine(ajustes->UnidadTemp + ", " + ajustes->FormatoHoras + ", " + ajustes->FormatoFecha);
	}
	else if (persistObject->GetType() == Membresia::typeid) {
		Membresia^ membresia = (Membresia^)persistObject;
		writer->WriteLine(membresia->tipoMembresia + ", " + membresia->nombreMiembro + ", " + membresia->fechaInicio + ", " + membresia-> fechaFinalizacion + ", " + membresia->Metododepago);
	}
	if (writer != nullptr) writer->Close();
	if (file != nullptr) file->Close();
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

		if (reader != nullptr) reader->Close();
		if (file != nullptr) file->Close();
	}
	return result;
}
void WeatherStationPersistance::Persistance::AddUser(User^user) {
	UserList->Add(user);
	PersistTextFile(WEATHER_STATION, UserList);
}

void WeatherStationPersistance::Persistance::AddAjustes(Ajustes^ ajustes) {
	AjustesList = (Ajustes^)ajustes;
	PersistTextFile(AJUSTES_FILE, AjustesList);
}

void WeatherStationPersistance::Persistance::AddMembresia(Membresia^ membresias) {
	MembresiaList = (Membresia^)membresias;
	PersistTextFile(MEMBRESIA_FILE, MembresiaList);
}

List<User^>^ WeatherStationPersistance::Persistance::QueryAllUser() {
	UserList = (List<User^>^)LoadTextFile(WEATHER_STATION);
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


	throw gcnew System::NotImplementedException();
	// TODO: Insertar una instrucción "return" aquí
}
