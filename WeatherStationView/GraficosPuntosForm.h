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
	private: List<Ambiente^>^ sensordata = Controller::Controller::QueryAmbienteData();


	private: System::Windows::Forms::ComboBox^ CriterioMedicionBox;



	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ txtmedicion;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart3;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart4;

	private: System::ComponentModel::IContainer^ components;


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


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
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series7 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series8 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series9 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series10 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series11 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series12 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea4 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series13 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series14 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series15 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series16 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->CriterioMedicionBox = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtmedicion = (gcnew System::Windows::Forms::Label());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart4))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(62, 64);
			this->chart1->Margin = System::Windows::Forms::Padding(2);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Legend = L"Legend1";
			series1->Name = L"CIA";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->Legend = L"Legend1";
			series2->Name = L"FACI";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series3->Legend = L"Legend1";
			series3->Name = L"TINKUY";
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series4->Legend = L"Legend1";
			series4->Name = L"BIBLIOTECA";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Series->Add(series3);
			this->chart1->Series->Add(series4);
			this->chart1->Size = System::Drawing::Size(688, 459);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// CriterioMedicionBox
			// 
			this->CriterioMedicionBox->FormattingEnabled = true;
			this->CriterioMedicionBox->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Temperatura", L"Humedad", L"Calidad del aire",
					L"Nivel CO"
			});
			this->CriterioMedicionBox->Location = System::Drawing::Point(449, 23);
			this->CriterioMedicionBox->Margin = System::Windows::Forms::Padding(2);
			this->CriterioMedicionBox->Name = L"CriterioMedicionBox";
			this->CriterioMedicionBox->Size = System::Drawing::Size(92, 21);
			this->CriterioMedicionBox->TabIndex = 5;
			this->CriterioMedicionBox->SelectedIndexChanged += gcnew System::EventHandler(this, &GraficosPuntosForm::CriterioMedicionBox_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(470, 6);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(50, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Medicion";
			// 
			// txtmedicion
			// 
			this->txtmedicion->AutoSize = true;
			this->txtmedicion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtmedicion->Location = System::Drawing::Point(58, 11);
			this->txtmedicion->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->txtmedicion->Name = L"txtmedicion";
			this->txtmedicion->Size = System::Drawing::Size(51, 20);
			this->txtmedicion->TabIndex = 8;
			this->txtmedicion->Text = L"label3";
			// 
			// chart2
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart2->Legends->Add(legend2);
			this->chart2->Location = System::Drawing::Point(62, 64);
			this->chart2->Margin = System::Windows::Forms::Padding(2);
			this->chart2->Name = L"chart2";
			series5->ChartArea = L"ChartArea1";
			series5->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series5->Legend = L"Legend1";
			series5->Name = L"CIA";
			series6->ChartArea = L"ChartArea1";
			series6->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series6->Legend = L"Legend1";
			series6->Name = L"FACI";
			series7->ChartArea = L"ChartArea1";
			series7->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series7->Legend = L"Legend1";
			series7->Name = L"TINKUY";
			series8->ChartArea = L"ChartArea1";
			series8->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series8->Legend = L"Legend1";
			series8->Name = L"BIBLIOTECA";
			this->chart2->Series->Add(series5);
			this->chart2->Series->Add(series6);
			this->chart2->Series->Add(series7);
			this->chart2->Series->Add(series8);
			this->chart2->Size = System::Drawing::Size(688, 459);
			this->chart2->TabIndex = 9;
			this->chart2->Text = L"chart2";
			// 
			// chart3
			// 
			chartArea3->Name = L"ChartArea1";
			this->chart3->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chart3->Legends->Add(legend3);
			this->chart3->Location = System::Drawing::Point(62, 64);
			this->chart3->Margin = System::Windows::Forms::Padding(2);
			this->chart3->Name = L"chart3";
			series9->ChartArea = L"ChartArea1";
			series9->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series9->Legend = L"Legend1";
			series9->Name = L"CIA";
			series10->ChartArea = L"ChartArea1";
			series10->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series10->Legend = L"Legend1";
			series10->Name = L"FACI";
			series11->ChartArea = L"ChartArea1";
			series11->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series11->Legend = L"Legend1";
			series11->Name = L"TINKUY";
			series12->ChartArea = L"ChartArea1";
			series12->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series12->Legend = L"Legend1";
			series12->Name = L"BIBLIOTECA";
			this->chart3->Series->Add(series9);
			this->chart3->Series->Add(series10);
			this->chart3->Series->Add(series11);
			this->chart3->Series->Add(series12);
			this->chart3->Size = System::Drawing::Size(688, 459);
			this->chart3->TabIndex = 10;
			this->chart3->Text = L"chart3";
			// 
			// chart4
			// 
			chartArea4->Name = L"ChartArea1";
			this->chart4->ChartAreas->Add(chartArea4);
			legend4->Name = L"Legend1";
			this->chart4->Legends->Add(legend4);
			this->chart4->Location = System::Drawing::Point(62, 64);
			this->chart4->Margin = System::Windows::Forms::Padding(2);
			this->chart4->Name = L"chart4";
			series13->ChartArea = L"ChartArea1";
			series13->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series13->Legend = L"Legend1";
			series13->Name = L"CIA";
			series14->ChartArea = L"ChartArea1";
			series14->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series14->Legend = L"Legend1";
			series14->Name = L"FACI";
			series15->ChartArea = L"ChartArea1";
			series15->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series15->Legend = L"Legend1";
			series15->Name = L"TINKUY";
			series16->ChartArea = L"ChartArea1";
			series16->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series16->Legend = L"Legend1";
			series16->Name = L"BIBLIOTECA";
			this->chart4->Series->Add(series13);
			this->chart4->Series->Add(series14);
			this->chart4->Series->Add(series15);
			this->chart4->Series->Add(series16);
			this->chart4->Size = System::Drawing::Size(688, 459);
			this->chart4->TabIndex = 11;
			this->chart4->Text = L"chart4";
			// 
			// GraficosPuntosForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(922, 609);
			this->Controls->Add(this->chart4);
			this->Controls->Add(this->chart3);
			this->Controls->Add(this->chart2);
			this->Controls->Add(this->txtmedicion);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->CriterioMedicionBox);
			this->Controls->Add(this->chart1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"GraficosPuntosForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
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

		/******	DECLARACION DE VARIABLES ********/

		List<int>^ tempdata = Controller::Controller::GetTempfromAmbiente(sensordata);
		List<int>^ humdata = Controller::Controller::GetHumfromAmbiente(sensordata);
		List<int>^ codata = Controller::Controller::GetCOfromAmbiente(sensordata);
		List<int>^ airqdata = Controller::Controller::GetAirQfromAmbiente(sensordata);
		List<String^>^ datetimedata = Controller::Controller::GetDateTimefromAmbiente(sensordata);

		List<int>^ indexdataCIA = Controller::Controller::GetIndexfromAmbiente(sensordata, "CIA");
		List<int>^ indexdataFACI = Controller::Controller::GetIndexfromAmbiente(sensordata, "FACI");
		List<int>^ indexdataBIBLIO = Controller::Controller::GetIndexfromAmbiente(sensordata, "BIBLIOTECA CENTRAL");
		List<int>^ indexdataTINKUY = Controller::Controller::GetIndexfromAmbiente(sensordata, "TINKUY");

		//Listas con datos referentes a cada lugar

		List<int>^ tempdataCIA = gcnew List<int>();
		List<int>^ tempdataFACI = gcnew List<int>();
		List<int>^ tempdataBIBLIO = gcnew List<int>();
		List<int>^ tempdataTINKUY = gcnew List<int>();

		List<int>^ humdataCIA = gcnew List<int>();
		List<int>^ humdataFACI = gcnew List<int>();
		List<int>^ humdataBIBLIO = gcnew List<int>();
		List<int>^ humdataTINKUY = gcnew List<int>();

		List<int>^ codataCIA = gcnew List<int>();
		List<int>^ codataFACI = gcnew List<int>();
		List<int>^ codataBIBLIO = gcnew List<int>();
		List<int>^ codataTINKUY = gcnew List<int>();

		List<int>^ airqdataCIA = gcnew List<int>();
		List<int>^ airqdataFACI = gcnew List<int>();
		List<int>^ airqdataBIBLIO = gcnew List<int>();
		List<int>^ airqdataTINKUY = gcnew List<int>();

		List<String^>^ datetimeCIA = gcnew List<String^>();
		List<String^>^ datetimeFACI = gcnew List<String^>();
		List<String^>^ datetimeBIBLIO = gcnew List<String^>();
		List<String^>^ datetimeTINKUY = gcnew List<String^>();

		//se inicializa las listas con los datos respectivos de cada lugar

		for each(int index in indexdataCIA)
		{
			tempdataCIA->Add(tempdata[index]);
			humdataCIA->Add(humdata[index]);
			codataCIA->Add(codata[index]);
			airqdataCIA->Add(airqdata[index]);
			datetimeCIA->Add(datetimedata[index]);
		}

		for each (int index in indexdataFACI)
		{
			tempdataFACI->Add(tempdata[index]);
			humdataFACI->Add(humdata[index]);
			codataFACI->Add(codata[index]);
			airqdataFACI->Add(airqdata[index]);
			datetimeFACI->Add(datetimedata[index]);
		}

		for each (int index in indexdataBIBLIO)
		{
			tempdataBIBLIO->Add(tempdata[index]);
			humdataBIBLIO->Add(humdata[index]);
			codataBIBLIO->Add(codata[index]);
			airqdataBIBLIO->Add(airqdata[index]);
			datetimeBIBLIO->Add(datetimedata[index]);
		}

		for each (int index in indexdataTINKUY)
		{
			tempdataTINKUY->Add(tempdata[index]);
			humdataTINKUY->Add(humdata[index]);
			codataTINKUY->Add(codata[index]);
			airqdataTINKUY->Add(airqdata[index]);
			datetimeTINKUY->Add(datetimedata[index]);
		}

		chart1->Series["CIA"]->Points->DataBindXY(datetimeCIA, tempdataCIA);
		chart1->Series["FACI"]->Points->DataBindXY(datetimeFACI, tempdataFACI);
		chart1->Series["BIBLIOTECA"]->Points->DataBindXY(datetimeBIBLIO, tempdataBIBLIO);
		chart1->Series["TINKUY"]->Points->DataBindXY(datetimeTINKUY, tempdataTINKUY);

		chart2->Series["CIA"]->Points->DataBindXY(datetimeCIA, humdataCIA);
		chart2->Series["FACI"]->Points->DataBindXY(datetimeFACI, humdataFACI);
		chart2->Series["BIBLIOTECA"]->Points->DataBindXY(datetimeBIBLIO, humdataBIBLIO);
		chart2->Series["TINKUY"]->Points->DataBindXY(datetimeTINKUY, humdataTINKUY);

		chart3->Series["CIA"]->Points->DataBindXY(datetimeCIA, codataCIA);
		chart3->Series["FACI"]->Points->DataBindXY(datetimeFACI, codataFACI);
		chart3->Series["BIBLIOTECA"]->Points->DataBindXY(datetimeBIBLIO, codataBIBLIO);
		chart3->Series["TINKUY"]->Points->DataBindXY(datetimeTINKUY, codataTINKUY);

		chart4->Series["CIA"]->Points->DataBindXY(datetimeCIA, airqdataCIA);
		chart4->Series["FACI"]->Points->DataBindXY(datetimeFACI, airqdataFACI);
		chart4->Series["BIBLIOTECA"]->Points->DataBindXY(datetimeBIBLIO, airqdataBIBLIO);
		chart4->Series["TINKUY"]->Points->DataBindXY(datetimeTINKUY, airqdataTINKUY);

		chart1->Visible = true;
		chart2->Visible = false;
		chart3->Visible = false;
		chart4->Visible = false;

	}
	private: System::Void CriterioMedicionBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

		if (CriterioMedicionBox->Text == "Temperatura") {
			chart1->Visible = true;
			chart2->Visible = false;
			chart3->Visible = false;
			chart4->Visible = false;
		}
		else if (CriterioMedicionBox->Text == "Humedad") {
			chart1->Visible = false;
			chart2->Visible = true;
			chart3->Visible = false;
			chart4->Visible = false;
		}
		else if (CriterioMedicionBox->Text == "Calidad del aire") {
			chart1->Visible = false;
			chart2->Visible = false;
			chart3->Visible = true;
			chart4->Visible = false;
		}
		else if (CriterioMedicionBox->Text == "Nivel CO") {
			chart1->Visible = false;
			chart2->Visible = false;
			chart3->Visible = false;
			chart4->Visible = true;
		}

		//if (CriterioMedicionBox->Text == "Temperatura") {
		//	txtmedicion->Text = "Temperatura";
		//	for (int i = 0; i < sensordata->Count; i++) {
		//		if (sensordata[i]->UbicacionGeografica == "CIA") {
		//			chart1->Series["CIA"]->Points->Add(dynamic_cast<SensorTemperaturaHumedad^>(sensordata[i]->DataBase[0])->Temperatura);
		//			chart1->Series["CIA"]->Points[i]->AxisLabel = (sensordata[i]->TiempoMedicion);
		//			//chart1->Series["Temperatura"]->Points[i]->Label = Convert::ToString((dynamic_cast<SensorTemperaturaHumedad^>(Temperatura[i]->DataBase[0])->Temperatura));
		//		}
		//		// Esta sirviendo como capturador de excepciones
		//		else {
		//			chart1->Series["CIA"]->Points->Add(20);
		//			chart1->Series["CIA"]->Points[i]->AxisLabel = (sensordata[i]->TiempoMedicion);
		//		}
		//	}
		//	for (int i = 0; i < sensordata->Count; i++) {
		//		if (sensordata[i]->UbicacionGeografica == "FACI") {
		//			chart1->Series["FACI"]->Points->Add(dynamic_cast<SensorTemperaturaHumedad^>(sensordata[i]->DataBase[0])->Temperatura);
		//			chart1->Series["FACI"]->Points[i]->AxisLabel = (sensordata[i]->TiempoMedicion);
		//			//chart1->Series["Temperatura"]->Points[i]->Label = Convert::ToString((dynamic_cast<SensorTemperaturaHumedad^>(Temperatura[i]->DataBase[0])->Temperatura));

		//		}
		//		// Esta sirviendo como capturador de excepciones
		//		else {
		//			chart1->Series["FACI"]->Points->Add(21);
		//			chart1->Series["FACI"]->Points[i]->AxisLabel = (sensordata[i]->TiempoMedicion);
		//		}
		//	}			
		//	for (int i = 0; i < sensordata->Count; i++) {
		//		if (sensordata[i]->UbicacionGeografica == "BIBLIOTECA CENTRAL") {
		//			chart1->Series["BIBLIOTECA"]->Points->Add(dynamic_cast<SensorTemperaturaHumedad^>(sensordata[i]->DataBase[0])->Temperatura);
		//			chart1->Series["BIBLIOTECA"]->Points[i]->AxisLabel = (sensordata[i]->TiempoMedicion);
		//			//chart1->Series["Temperatura"]->Points[i]->Label = Convert::ToString((dynamic_cast<SensorTemperaturaHumedad^>(Temperatura[i]->DataBase[0])->Temperatura));
		//		}
		//		// Esta sirviendo como capturador de excepciones
		//		else {
		//			chart1->Series["BIBLIOTECA"]->Points->Add(18);
		//			chart1->Series["BIBLIOTECA"]->Points[i]->AxisLabel = (sensordata[i]->TiempoMedicion);

		//		}
		//	}
		//	List<Ambiente^>^ sensordata = Controller::Controller::QueryAmbienteData();
		//	for (int i = 0; i < sensordata->Count; i++) {
		//		if (sensordata[i]->UbicacionGeografica == "TINKUY") {
		//			chart1->Series["TINKUY"]->Points->Add(dynamic_cast<SensorTemperaturaHumedad^>(sensordata[i]->DataBase[0])->Temperatura);
		//			chart1->Series["TINKUY"]->Points[i]->AxisLabel = (sensordata[i]->TiempoMedicion);
		//			//chart1->Series["Temperatura"]->Points[i]->Label = Convert::ToString((dynamic_cast<SensorTemperaturaHumedad^>(Temperatura[i]->DataBase[0])->Temperatura));
		//		}
		//		// Esta sirviendo como capturador de excepciones
		//		else {
		//			chart1->Series["TINKUY"]->Points->Add(22);
		//			chart1->Series["TINKUY"]->Points[i]->AxisLabel = (sensordata[i]->TiempoMedicion);
		//		}
		//	}
		//}

		//else if (CriterioMedicionBox->Text == "CalidadAire") {
		//	txtmedicion->Text = "CalidadAire";
		//	List<Ambiente^>^ sensorData = Controller::Controller::QueryAmbienteData();
		//	for (int i = 0; i < sensorData->Count; i++) {
		//		if (sensorData[i]->UbicacionGeografica == "CIA") {
		//			chart1->Series["CIA"]->Points->Add(dynamic_cast<SensorCalidadAire^>(sensorData[i]->DataBase[2])->CalidadAire);
		//			chart1->Series["CIA"]->Points[i]->AxisLabel = (sensorData[i]->TiempoMedicion);
		//			//chart1->Series["Temperatura"]->Points[i]->Label = Convert::ToString((dynamic_cast<SensorTemperaturaHumedad^>(Temperatura[i]->DataBase[0])->Temperatura));

		//		}
		//		// Esta sirviendo como capturador de excepciones
		//		else {
		//			chart1->Series["CIA"]->Points->Add(20);
		//			chart1->Series["CIA"]->Points[i]->AxisLabel = (sensorData[i]->TiempoMedicion);

		//		}

		//	}

		//	List<Ambiente^>^ sensorDataFACI = Controller::Controller::QueryAmbienteData();
		//	for (int i = 0; i < sensorDataFACI->Count; i++) {
		//		if (sensorDataFACI[i]->UbicacionGeografica == "FACI") {
		//			chart2->Series["FACI"]->Points->Add(dynamic_cast<SensorCalidadAire^>(sensorDataFACI[i]->DataBase[2])->CalidadAire);
		//			chart2->Series["FACI"]->Points[i]->AxisLabel = (sensorDataFACI[i]->TiempoMedicion);
		//			//chart1->Series["Temperatura"]->Points[i]->Label = Convert::ToString((dynamic_cast<SensorTemperaturaHumedad^>(Temperatura[i]->DataBase[0])->Temperatura));

		//		}
		//		// Esta sirviendo como capturador de excepciones
		//		else {

		//			chart2->Series["FACI"]->Points->Add(21);
		//			chart2->Series["FACI"]->Points[i]->AxisLabel = (sensorDataFACI[i]->TiempoMedicion);


		//		}

		//	}

		//	List<Ambiente^>^ sensorDataBIBLIO = Controller::Controller::QueryAmbienteData();
		//	for (int i = 0; i < sensorDataBIBLIO->Count; i++) {
		//		if (sensorDataBIBLIO[i]->UbicacionGeografica == "BIBLIOTECA CENTRAL") {
		//			chart3->Series["BIBLIOTECA"]->Points->Add(dynamic_cast<SensorCalidadAire^>(sensorDataBIBLIO[i]->DataBase[2])->CalidadAire);
		//			chart3->Series["BIBLIOTECA"]->Points[i]->AxisLabel = (sensorDataBIBLIO[i]->TiempoMedicion);
		//			//chart1->Series["Temperatura"]->Points[i]->Label = Convert::ToString((dynamic_cast<SensorTemperaturaHumedad^>(Temperatura[i]->DataBase[0])->Temperatura));

		//		}
		//		// Esta sirviendo como capturador de excepciones
		//		else {

		//			chart3->Series["BIBLIOTECA"]->Points->Add(18);
		//			chart3->Series["BIBLIOTECA"]->Points[i]->AxisLabel = (sensorDataBIBLIO[i]->TiempoMedicion);


		//		}

		//	}
		//	List<Ambiente^>^ sensorDataTINKUY = Controller::Controller::QueryAmbienteData();
		//	for (int i = 0; i < sensorDataTINKUY->Count; i++) {
		//		if (sensorDataTINKUY[i]->UbicacionGeografica == "TINKUY") {
		//			chart4->Series["TINKUY"]->Points->Add(dynamic_cast<SensorCalidadAire^>(sensorDataTINKUY[i]->DataBase[2])->CalidadAire);
		//			chart4->Series["TINKUY"]->Points[i]->AxisLabel = (sensorDataTINKUY[i]->TiempoMedicion);
		//			//chart1->Series["Temperatura"]->Points[i]->Label = Convert::ToString((dynamic_cast<SensorTemperaturaHumedad^>(Temperatura[i]->DataBase[0])->Temperatura));

		//		}
		//		// Esta sirviendo como capturador de excepciones
		//		else {

		//			chart4->Series["TINKUY"]->Points->Add(22);
		//			chart4->Series["TINKUY"]->Points[i]->AxisLabel = (sensorDataTINKUY[i]->TiempoMedicion);


		//		}

		//	}



		//}
		///*****  GRAFICOS DE NivelCO     *****/
		//else if (CriterioMedicionBox->Text == "NivelCO") {
		//	txtmedicion->Text = "NivelCO";
		//	List<Ambiente^>^ sensorData = Controller::Controller::QueryAmbienteData();
		//	for (int i = 0; i < sensorData->Count; i++) {
		//		if (sensorData[i]->UbicacionGeografica == "CIA") {
		//			chart1->Series["CIA"]->Points->Add(dynamic_cast<SensorCO^>(sensorData[i]->DataBase[1])->NivelCO);
		//			chart1->Series["CIA"]->Points[i]->AxisLabel = (sensorData[i]->TiempoMedicion);
		//			//chart1->Series["Temperatura"]->Points[i]->Label = Convert::ToString((dynamic_cast<SensorTemperaturaHumedad^>(Temperatura[i]->DataBase[0])->Temperatura));

		//		}
		//		// Esta sirviendo como capturador de excepciones
		//		else {
		//			chart1->Series["CIA"]->Points->Add(20);
		//			chart1->Series["CIA"]->Points[i]->AxisLabel = (sensorData[i]->TiempoMedicion);

		//		}

		//	}

		//	List<Ambiente^>^ sensorDataFACI = Controller::Controller::QueryAmbienteData();
		//	for (int i = 0; i < sensorDataFACI->Count; i++) {
		//		if (sensorDataFACI[i]->UbicacionGeografica == "FACI") {
		//			chart1->Series["FACI"]->Points->Add(dynamic_cast<SensorCO^>(sensorDataFACI[i]->DataBase[1])->NivelCO);
		//			chart1->Series["FACI"]->Points[i]->AxisLabel = (sensorDataFACI[i]->TiempoMedicion);
		//			//chart1->Series["Temperatura"]->Points[i]->Label = Convert::ToString((dynamic_cast<SensorTemperaturaHumedad^>(Temperatura[i]->DataBase[0])->Temperatura));

		//		}
		//		// Esta sirviendo como capturador de excepciones
		//		else {

		//			chart1->Series["FACI"]->Points->Add(21);
		//			chart1->Series["FACI"]->Points[i]->AxisLabel = (sensorDataFACI[i]->TiempoMedicion);


		//		}

		//	}

		//	List<Ambiente^>^ sensorDataBIBLIO = Controller::Controller::QueryAmbienteData();
		//	for (int i = 0; i < sensorDataBIBLIO->Count; i++) {
		//		if (sensorDataBIBLIO[i]->UbicacionGeografica == "BIBLIOTECA CENTRAL") {
		//			chart3->Series["BIBLIOTECA"]->Points->Add(dynamic_cast<SensorCO^>(sensorDataBIBLIO[i]->DataBase[1])->NivelCO);
		//			chart3->Series["BIBLIOTECA"]->Points[i]->AxisLabel = (sensorDataBIBLIO[i]->TiempoMedicion);
		//			//chart1->Series["Temperatura"]->Points[i]->Label = Convert::ToString((dynamic_cast<SensorTemperaturaHumedad^>(Temperatura[i]->DataBase[0])->Temperatura));

		//		}
		//		// Esta sirviendo como capturador de excepciones
		//		else {

		//			chart3->Series["BIBLIOTECA"]->Points->Add(18);
		//			chart3->Series["BIBLIOTECA"]->Points[i]->AxisLabel = (sensorDataBIBLIO[i]->TiempoMedicion);


		//		}

		//	}
		//	List<Ambiente^>^ sensorDataTINKUY = Controller::Controller::QueryAmbienteData();
		//	for (int i = 0; i < sensorDataTINKUY->Count; i++) {
		//		if (sensorDataTINKUY[i]->UbicacionGeografica == "TINKUY") {
		//			chart4->Series["TINKUY"]->Points->Add(dynamic_cast<SensorCO^>(sensorDataTINKUY[i]->DataBase[1])->NivelCO);
		//			chart4->Series["TINKUY"]->Points[i]->AxisLabel = (sensorDataTINKUY[i]->TiempoMedicion);
		//			//chart1->Series["Temperatura"]->Points[i]->Label = Convert::ToString((dynamic_cast<SensorTemperaturaHumedad^>(Temperatura[i]->DataBase[0])->Temperatura));

		//		}
		//		// Esta sirviendo como capturador de excepciones
		//		else {

		//			chart4->Series["TINKUY"]->Points->Add(22);
		//			chart4->Series["TINKUY"]->Points[i]->AxisLabel = (sensorDataTINKUY[i]->TiempoMedicion);


		//		}

		//	}



		//}

		//else if (CriterioMedicionBox->Text == "Humedad ") {
		//	txtmedicion->Text = "Humedad ";
		//	List<Ambiente^>^ sensorData = Controller::Controller::QueryAmbienteData();
		//	for (int i = 0; i < sensorData->Count; i++) {
		//		if (sensorData[i]->UbicacionGeografica == "CIA") {
		//			chart1->Series["CIA"]->Points->Add(dynamic_cast<SensorTemperaturaHumedad^>(sensorData[i]->DataBase[0])->Humedad);
		//			chart1->Series["CIA"]->Points[i]->AxisLabel = (sensorData[i]->TiempoMedicion);
		//			//chart1->Series["Temperatura"]->Points[i]->Label = Convert::ToString((dynamic_cast<SensorTemperaturaHumedad^>(Temperatura[i]->DataBase[0])->Temperatura));

		//		}
		//		// Esta sirviendo como capturador de excepciones
		//		else {
		//			chart1->Series["CIA"]->Points->Add(69);
		//			chart1->Series["CIA"]->Points[i]->AxisLabel = (sensorData[i]->TiempoMedicion);

		//		}

		//	}

		//	List<Ambiente^>^ sensorDataFACI = Controller::Controller::QueryAmbienteData();
		//	for (int i = 0; i < sensorDataFACI->Count; i++) {
		//		if (sensorDataFACI[i]->UbicacionGeografica == "FACI") {
		//			chart2->Series["FACI"]->Points->Add(dynamic_cast<SensorTemperaturaHumedad^>(sensorDataFACI[i]->DataBase[0])->Humedad);
		//			chart2->Series["FACI"]->Points[i]->AxisLabel = (sensorDataFACI[i]->TiempoMedicion);
		//			//chart1->Series["Temperatura"]->Points[i]->Label = Convert::ToString((dynamic_cast<SensorTemperaturaHumedad^>(Temperatura[i]->DataBase[0])->Temperatura));

		//		}
		//		// Esta sirviendo como capturador de excepciones
		//		else {

		//			chart2->Series["FACI"]->Points->Add(68);
		//			chart2->Series["FACI"]->Points[i]->AxisLabel = (sensorDataFACI[i]->TiempoMedicion);


		//		}

		//	}

		//	List<Ambiente^>^ sensorDataBIBLIO = Controller::Controller::QueryAmbienteData();
		//	for (int i = 0; i < sensorDataBIBLIO->Count; i++) {
		//		if (sensorDataBIBLIO[i]->UbicacionGeografica == "BIBLIOTECA CENTRAL") {
		//			chart3->Series["BIBLIOTECA"]->Points->Add(dynamic_cast<SensorTemperaturaHumedad^>(sensorDataBIBLIO[i]->DataBase[0])->Humedad);
		//			chart3->Series["BIBLIOTECA"]->Points[i]->AxisLabel = (sensorDataBIBLIO[i]->TiempoMedicion);
		//			//chart1->Series["Temperatura"]->Points[i]->Label = Convert::ToString((dynamic_cast<SensorTemperaturaHumedad^>(Temperatura[i]->DataBase[0])->Temperatura));

		//		}
		//		// Esta sirviendo como capturador de excepciones
		//		else {

		//			chart3->Series["BIBLIOTECA"]->Points->Add(68);
		//			chart3->Series["BIBLIOTECA"]->Points[i]->AxisLabel = (sensorDataBIBLIO[i]->TiempoMedicion);


		//		}

		//	}
		//	List<Ambiente^>^ sensorDataTINKUY = Controller::Controller::QueryAmbienteData();
		//	for (int i = 0; i < sensorDataTINKUY->Count; i++) {
		//		if (sensorDataTINKUY[i]->UbicacionGeografica == "TINKUY") {
		//			chart4->Series["TINKUY"]->Points->Add(dynamic_cast<SensorTemperaturaHumedad^>(sensorDataTINKUY[i]->DataBase[0])->Humedad);
		//			chart4->Series["TINKUY"]->Points[i]->AxisLabel = (sensorDataTINKUY[i]->TiempoMedicion);
		//			//chart1->Series["Temperatura"]->Points[i]->Label = Convert::ToString((dynamic_cast<SensorTemperaturaHumedad^>(Temperatura[i]->DataBase[0])->Temperatura));

		//		}
		//		// Esta sirviendo como capturador de excepciones
		//		else {

		//			chart4->Series["TINKUY"]->Points->Add(68);
		//			chart4->Series["TINKUY"]->Points[i]->AxisLabel = (sensorDataTINKUY[i]->TiempoMedicion);


		//		}

		//	}



		//}



	}

};
}


