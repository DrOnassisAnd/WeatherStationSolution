#pragma once

using namespace System;
using namespace Model;
using namespace System::Collections::Generic;

namespace Controller {
	public ref class Controller
	{
		// TODO: Agregue aquí los métodos de esta clase.
	public:
		static void AddUser(User^);
		static List<User^>^ QueryAllUser();
		static User^ QueryUserbyName(String^ name);
		static User^ QueryUserbyId(int Id);
		static void DeleteUser(int userId);
		static void UpdateUser(User^);

		static void AddAjustes(Ajustes^);
		static Ajustes^ QueryPrevAjustes();

		static void AddMembresia(Membresia^);
		static Membresia^ QueryMembresia();

		static void AddAirQData(SensorCalidadAire^ sCalidadAire);
		static List<SensorCalidadAire^>^ QueryAirQData();

		static void AddTempHumData(SensorTemperaturaHumedad^ sTempHum);
		static List<SensorTemperaturaHumedad^>^ QueryTempHumData();
		static SensorTemperaturaHumedad^ QueryTHbyIds(int IdMedicion, String^ IdSensor);
		static void DeleteTHData(int IdMedicion, String^ IdSensor);
		static void UpdateTHData(SensorTemperaturaHumedad^);

		//concentracionCo Methods
		static void AddCOData(SensorCO^ sConcentracionCO);
		static List<SensorCO^>^ QueryCOData();
		static SensorCO^ QueryCObyIds(int IdMedicion, String^ IdSensor);
		static void UpdateCOData(SensorCO^ sConcentracionCO);
		static void DeleteCOData(int IdMedicion, String^ IdSensor);

		//WeatherWarning
		static void AddWeatherWarning(AlertaMeteorologica^ alertaMeteorologica);
		static List<AlertaMeteorologica^>^ QueryWeatherWarning();
		static void DeleteWeatherWarning(String^ WeatherWarningId);
		static AlertaMeteorologica^ QueryWeatherWarningbyId(String^ selectedWeatherWarningId);
		static void UpdateWeatherWarning(AlertaMeteorologica^ alertaMeteorlogica);

		//ErrorWarning
		static void AddErrorWarning(AlertaError^ alertaError);
		static List<AlertaError^>^ QueryErrorWarning();
		static void DeleteErrorWarning(String^ ErrorWarningId);
		static AlertaError^ QueryErrorWarningbyId(String^ selectedErrorWarningId);
		static void UpdateErrorWarning(AlertaError^ alertaError);
	};
}