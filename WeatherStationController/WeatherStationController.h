#pragma once

using namespace System;
using namespace Model;
using namespace System::Collections::Generic;
using namespace WeatherStationPersistance;
using namespace System::IO::Ports;

namespace Controller {
	public ref class Controller
	{
	private:
		static SerialPort^ ArduinoPort;
		// TODO: Agregue aquí los métodos de esta clase.
	public:

		//Usuario
		static void AddUser(User^);
		static List<User^>^ QueryAllUser();
		static User^ QueryUserbyName(String^ name);
		static User^ QueryUserbyId(int Id);
		static void DeleteUser(int userId);
		static void UpdateUser(User^);
		//Agreguen Puntos PLs


		//Trivia
		static List<Pregunta^>^ QueryAllPregunta();

		//Tarjetas
		static List<Tarjetas^>^ QueryTarjetasData();
		
		static Tarjetas^ QueryTarjetaByNumeroCuenta(int NumeroCuenta);
		static Tarjetas^ QueryTarjetaById(int idTarjeta);
		static void AddTarjetas(Tarjetas^ tarjeta);
		static void UpdateTarjetas(Tarjetas^ tarjeta);
		static void DeleteTarjetas(int id);

		//PreguntasporDIa
		static List<List<int>^>^ QueryPreguntasporDia();
		static List<int>^ QueryPreguntasporDiabyId(int idusuario);
		static void AddPreguntasporDia(List<int>^ pregunta);
		static void AddPregunta(Pregunta^);
		static Pregunta^ QueryPreguntabyId(int Id);
		static void DeletePregunta(int preguntaId);
		static void UpdatePregunta(Pregunta^);
		static void UpdatePreguntasporDia(List<int>^ pregunta);
		
		//static Pregunta^ QueryPreguntabyId(int Id);
		//More PreguntasporDia Methods
		static List<int>^ Convertir6a5(List<int>^ preguntas);
		static void AgregarValor(List<int>^ preguntas, int valor);
		static int ListaLlena(List<int>^ preguntas);
		static int NumeroPreguntas(List<int>^ preguntas);
		static int NumeroAleatorioRestante(int Maxcap, List<int>^ preguntas);
		static int PerteneceaLista(List<int>^ preguntas, int num);

		//Ajustes
		static void AddAjustes(Ajustes^);
		static Ajustes^ QueryPrevAjustes();

		/*static void AddMembresia(Membresia^);
		static List<Membresia^>^ QueryMembresia();
		static Membresia^ QueryMembresiabyId(int Id);
		static void DeleteMembresia(int membresiaId);
		static void UpdateMembresia(Membresia^);*/


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




		//CalidadAire
		static void AddCalidadAireData(SensorCalidadAire^ sCalidadAire);
		static List<SensorCalidadAire^>^ QueryCalidadAireData();
		static SensorCalidadAire^ QueryCalidadAirebyIds(int IdMedicion, String^ IdSensor);
		static void UpdateCalidadAireData(SensorCalidadAire^ sCalidadAire);
		static void DeleteCalidadAireData(int IdMedicion, String^ IdSensor);


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

		//Serial
		static void OpenPort();
		static void ClosePort();
		static String^ SendSensorsData();

		//Ambiente
		static void AddAmbienteData(Ambiente^ sensordata);
		static List<Ambiente^>^ QueryAmbienteData();
		static Ambiente^ QueryAmbienteDatabyId(int IdMedicion);
		static void DeleteAmbienteData(int IdMedicion);
		static void UpdateAmbienteData(Ambiente^ sensordata);
		static Ambiente^ QueryLastUbiGeoData(String^ ubigeo);

		//TableMethods
		static List<int>^ GetTempfromAmbiente(List<Ambiente^>^ sensordata);
		static List<int>^ GetHumfromAmbiente(List<Ambiente^>^ sensordata);
		static List<int>^ GetCOfromAmbiente(List<Ambiente^>^ sensordata);
		static List<int>^ GetAirQfromAmbiente(List<Ambiente^>^ sensordata);
		static List<String^>^ GetDateTimefromAmbiente(List<Ambiente^>^ sensordata);
		static List<String^>^ GetOnlyHora(List<Ambiente^>^ sensordata);
		static List<String^>^ GetOnlyFecha(List<Ambiente^>^ sensordata);

		static List<int>^ GetIndexfromAmbiente(List<Ambiente^>^ sensordata, String^ UbiGeo);
		static void SendFlag();
	};
}