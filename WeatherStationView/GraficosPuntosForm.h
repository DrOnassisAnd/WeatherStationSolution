#pragma once

namespace WeatherStationView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace Model;
	/// <summary>
	/// Resumen de GraficosPuntosForm
	/// </summary>
	public ref class GraficosPuntosForm : public System::Windows::Forms::Form
	{
	public:
		GraficosPuntosForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~GraficosPuntosForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	protected:
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart3;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart4;
	private: System::Windows::Forms::ComboBox^ CriterioMedicionBox;



	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ txtmedicion;


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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea4 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->CriterioMedicionBox = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtmedicion = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart4))->BeginInit();
			this->SuspendLayout();
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(29, 69);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series1->Legend = L"Legend1";
			series1->Name = L"CIA";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(474, 300);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			chartArea2->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart2->Legends->Add(legend2);
			this->chart2->Location = System::Drawing::Point(578, 69);
			this->chart2->Name = L"chart2";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series2->Legend = L"Legend1";
			series2->Name = L"FACI";
			this->chart2->Series->Add(series2);
			this->chart2->Size = System::Drawing::Size(538, 300);
			this->chart2->TabIndex = 1;
			this->chart2->Text = L"chart2";
			chartArea3->Name = L"ChartArea1";
			this->chart3->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chart3->Legends->Add(legend3);
			this->chart3->Location = System::Drawing::Point(29, 389);
			this->chart3->Name = L"chart3";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series3->Legend = L"Legend1";
			series3->Name = L"BIBLIOTECA";
			this->chart3->Series->Add(series3);
			this->chart3->Size = System::Drawing::Size(495, 300);
			this->chart3->TabIndex = 2;
			this->chart3->Text = L"chart3";
			chartArea4->Name = L"ChartArea1";
			this->chart4->ChartAreas->Add(chartArea4);
			legend4->Name = L"Legend1";
			this->chart4->Legends->Add(legend4);
			this->chart4->Location = System::Drawing::Point(578, 389);
			this->chart4->Name = L"chart4";
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series4->Legend = L"Legend1";
			series4->Name = L"TINKUY";
			this->chart4->Series->Add(series4);
			this->chart4->Size = System::Drawing::Size(538, 300);
			this->chart4->TabIndex = 3;
			this->chart4->Text = L"chart4";
			this->CriterioMedicionBox->FormattingEnabled = true;
			this->CriterioMedicionBox->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Temperatura", L"Humedad ", L"CalidadAire",
					L"NivelCO"
			});
			this->CriterioMedicionBox->Location = System::Drawing::Point(591, 30);
			this->CriterioMedicionBox->Name = L"CriterioMedicionBox";
			this->CriterioMedicionBox->Size = System::Drawing::Size(121, 24);
			this->CriterioMedicionBox->TabIndex = 5;
			this->CriterioMedicionBox->SelectedIndexChanged += gcnew System::EventHandler(this, &GraficosPuntosForm::CriterioMedicionBox_SelectedIndexChanged);
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(619, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 16);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Medicion";
			this->txtmedicion->AutoSize = true;
			this->txtmedicion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtmedicion->Location = System::Drawing::Point(77, 13);
			this->txtmedicion->Name = L"txtmedicion";
			this->txtmedicion->Size = System::Drawing::Size(64, 25);
			this->txtmedicion->TabIndex = 8;
			this->txtmedicion->Text = L"label3";
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1230, 773);
			this->Controls->Add(this->txtmedicion);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->CriterioMedicionBox);
			this->Controls->Add(this->chart4);
			this->Controls->Add(this->chart3);
			this->Controls->Add(this->chart2);
			this->Controls->Add(this->chart1);
			this->Name = L"GraficosPuntosForm";
			this->Text = L"GraficosPuntosForm";
			this->Load += gcnew System::EventHandler(this, &GraficosPuntosForm::GraficosPuntosForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void GraficosPuntosForm_Load(System::Object^ sender, System::EventArgs^ e) {
		txtmedicion->Text = "Inicio";


		this->CriterioMedicionBox->SelectedIndex = 0;

	}
	private: System::Void CriterioMedicionBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

		/*****  GRAFICOS DE TEMPERATURA     *****/
		if (CriterioMedicionBox->Text == "Temperatura") {
			txtmedicion->Text = "Temperatura";
			List<Ambiente^>^ sensorData = Controller::Controller::QueryAmbienteData();
			for (int i = 0; i < sensorData->Count; i++) {
				if (sensorData[i]->UbicacionGeografica == "CIA") {
					chart1->Series["CIA"]->Points->Add(dynamic_cast<SensorTemperaturaHumedad^>(sensorData[i]->DataBase[0])->Temperatura);
					chart1->Series["CIA"]->Points[i]->AxisLabel = (sensorData[i]->TiempoMedicion);
					//chart1->Series["Temperatura"]->Points[i]->Label = Convert::ToString((dynamic_cast<SensorTemperaturaHumedad^>(Temperatura[i]->DataBase[0])->Temperatura));

				}
				// Esta sirviendo como capturador de excepciones
				else {
					chart1->Series["CIA"]->Points->Add(20);
					chart1->Series["CIA"]->Points[i]->AxisLabel = (sensorData[i]->TiempoMedicion);

				}

			}

			List<Ambiente^>^ sensorDataFACI = Controller::Controller::QueryAmbienteData();
			for (int i = 0; i < sensorDataFACI->Count; i++) {
				if (sensorDataFACI[i]->UbicacionGeografica == "FACI") {
					chart2->Series["FACI"]->Points->Add(dynamic_cast<SensorTemperaturaHumedad^>(sensorDataFACI[i]->DataBase[0])->Temperatura);
					chart2->Series["FACI"]->Points[i]->AxisLabel = (sensorDataFACI[i]->TiempoMedicion);
					//chart1->Series["Temperatura"]->Points[i]->Label = Convert::ToString((dynamic_cast<SensorTemperaturaHumedad^>(Temperatura[i]->DataBase[0])->Temperatura));

				}
				// Esta sirviendo como capturador de excepciones
				else {

					chart2->Series["FACI"]->Points->Add(21);
					chart2->Series["FACI"]->Points[i]->AxisLabel = (sensorDataFACI[i]->TiempoMedicion);


				}

			}

			List<Ambiente^>^ sensorDataBIBLIO = Controller::Controller::QueryAmbienteData();
			for (int i = 0; i < sensorDataBIBLIO->Count; i++) {
				if (sensorDataBIBLIO[i]->UbicacionGeografica == "BIBLIOTECA CENTRAL") {
					chart3->Series["BIBLIOTECA"]->Points->Add(dynamic_cast<SensorTemperaturaHumedad^>(sensorDataBIBLIO[i]->DataBase[0])->Temperatura);
					chart3->Series["BIBLIOTECA"]->Points[i]->AxisLabel = (sensorDataBIBLIO[i]->TiempoMedicion);
					//chart1->Series["Temperatura"]->Points[i]->Label = Convert::ToString((dynamic_cast<SensorTemperaturaHumedad^>(Temperatura[i]->DataBase[0])->Temperatura));

				}
				// Esta sirviendo como capturador de excepciones
				else {

					chart3->Series["BIBLIOTECA"]->Points->Add(18);
					chart3->Series["BIBLIOTECA"]->Points[i]->AxisLabel = (sensorDataBIBLIO[i]->TiempoMedicion);


				}

			}
			List<Ambiente^>^ sensorDataTINKUY = Controller::Controller::QueryAmbienteData();
			for (int i = 0; i < sensorDataTINKUY->Count; i++) {
				if (sensorDataTINKUY[i]->UbicacionGeografica == "TINKUY") {
					chart4->Series["TINKUY"]->Points->Add(dynamic_cast<SensorTemperaturaHumedad^>(sensorDataTINKUY[i]->DataBase[0])->Temperatura);
					chart4->Series["TINKUY"]->Points[i]->AxisLabel = (sensorDataTINKUY[i]->TiempoMedicion);
					//chart1->Series["Temperatura"]->Points[i]->Label = Convert::ToString((dynamic_cast<SensorTemperaturaHumedad^>(Temperatura[i]->DataBase[0])->Temperatura));

				}
				// Esta sirviendo como capturador de excepciones
				else {

					chart4->Series["TINKUY"]->Points->Add(22);
					chart4->Series["TINKUY"]->Points[i]->AxisLabel = (sensorDataTINKUY[i]->TiempoMedicion);


				}

			}



		}

		else if (CriterioMedicionBox->Text == "CalidadAire") {
			txtmedicion->Text = "CalidadAire";
			List<Ambiente^>^ sensorData = Controller::Controller::QueryAmbienteData();
			for (int i = 0; i < sensorData->Count; i++) {
				if (sensorData[i]->UbicacionGeografica == "CIA") {
					chart1->Series["CIA"]->Points->Add(dynamic_cast<SensorCalidadAire^>(sensorData[i]->DataBase[2])->CalidadAire);
					chart1->Series["CIA"]->Points[i]->AxisLabel = (sensorData[i]->TiempoMedicion);
					//chart1->Series["Temperatura"]->Points[i]->Label = Convert::ToString((dynamic_cast<SensorTemperaturaHumedad^>(Temperatura[i]->DataBase[0])->Temperatura));

				}
				// Esta sirviendo como capturador de excepciones
				else {
					chart1->Series["CIA"]->Points->Add(20);
					chart1->Series["CIA"]->Points[i]->AxisLabel = (sensorData[i]->TiempoMedicion);

				}

			}

			List<Ambiente^>^ sensorDataFACI = Controller::Controller::QueryAmbienteData();
			for (int i = 0; i < sensorDataFACI->Count; i++) {
				if (sensorDataFACI[i]->UbicacionGeografica == "FACI") {
					chart2->Series["FACI"]->Points->Add(dynamic_cast<SensorCalidadAire^>(sensorDataFACI[i]->DataBase[2])->CalidadAire);
					chart2->Series["FACI"]->Points[i]->AxisLabel = (sensorDataFACI[i]->TiempoMedicion);
					//chart1->Series["Temperatura"]->Points[i]->Label = Convert::ToString((dynamic_cast<SensorTemperaturaHumedad^>(Temperatura[i]->DataBase[0])->Temperatura));

				}
				// Esta sirviendo como capturador de excepciones
				else {

					chart2->Series["FACI"]->Points->Add(21);
					chart2->Series["FACI"]->Points[i]->AxisLabel = (sensorDataFACI[i]->TiempoMedicion);


				}

			}

			List<Ambiente^>^ sensorDataBIBLIO = Controller::Controller::QueryAmbienteData();
			for (int i = 0; i < sensorDataBIBLIO->Count; i++) {
				if (sensorDataBIBLIO[i]->UbicacionGeografica == "BIBLIOTECA CENTRAL") {
					chart3->Series["BIBLIOTECA"]->Points->Add(dynamic_cast<SensorCalidadAire^>(sensorDataBIBLIO[i]->DataBase[2])->CalidadAire);
					chart3->Series["BIBLIOTECA"]->Points[i]->AxisLabel = (sensorDataBIBLIO[i]->TiempoMedicion);
					//chart1->Series["Temperatura"]->Points[i]->Label = Convert::ToString((dynamic_cast<SensorTemperaturaHumedad^>(Temperatura[i]->DataBase[0])->Temperatura));

				}
				// Esta sirviendo como capturador de excepciones
				else {

					chart3->Series["BIBLIOTECA"]->Points->Add(18);
					chart3->Series["BIBLIOTECA"]->Points[i]->AxisLabel = (sensorDataBIBLIO[i]->TiempoMedicion);


				}

			}
			List<Ambiente^>^ sensorDataTINKUY = Controller::Controller::QueryAmbienteData();
			for (int i = 0; i < sensorDataTINKUY->Count; i++) {
				if (sensorDataTINKUY[i]->UbicacionGeografica == "TINKUY") {
					chart4->Series["TINKUY"]->Points->Add(dynamic_cast<SensorCalidadAire^>(sensorDataTINKUY[i]->DataBase[2])->CalidadAire);
					chart4->Series["TINKUY"]->Points[i]->AxisLabel = (sensorDataTINKUY[i]->TiempoMedicion);
					//chart1->Series["Temperatura"]->Points[i]->Label = Convert::ToString((dynamic_cast<SensorTemperaturaHumedad^>(Temperatura[i]->DataBase[0])->Temperatura));

				}
				// Esta sirviendo como capturador de excepciones
				else {

					chart4->Series["TINKUY"]->Points->Add(22);
					chart4->Series["TINKUY"]->Points[i]->AxisLabel = (sensorDataTINKUY[i]->TiempoMedicion);


				}

			}



		}
		/*****  GRAFICOS DE NivelCO     *****/
		else if (CriterioMedicionBox->Text == "NivelCO") {
			txtmedicion->Text = "NivelCO";
			List<Ambiente^>^ sensorData = Controller::Controller::QueryAmbienteData();
			for (int i = 0; i < sensorData->Count; i++) {
				if (sensorData[i]->UbicacionGeografica == "CIA") {
					chart1->Series["CIA"]->Points->Add(dynamic_cast<SensorCO^>(sensorData[i]->DataBase[1])->NivelCO);
					chart1->Series["CIA"]->Points[i]->AxisLabel = (sensorData[i]->TiempoMedicion);
					//chart1->Series["Temperatura"]->Points[i]->Label = Convert::ToString((dynamic_cast<SensorTemperaturaHumedad^>(Temperatura[i]->DataBase[0])->Temperatura));

				}
				// Esta sirviendo como capturador de excepciones
				else {
					chart1->Series["CIA"]->Points->Add(20);
					chart1->Series["CIA"]->Points[i]->AxisLabel = (sensorData[i]->TiempoMedicion);

				}

			}

			List<Ambiente^>^ sensorDataFACI = Controller::Controller::QueryAmbienteData();
			for (int i = 0; i < sensorDataFACI->Count; i++) {
				if (sensorDataFACI[i]->UbicacionGeografica == "FACI") {
					chart2->Series["FACI"]->Points->Add(dynamic_cast<SensorCO^>(sensorDataFACI[i]->DataBase[1])->NivelCO);
					chart2->Series["FACI"]->Points[i]->AxisLabel = (sensorDataFACI[i]->TiempoMedicion);
					//chart1->Series["Temperatura"]->Points[i]->Label = Convert::ToString((dynamic_cast<SensorTemperaturaHumedad^>(Temperatura[i]->DataBase[0])->Temperatura));

				}
				// Esta sirviendo como capturador de excepciones
				else {

					chart2->Series["FACI"]->Points->Add(21);
					chart2->Series["FACI"]->Points[i]->AxisLabel = (sensorDataFACI[i]->TiempoMedicion);


				}

			}

			List<Ambiente^>^ sensorDataBIBLIO = Controller::Controller::QueryAmbienteData();
			for (int i = 0; i < sensorDataBIBLIO->Count; i++) {
				if (sensorDataBIBLIO[i]->UbicacionGeografica == "BIBLIOTECA CENTRAL") {
					chart3->Series["BIBLIOTECA"]->Points->Add(dynamic_cast<SensorCO^>(sensorDataBIBLIO[i]->DataBase[1])->NivelCO);
					chart3->Series["BIBLIOTECA"]->Points[i]->AxisLabel = (sensorDataBIBLIO[i]->TiempoMedicion);
					//chart1->Series["Temperatura"]->Points[i]->Label = Convert::ToString((dynamic_cast<SensorTemperaturaHumedad^>(Temperatura[i]->DataBase[0])->Temperatura));

				}
				// Esta sirviendo como capturador de excepciones
				else {

					chart3->Series["BIBLIOTECA"]->Points->Add(18);
					chart3->Series["BIBLIOTECA"]->Points[i]->AxisLabel = (sensorDataBIBLIO[i]->TiempoMedicion);


				}

			}
			List<Ambiente^>^ sensorDataTINKUY = Controller::Controller::QueryAmbienteData();
			for (int i = 0; i < sensorDataTINKUY->Count; i++) {
				if (sensorDataTINKUY[i]->UbicacionGeografica == "TINKUY") {
					chart4->Series["TINKUY"]->Points->Add(dynamic_cast<SensorCO^>(sensorDataTINKUY[i]->DataBase[1])->NivelCO);
					chart4->Series["TINKUY"]->Points[i]->AxisLabel = (sensorDataTINKUY[i]->TiempoMedicion);
					//chart1->Series["Temperatura"]->Points[i]->Label = Convert::ToString((dynamic_cast<SensorTemperaturaHumedad^>(Temperatura[i]->DataBase[0])->Temperatura));

				}
				// Esta sirviendo como capturador de excepciones
				else {

					chart4->Series["TINKUY"]->Points->Add(22);
					chart4->Series["TINKUY"]->Points[i]->AxisLabel = (sensorDataTINKUY[i]->TiempoMedicion);


				}

			}



		}

		else if (CriterioMedicionBox->Text == "Humedad ") {
			txtmedicion->Text = "Humedad ";
			List<Ambiente^>^ sensorData = Controller::Controller::QueryAmbienteData();
			for (int i = 0; i < sensorData->Count; i++) {
				if (sensorData[i]->UbicacionGeografica == "CIA") {
					chart1->Series["CIA"]->Points->Add(dynamic_cast<SensorTemperaturaHumedad^>(sensorData[i]->DataBase[0])->Humedad);
					chart1->Series["CIA"]->Points[i]->AxisLabel = (sensorData[i]->TiempoMedicion);
					//chart1->Series["Temperatura"]->Points[i]->Label = Convert::ToString((dynamic_cast<SensorTemperaturaHumedad^>(Temperatura[i]->DataBase[0])->Temperatura));

				}
				// Esta sirviendo como capturador de excepciones
				else {
					chart1->Series["CIA"]->Points->Add(69);
					chart1->Series["CIA"]->Points[i]->AxisLabel = (sensorData[i]->TiempoMedicion);

				}

			}

			List<Ambiente^>^ sensorDataFACI = Controller::Controller::QueryAmbienteData();
			for (int i = 0; i < sensorDataFACI->Count; i++) {
				if (sensorDataFACI[i]->UbicacionGeografica == "FACI") {
					chart2->Series["FACI"]->Points->Add(dynamic_cast<SensorTemperaturaHumedad^>(sensorDataFACI[i]->DataBase[0])->Humedad);
					chart2->Series["FACI"]->Points[i]->AxisLabel = (sensorDataFACI[i]->TiempoMedicion);
					//chart1->Series["Temperatura"]->Points[i]->Label = Convert::ToString((dynamic_cast<SensorTemperaturaHumedad^>(Temperatura[i]->DataBase[0])->Temperatura));

				}
				// Esta sirviendo como capturador de excepciones
				else {

					chart2->Series["FACI"]->Points->Add(68);
					chart2->Series["FACI"]->Points[i]->AxisLabel = (sensorDataFACI[i]->TiempoMedicion);


				}

			}

			List<Ambiente^>^ sensorDataBIBLIO = Controller::Controller::QueryAmbienteData();
			for (int i = 0; i < sensorDataBIBLIO->Count; i++) {
				if (sensorDataBIBLIO[i]->UbicacionGeografica == "BIBLIOTECA CENTRAL") {
					chart3->Series["BIBLIOTECA"]->Points->Add(dynamic_cast<SensorTemperaturaHumedad^>(sensorDataBIBLIO[i]->DataBase[0])->Humedad);
					chart3->Series["BIBLIOTECA"]->Points[i]->AxisLabel = (sensorDataBIBLIO[i]->TiempoMedicion);
					//chart1->Series["Temperatura"]->Points[i]->Label = Convert::ToString((dynamic_cast<SensorTemperaturaHumedad^>(Temperatura[i]->DataBase[0])->Temperatura));

				}
				// Esta sirviendo como capturador de excepciones
				else {

					chart3->Series["BIBLIOTECA"]->Points->Add(68);
					chart3->Series["BIBLIOTECA"]->Points[i]->AxisLabel = (sensorDataBIBLIO[i]->TiempoMedicion);


				}

			}
			List<Ambiente^>^ sensorDataTINKUY = Controller::Controller::QueryAmbienteData();
			for (int i = 0; i < sensorDataTINKUY->Count; i++) {
				if (sensorDataTINKUY[i]->UbicacionGeografica == "TINKUY") {
					chart4->Series["TINKUY"]->Points->Add(dynamic_cast<SensorTemperaturaHumedad^>(sensorDataTINKUY[i]->DataBase[0])->Humedad);
					chart4->Series["TINKUY"]->Points[i]->AxisLabel = (sensorDataTINKUY[i]->TiempoMedicion);
					//chart1->Series["Temperatura"]->Points[i]->Label = Convert::ToString((dynamic_cast<SensorTemperaturaHumedad^>(Temperatura[i]->DataBase[0])->Temperatura));

				}
				// Esta sirviendo como capturador de excepciones
				else {

					chart4->Series["TINKUY"]->Points->Add(68);
					chart4->Series["TINKUY"]->Points[i]->AxisLabel = (sensorDataTINKUY[i]->TiempoMedicion);


				}

			}



		}



	}
	};
}


