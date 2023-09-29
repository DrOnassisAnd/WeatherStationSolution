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
		static List<SensorCO^>^ sConcentracionCO = gcnew List<SensorCO^>();
		static List<SensorTemperaturaHumedad^>^ sTempHum = gcnew List<SensorTemperaturaHumedad^>();


	public:	
		static String^ WEATHER_STATION = "users_weather.txt";
		static String^ AJUSTES_FILE = "ajustes_weather.txt";
		static String^ MEMBRESIA_FILE = "membresia_weather.txt";
		static String^ CALIDAD_AIRE_FILE = "aire_data.txt";
		static String^ CO_FILE = "co_data.txt";
		static String^ TEMP_HUM_FILE = "temp_hum_data.txt";

		static void PersistTextFile(String^, Object^);
		static Object^ LoadTextFile(String^);
		
		static void AddUser(User^ User);
		static void AddAjustes(Ajustes^ ajustes);
		static void AddMembresia(Membresia^ membresias);
		static void AddAirQData(SensorCalidadAire^ sCalidadAire);
		static void AddCOData(SensorCO^ sConcentracionCO);
		static void AddTempHumData(SensorTemperaturaHumedad^ sTempHum);


		static List<User^>^ QueryAllUser();
		static List<SensorCalidadAire^>^ QueryAirQData();
		static List<SensorCO^>^ QueryCOData();
		static List<SensorTemperaturaHumedad^>^ QueryTempHumData();
		static Ajustes^ QueryPrevAjustes();
		static Membresia^ QueryMembresia();

		static User^ QueryUserbyName(String^ name);


	};
}
