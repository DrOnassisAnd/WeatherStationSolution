#pragma once

using namespace System;
using namespace System;
using namespace Model;
using namespace System::Collections::Generic;

namespace WeatherStationPersistance {
	public ref class Persistance
	{
	private:
		static List<User^>^ UserList = gcnew List<User^>();
		static Ajustes^ AjustesList = gcnew Ajustes();
		static Membresia^ MembresiaList = gcnew Membresia();
		static List<SensorCalidadAire^>^ sCalidadAire = gcnew List<SensorCalidadAire^>();
		static List<SensorCO^>^ sConcentracionCOList = gcnew List<SensorCO^>();
		static List<SensorTemperaturaHumedad^>^ sTempHumList = gcnew List<SensorTemperaturaHumedad^>();

	public:	
		//FilesConstants
		//Users
		static String^ WEATHER_STATION = "users_weather.txt";
		static String^ USERS_XML = "users_data.xml";
		static String^ USERS_BIN = "users_data.bin";

		static String^ AJUSTES_FILE = "ajustes_weather.txt";

		static String^ MEMBRESIA_FILE = "membresia_weather.txt";

		static String^ CALIDAD_AIRE_FILE = "aire_data.txt";

		static String^ TEMP_HUM_FILE = "temp_hum_data.txt";
		static String^ TEMP_HUM_XML = "temp_hum_data.xml";
		static String^ TEMP_HUM_BIN = "temp_hum_data.bin";

		static String^ CO_FILE = "co_data.txt";
		static String^ CO_XML = "co_data.xml";
		static String^ CO_BIN = "co_data.bin";


		//FileHandler
		static void PersistTextFile(String^, Object^);
		static Object^ LoadTextFile(String^);
		static void PersistXMLFile(String^ fileName, Object^ persistObject);
		static Object^ LoadXMLFile(String^ fileName);
		static void PersistBinaryFile(String^ fileName, Object^ persistObject);
		static Object^ LoadBinaryFile(String^ fileName);
		
		//User Methods
		static void AddUser(User^ User);
		static List<User^>^ QueryAllUser();
		static User^ QueryUserbyName(String^ name);
		static User^ QueryUserbyId(int id);
		static void UpdateUser(User^ user);
		static void DeleteUser(int userId);

		static void AddAjustes(Ajustes^ ajustes);
		static void AddMembresia(Membresia^ membresias);
		static void AddAirQData(SensorCalidadAire^ sCalidadAire);
		
		static List<SensorCalidadAire^>^ QueryAirQData();
		static Ajustes^ QueryPrevAjustes();
		static Membresia^ QueryMembresia();

		//TempHum Methods
		static void AddTempHumData(SensorTemperaturaHumedad^ sTempHum);
		static List<SensorTemperaturaHumedad^>^ QueryTempHumData();
		static SensorTemperaturaHumedad^ QueryTHbyIds (int IdMedicion, String^ IdSensor);
		static void UpdateTHData(SensorTemperaturaHumedad^ sTempHum);
		static void DeleteTHData(int IdMedicion, String^ IdSensor);
		
		//CO Methods
		static void AddCOData(SensorCO^ sConcentracionCO);
		static List<SensorCO^>^ QueryCOData();
		static SensorCO^ QueryCObyIds(int IdMedicion, String^ IdSensor);
		static void UpdateCOData(SensorCO^ sConcentracionCO);
		static void DeleteCOData(int IdMedicion, String^ IdSensor);


		


	};
}
