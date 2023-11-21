#pragma once

using namespace System;
using namespace System;
using namespace Model;
using namespace System::Collections::Generic;
using namespace System::Data::SqlClient;

namespace WeatherStationPersistance {
	public ref class Persistance
	{
	private:
		static List<User^>^ UserList = gcnew List<User^>();
		static Ajustes^ AjustesList = gcnew Ajustes();
		static List<Membresia^>^ MembresiaList = gcnew List<Membresia^>();;
		static List<SensorCalidadAire^>^ sCalidadAire = gcnew List<SensorCalidadAire^>();
		static List<SensorCO^>^ sConcentracionCOList = gcnew List<SensorCO^>();
		static List<SensorTemperaturaHumedad^>^ sTempHumList = gcnew List<SensorTemperaturaHumedad^>();
		static List<Ambiente^>^ sAmbienteDB = gcnew List<Ambiente^>();
		static List<SensorCalidadAire^>^ sCalidadAireList = gcnew List<SensorCalidadAire^>();
		static List<Pregunta^>^ PreguntasList = gcnew List<Pregunta^>();

	public:

		static List<AlertaMeteorologica^>^ WeatherWarningList = gcnew List<AlertaMeteorologica^>();
		static List<AlertaError^>^ ErrorWarningList = gcnew List<AlertaError^>();

	public:	

		//FilesConstants
		//Users
		static String^ WEATHER_STATION = "users_weather.txt";
		static String^ USERS_XML = "users_data.xml";
		static String^ USERS_BIN = "users_data.bin";

		static String^ AJUSTES_FILE = "ajustes_weather.txt";

		static String^ MEMBRESIA_FILE = "membresia_weather.txt";


		static String^ TEMP_HUM_FILE = "temp_hum_data.txt";
		static String^ TEMP_HUM_XML = "temp_hum_data.xml";
		static String^ TEMP_HUM_BIN = "temp_hum_data.bin";

		static String^ CO_FILE = "co_data.txt";
		static String^ CO_XML = "co_data.xml";
		static String^ CO_BIN = "co_data.bin";

		static String^ SENSORDATA_BIN = "SensorData.bin";

		static String^ CALIDAD_AIRE_FILE = "calidad_aire_dataa.txt";
		static String^ CALIDAD_AIRE_XML = "calidad_aire_dataa.xml";
		static String^ CALIDAD_AIRE_BIN = "calidad_aire_dataa.bin";

		
    
		//WeatherWarning
		static String^ WEATHER_WARNING_FILE = "weather_warning_data.txt";
		static String^ WEATHER_WARNING_XML = "weather_warning_data.xml";
		static String^ WEATHER_WARNING_BIN = "weather_warning_data.bin";
		//ErrorWarning
		static String^ ERROR_WARNING_FILE = "error_warning_data.txt";
		static String^ ERROR_WARNING_XML = "error_warning_data.xml";
		static String^ ERROR_WARNING_BIN = "error_warning_data.bin";


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

		//Preguntas Methods
		static void AddPregunta(Pregunta^ Pregunta);
		static List<Pregunta^>^ QueryAllPregunta();
		//static Pregunta^ QueryPreguntabyId(int id);
		//static void UpdatePregunta(Pregunta^ Pregunta);
		//static void DeletePregunta(int PreguntaId);


		/*static void AddMembresia(Membresia^ membresias);
		static List<Membresia^>^ QueryMembresia();
		static Membresia^ QueryMembresiabyId(int id);
		static void UpdateMembresia(Membresia^ membresia);
		static void DeleteMembresia(int membresiaId);*/
		
		static Ajustes^ QueryPrevAjustes();


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


		

		//CalidadAire Methods
		static void AddCalidadAireData(SensorCalidadAire^ sCalidadAire);
		static List<SensorCalidadAire^>^ QueryCalidadAireData();
		static SensorCalidadAire^ QueryCalidadAirebyIds(int IdMedicion, String^ IdSensor);
		static void UpdateCalidadAireData(SensorCalidadAire^ sCalidadAire);
		static void DeleteCalidadAireData(int IdMedicion, String^ IdSensor);
//WeatherWarning Methods
		static void AddWeatherWarning(AlertaMeteorologica^ alertaMeteorologica);
		static List<AlertaMeteorologica^>^ QueryWeatherWarning();
		static AlertaMeteorologica^ QueryWeatherWarningbyId(String^ selectedWeatherWarningId);
		static void DeleteWeatherWarning(String^ WeatherWarningId);
		static void UpdateWeatherWarning(AlertaMeteorologica^ alertaMeteorologica);

		//ErrorWarning Methods
		static void AddErrorWarning(AlertaError^ alertaError);
		static List<AlertaError^>^ QueryErrorWarning();
		static AlertaError^ QueryErrorWarningbyId(String^ selectedErrorWarningId);
		static void DeleteErrorWarning(String^ ErrorWarningId);
		static void UpdateErrorWarning(AlertaError^ alertaError);

		// ConexionSql
		static SqlConnection^ GetConnection();
		static List<Ambiente^>^ LoadAmbientes();
		static List<Pregunta^>^ LoadPreguntas();
		static List<User^>^ LoadUser();

		//Ambiente Methods
		static void AddAmbienteData(Ambiente^ sensordata);
		static List<Ambiente^>^ QueryAmbienteData();
		static Ambiente^ QueryAmbienteDatabyId(int IdMedicion);
		static void DeleteAmbienteData(int IdMedicion);
		static void UpdateAmbienteData(Ambiente^ sensordata);

		//More Ambiente Methods
		static Ambiente^ QueryLastUbiGeoData(String^ ubigeo);


	
	};
}
