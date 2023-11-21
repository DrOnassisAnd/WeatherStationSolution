#pragma once

namespace WeatherStationView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Model;

	/// <summary>
	/// Resumen de StatisticsForm
	/// </summary>
	public ref class StatisticsForm12 : public System::Windows::Forms::Form
	{
	public:
		StatisticsForm12(void)
		{

			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->SelectedStart;
			this->SelectedEnd;

		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~StatisticsForm12()
		{
			if (components)
			{
				delete components;
			}
		}

	private: DateTime SelectedStart = DateTime::Now;
	private: DateTime SelectedEnd = DateTime::Now;

	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chTemperature;
	private: System::Windows::Forms::TextBox^ txtStart;
	private: System::Windows::Forms::TextBox^ txtEnd;


	private: System::Windows::Forms::Label^ lblStart;
	private: System::Windows::Forms::Label^ lblEnd;
	private: System::Windows::Forms::Button^ btnShow;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chHumidity;

	private: System::Windows::Forms::Label^ lblHumity;
	private: System::Windows::Forms::Label^ lblTemperature;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chAirQuality;

	private: System::Windows::Forms::Label^ lblAirQuality;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chCO;
	private: System::Windows::Forms::Label^ lblCO;
	private: System::Windows::Forms::DateTimePicker^ dtpStart;
	private: System::Windows::Forms::DateTimePicker^ dtpEnd;








	protected:

	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea9 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend9 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series9 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea10 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend10 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series10 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea11 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend11 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series11 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea12 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend12 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series12 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chTemperature = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->txtStart = (gcnew System::Windows::Forms::TextBox());
			this->txtEnd = (gcnew System::Windows::Forms::TextBox());
			this->lblStart = (gcnew System::Windows::Forms::Label());
			this->lblEnd = (gcnew System::Windows::Forms::Label());
			this->btnShow = (gcnew System::Windows::Forms::Button());
			this->chHumidity = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->lblHumity = (gcnew System::Windows::Forms::Label());
			this->lblTemperature = (gcnew System::Windows::Forms::Label());
			this->chAirQuality = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->lblAirQuality = (gcnew System::Windows::Forms::Label());
			this->chCO = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->lblCO = (gcnew System::Windows::Forms::Label());
			this->dtpStart = (gcnew System::Windows::Forms::DateTimePicker());
			this->dtpEnd = (gcnew System::Windows::Forms::DateTimePicker());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chTemperature))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chHumidity))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chAirQuality))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chCO))->BeginInit();
			this->SuspendLayout();
			// 
			// chTemperature
			// 
			chartArea9->Name = L"ChartArea1";
			this->chTemperature->ChartAreas->Add(chartArea9);
			legend9->Name = L"Legend1";
			this->chTemperature->Legends->Add(legend9);
			this->chTemperature->Location = System::Drawing::Point(12, 20);
			this->chTemperature->Name = L"chTemperature";
			series9->ChartArea = L"ChartArea1";
			series9->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series9->Legend = L"Legend1";
			series9->Name = L"Temperature";
			this->chTemperature->Series->Add(series9);
			this->chTemperature->Size = System::Drawing::Size(241, 180);
			this->chTemperature->TabIndex = 0;
			this->chTemperature->Text = L"chart1";
			// 
			// txtStart
			// 
			this->txtStart->Location = System::Drawing::Point(774, 95);
			this->txtStart->Name = L"txtStart";
			this->txtStart->Size = System::Drawing::Size(33, 20);
			this->txtStart->TabIndex = 2;
			// 
			// txtEnd
			// 
			this->txtEnd->Location = System::Drawing::Point(774, 193);
			this->txtEnd->Name = L"txtEnd";
			this->txtEnd->Size = System::Drawing::Size(33, 20);
			this->txtEnd->TabIndex = 3;
			// 
			// lblStart
			// 
			this->lblStart->AutoSize = true;
			this->lblStart->Location = System::Drawing::Point(565, 71);
			this->lblStart->Name = L"lblStart";
			this->lblStart->Size = System::Drawing::Size(29, 13);
			this->lblStart->TabIndex = 4;
			this->lblStart->Text = L"Start";
			// 
			// lblEnd
			// 
			this->lblEnd->AutoSize = true;
			this->lblEnd->Location = System::Drawing::Point(568, 153);
			this->lblEnd->Name = L"lblEnd";
			this->lblEnd->Size = System::Drawing::Size(26, 13);
			this->lblEnd->TabIndex = 5;
			this->lblEnd->Text = L"End";
			// 
			// btnShow
			// 
			this->btnShow->Location = System::Drawing::Point(568, 240);
			this->btnShow->Name = L"btnShow";
			this->btnShow->Size = System::Drawing::Size(75, 23);
			this->btnShow->TabIndex = 6;
			this->btnShow->Text = L"Show";
			this->btnShow->UseVisualStyleBackColor = true;
			this->btnShow->Click += gcnew System::EventHandler(this, &StatisticsForm12::btnShow_Click);
			// 
			// chHumidity
			// 
			chartArea10->Name = L"ChartArea1";
			this->chHumidity->ChartAreas->Add(chartArea10);
			legend10->Name = L"Legend1";
			this->chHumidity->Legends->Add(legend10);
			this->chHumidity->Location = System::Drawing::Point(12, 231);
			this->chHumidity->Name = L"chHumidity";
			series10->ChartArea = L"ChartArea1";
			series10->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series10->Legend = L"Legend1";
			series10->Name = L"Humidity";
			this->chHumidity->Series->Add(series10);
			this->chHumidity->Size = System::Drawing::Size(241, 180);
			this->chHumidity->TabIndex = 7;
			this->chHumidity->Text = L"chart1";
			// 
			// lblHumity
			// 
			this->lblHumity->AutoSize = true;
			this->lblHumity->Location = System::Drawing::Point(13, 212);
			this->lblHumity->Name = L"lblHumity";
			this->lblHumity->Size = System::Drawing::Size(39, 13);
			this->lblHumity->TabIndex = 8;
			this->lblHumity->Text = L"Humity";
			// 
			// lblTemperature
			// 
			this->lblTemperature->AutoSize = true;
			this->lblTemperature->Location = System::Drawing::Point(16, 4);
			this->lblTemperature->Name = L"lblTemperature";
			this->lblTemperature->Size = System::Drawing::Size(67, 13);
			this->lblTemperature->TabIndex = 9;
			this->lblTemperature->Text = L"Temperature";
			// 
			// chAirQuality
			// 
			chartArea11->Name = L"ChartArea1";
			this->chAirQuality->ChartAreas->Add(chartArea11);
			legend11->Name = L"Legend1";
			this->chAirQuality->Legends->Add(legend11);
			this->chAirQuality->Location = System::Drawing::Point(296, 20);
			this->chAirQuality->Name = L"chAirQuality";
			series11->ChartArea = L"ChartArea1";
			series11->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series11->Legend = L"Legend1";
			series11->Name = L"AirQuality";
			this->chAirQuality->Series->Add(series11);
			this->chAirQuality->Size = System::Drawing::Size(241, 180);
			this->chAirQuality->TabIndex = 10;
			this->chAirQuality->Text = L"chart1";
			// 
			// lblAirQuality
			// 
			this->lblAirQuality->AutoSize = true;
			this->lblAirQuality->Location = System::Drawing::Point(293, 4);
			this->lblAirQuality->Name = L"lblAirQuality";
			this->lblAirQuality->Size = System::Drawing::Size(60, 13);
			this->lblAirQuality->TabIndex = 11;
			this->lblAirQuality->Text = L"CalidadAire";
			// 
			// chCO
			// 
			chartArea12->Name = L"ChartArea1";
			this->chCO->ChartAreas->Add(chartArea12);
			legend12->Name = L"Legend1";
			this->chCO->Legends->Add(legend12);
			this->chCO->Location = System::Drawing::Point(296, 231);
			this->chCO->Name = L"chCO";
			series12->ChartArea = L"ChartArea1";
			series12->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series12->Legend = L"Legend1";
			series12->Name = L"CO";
			this->chCO->Series->Add(series12);
			this->chCO->Size = System::Drawing::Size(241, 179);
			this->chCO->TabIndex = 12;
			this->chCO->Text = L"chart1";
			// 
			// lblCO
			// 
			this->lblCO->AutoSize = true;
			this->lblCO->Location = System::Drawing::Point(293, 212);
			this->lblCO->Name = L"lblCO";
			this->lblCO->Size = System::Drawing::Size(22, 13);
			this->lblCO->TabIndex = 13;
			this->lblCO->Text = L"CO";
			// 
			// dtpStart
			// 
			this->dtpStart->Location = System::Drawing::Point(568, 95);
			this->dtpStart->Name = L"dtpStart";
			this->dtpStart->Size = System::Drawing::Size(200, 20);
			this->dtpStart->TabIndex = 14;
			this->dtpStart->ValueChanged += gcnew System::EventHandler(this, &StatisticsForm12::dtpStart_ValueChanged);
			// 
			// dtpEnd
			// 
			this->dtpEnd->Location = System::Drawing::Point(568, 193);
			this->dtpEnd->Name = L"dtpEnd";
			this->dtpEnd->Size = System::Drawing::Size(200, 20);
			this->dtpEnd->TabIndex = 15;
			this->dtpEnd->ValueChanged += gcnew System::EventHandler(this, &StatisticsForm12::dtpEnd_ValueChanged);
			// 
			// StatisticsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(831, 423);
			this->Controls->Add(this->dtpEnd);
			this->Controls->Add(this->dtpStart);
			this->Controls->Add(this->lblCO);
			this->Controls->Add(this->chCO);
			this->Controls->Add(this->lblAirQuality);
			this->Controls->Add(this->chAirQuality);
			this->Controls->Add(this->lblTemperature);
			this->Controls->Add(this->lblHumity);
			this->Controls->Add(this->chHumidity);
			this->Controls->Add(this->btnShow);
			this->Controls->Add(this->lblEnd);
			this->Controls->Add(this->lblStart);
			this->Controls->Add(this->txtEnd);
			this->Controls->Add(this->txtStart);
			this->Controls->Add(this->chTemperature);
			this->Name = L"StatisticsForm12";
			this->Text = L"StatisticsForm12";
			this->Load += gcnew System::EventHandler(this, &StatisticsForm12::StatisticsForm12_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chTemperature))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chHumidity))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chAirQuality))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chCO))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void StatisticsForm12_Load(System::Object^ sender, System::EventArgs^ e) {


	}
	private: System::Void btnShow_Click(System::Object^ sender, System::EventArgs^ e) {

		int StartYear = SelectedStart.Year;
		int StartMonth = SelectedStart.Month;
		int StartDay = SelectedStart.Day;

		int EndYear = SelectedEnd.Year;
		int EndMonth = SelectedEnd.Month;
		int EndDay = SelectedEnd.Day;

		//Definimos la variable
		array<String^>^ Locations	 = gcnew array<String^>(4);
		Locations[0] = "FACI";
		Locations[1] = "CIA";
		Locations[2] = "BIBLIOTECA CENTRAL";
		Locations[3] = "TINKUY";


		//Limpiamos los valores anteriores
		chTemperature->Series["Temperature"]->Points->Clear();
		chHumidity->Series["Humidity"]->Points->Clear();
		chAirQuality->Series["AirQuality"]->Points->Clear();
		chCO->Series["CO"]->Points->Clear();


		//Colocamos hora de inicio y final
		String^ Start = txtStart->Text;
		String^ End = txtEnd->Text;

		int StartHour = Int32::Parse(Start);
		int EndHour = Int32::Parse(End);

		//Verificamos si se sensó a esa hora
		array<double>^ InitialTemp = { 0,0,0,0 };
		array<double>^ MeanTemp = { 0,0,0,0 };
		array<double>^ CountTemp = { 0,0,0,0 };

		//Verificamos si se sensó a esa hora
		array<int>^ InitialHum = { 0,0,0,0 };
		array<double>^ MeanHum = { 0,0,0,0 };
		array<double>^ CountHum = { 0,0,0,0 };

		//Verificamos si se sensó a esa hora
		array<int>^ InitialAir = { 0,0,0,0 };
		array<double>^ MeanAir = { 0,0,0,0 };
		array<double>^ CountAir = { 0,0,0,0 };

		//Verificamos si se sensó a esa hora
		array<int>^ InitialCO = { 0,0,0,0 };
		array<double>^ MeanCO = { 0,0,0,0 };
		array<double>^ CountCO = { 0,0,0,0 };


		//Extraemos las mediciones del ambiente
		List<Ambiente^>^ Measurements = Controller::Controller::QueryAmbienteData();

		for (int i = 0; i < Measurements->Count; i++) {

			Ambiente^ Location = Measurements[i];
			//Obtenemos las fechas de los datoss medidos
			String^ strYear = (Location->FechaMedicion)->Substring(0, 4);
			String^ strMonth = (Location->FechaMedicion)->Substring(5, 2);
			String^ strDay = (Location->FechaMedicion)->Substring(8, 2);
			String^ StrHour = (Location->TiempoMedicion)->Substring(0, 2);
			//Parseamos a entero las fechas
			int SelectedYear = Int32::Parse(strYear);
			int SelectedMonth = Int32::Parse(strMonth);
			int SelectedDay = Int32::Parse(strDay);
			int SelectedHour = Int32::Parse(StrHour);
			//Establecemos las codiciones temporales
			bool ValidYear = (StartYear <= SelectedYear) && (SelectedYear <= EndYear);
			bool ValidMonth = (StartMonth <= SelectedMonth) && (SelectedMonth <= EndMonth);
			bool ValidDay = (StartDay <= SelectedDay) && (SelectedDay <= EndDay);
			bool ValidHour = (StartHour <= SelectedHour) && (SelectedHour <= EndHour);

			for (int j = 1; j <= 4; j++) {
				if (ValidYear && ValidMonth && ValidDay && ValidHour && (Locations[j-1]==Location->UbicacionGeografica)) {
					CountTemp[j - 1]++;
					InitialTemp[j - 1] += dynamic_cast<SensorTemperaturaHumedad^>(Location->DataBase[0])->Temperatura;
	
					CountHum[j - 1]++;
					InitialHum[j - 1] += dynamic_cast<SensorTemperaturaHumedad^>(Location->DataBase[0])->Humedad;

					CountCO[j - 1]++;
					InitialCO[j - 1] += dynamic_cast<SensorCO^>(Location->DataBase[1])->NivelCO;

					CountAir[j - 1]++;
					InitialAir[j - 1] += dynamic_cast<SensorCalidadAire^>(Location->DataBase[2])->CalidadAire;
				}
			}
		}

		//Obtenemos temperatura promedio por hora
		for (int k = 1; k <= 4; k++) {
			if (CountTemp[k - 1] != 0) {
				MeanTemp[k - 1] = InitialTemp[k - 1] / CountTemp[k - 1];
				MeanTemp[k - 1] = Math::Floor(MeanTemp[k - 1] * 10) / 10;

			}
			else {
				MeanTemp[k - 1] = 0;
			}
		}

		//Obtenemos humedad promedio por hora
		for (int k = 1; k <= 4; k++) {
			if (CountHum[k - 1] != 0) {
				MeanHum[k - 1] = InitialHum[k - 1] / CountHum[k - 1];
				MeanHum[k - 1] = Math::Floor(MeanHum[k - 1] * 10) / 10;

			}
			else {
				MeanHum[k - 1] = 0;
			}
		}

		//Obtenemos calidad de aire promedio por hora
		for (int k = 1; k <= 4; k++) {
			if (CountAir[k - 1] != 0) {
				MeanAir[k - 1] = InitialAir[k - 1] / CountAir[k - 1];
				MeanAir[k - 1] = Math::Floor(MeanAir[k - 1] * 10) / 10;

			}
			else {
				MeanAir[k - 1] = 0;
			}
		}

		//Obtenemos calidad de CO promedio por hora
		for (int k = 1; k <= 4; k++) {
			if (CountCO[k - 1] != 0) {
				MeanCO[k - 1] = InitialCO[k - 1] / CountCO[k - 1];
				MeanCO[k - 1] = Math::Floor(MeanCO[k - 1] * 10) / 10;

			}
			else {
				MeanCO[k - 1] = 0;
			}
		}

		//Mostramos diagrama de Pie de temperatura
		for (int l = 1; l <= 4; l++) {
			chTemperature->Series["Temperature"]->Points->Add(MeanTemp[l - 1]); // Coloco nombre a la serie	
			chTemperature->Series["Temperature"]->Points[l - 1]->LegendText = "Sensor " + Convert::ToString(l); // Coloco nombre a la serie
			chTemperature->Series["Temperature"]->Points[l - 1]->Label = Convert::ToString(MeanTemp[l - 1]);
		}

		//Mostramos diagrama de Pie de humedad
		for (int l = 1; l <= 4; l++) {
			chHumidity->Series["Humidity"]->Points->Add(MeanHum[l - 1]); // Coloco nombre a la serie	
			chHumidity->Series["Humidity"]->Points[l - 1]->LegendText = "Sensor " + Convert::ToString(l); // Coloco nombre a la serie
			chHumidity->Series["Humidity"]->Points[l - 1]->Label = Convert::ToString(MeanHum[l - 1]);
		}

		//Mostramos diagrama de Pie de calidad de aire
		for (int l = 1; l <= 4; l++) {
			chAirQuality->Series["AirQuality"]->Points->Add(MeanAir[l - 1]); // Coloco nombre a la serie	
			chAirQuality->Series["AirQuality"]->Points[l - 1]->LegendText = "Sensor " + Convert::ToString(l); // Coloco nombre a la serie
			chAirQuality->Series["AirQuality"]->Points[l - 1]->Label = Convert::ToString(MeanAir[l - 1]);
		}

		//Mostramos diagrama de CO de calidad de aire
		for (int l = 1; l <= 4; l++) {
			chCO->Series["CO"]->Points->Add(MeanCO[l - 1]); // Coloco nombre a la serie	
			chCO->Series["CO"]->Points[l - 1]->LegendText = "Sensor " + Convert::ToString(l); // Coloco nombre a la serie
			chCO->Series["CO"]->Points[l - 1]->Label = Convert::ToString(MeanCO[l - 1]);
		}
	}
	private: System::Void dtpStart_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		SelectedStart = dtpStart->Value;
	}
	private: System::Void dtpEnd_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		SelectedEnd = dtpEnd->Value;
	}
	};
}
