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

		static void AddCOData(SensorCO^ sConcentracionCO);
		static List<SensorCO^>^ QueryCOData();

		static void AddTempHumData(SensorTemperaturaHumedad^ sTempHum);
		static List<SensorTemperaturaHumedad^>^ QueryTempHumData();

	};
}