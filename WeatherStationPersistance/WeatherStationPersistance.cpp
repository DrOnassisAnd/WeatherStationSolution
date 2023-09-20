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
			writer->WriteLine(r->Name + ", " + r->Password + ", " + r->Email + ", " + r->Id);
		}
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
		if (reader != nullptr) reader->Close();
		if (file != nullptr) file->Close();
	}
	return result;
}
void WeatherStationPersistance::Persistance::AddUser(User^user) {
	UserList->Add(user);
	PersistTextFile(WEATHER_STATION, UserList);
}

List<User^>^ WeatherStationPersistance::Persistance::QueryAllUser() {
	UserList = (List<User^>^)LoadTextFile(WEATHER_STATION);
	return UserList;
}