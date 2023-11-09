#pragma once

namespace WeatherStationView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms::DataVisualization::Charting;
	using namespace Model;

	/// <summary>
	/// Resumen de NewPie
	/// </summary>
	public ref class NewPie : public System::Windows::Forms::Form
	{
	public:
		NewPie()
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
		~NewPie()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chTemp;

	protected:
	private: User^ user;
	private: List<Ambiente^>^ sensorData = Controller::Controller::QueryAmbienteData();
	private: List<int>^ tempdata = Controller::Controller::GetTempfromAmbiente(sensorData);
	private: List<int>^ humdata = Controller::Controller::GetHumfromAmbiente(sensorData);
	private: List<int>^ codata = Controller::Controller::GetCOfromAmbiente(sensorData);
	private: List<int>^ airqdata = Controller::Controller::GetAirQfromAmbiente(sensorData);
	private: List<int>^ indexdataCIA = Controller::Controller::GetIndexfromAmbiente(sensorData, "CIA");
	private: List<int>^ indexdataFACI = Controller::Controller::GetIndexfromAmbiente(sensorData, "FACI");
	private: List<int>^ indexdataBIBLIO = Controller::Controller::GetIndexfromAmbiente(sensorData, "BIBLIOTECA CENTRAL");
	private: List<int>^ indexdataTINKUY = Controller::Controller::GetIndexfromAmbiente(sensorData, "TINKUY");
	private:	   List<int>^ tempdataCIA = gcnew List<int>();
	private:	   List<int>^ tempdataFACI = gcnew List<int>();
	private:	   List<int>^ tempdataBIBLIO = gcnew List<int>();
	private:	   List<int>^ tempdataTINKUY = gcnew List<int>();

	private:	   List<int>^ humdataCIA = gcnew List<int>();
	private:	   List<int>^ humdataFACI = gcnew List<int>();
	private:	   List<int>^ humdataBIBLIO = gcnew List<int>();
	private:	   List<int>^ humdataTINKUY = gcnew List<int>();

	private:	   List<int>^ codataCIA = gcnew List<int>();
	private:	   List<int>^ codataFACI = gcnew List<int>();
	private:	   List<int>^ codataBIBLIO = gcnew List<int>();
	private:	   List<int>^ codataTINKUY = gcnew List<int>();

	private:	   List<int>^ airqdataCIA = gcnew List<int>();
	private:	   List<int>^ airqdataFACI = gcnew List<int>();
	private:	   List<int>^ airqdataBIBLIO = gcnew List<int>();
	private:	   List<int>^ airqdataTINKUY = gcnew List<int>();

	private: double meanTempTINKUY =0;
	private: double meanTempFACI = 0;
	private: double meanTempCIA = 0;
	private: double meanTempBIBLIO = 0;

	private: double meanHumTINKUY = 0;
	private: double meanHumFACI = 0;
	private: double meanHumCIA = 0;
	private: double meanHumBIBLIO = 0;

	private: double meanCOTINKUY = 0;
	private: double meanCOFACI = 0;
	private: double meanCOCIA = 0;
	private: double meanCOBIBLIO = 0;

	private: double meanAirqTINKUY = 0;
	private: double meanAirqFACI = 0;
	private: double meanAirqCIA = 0;
	private: double meanAirqBIBLIO = 0;

	private: int maxTempTINKUY = 0;
	private: int maxTempFACI = 0;
	private: int maxTempCIA = 0;
	private: int maxTempBIBLIO = 0;

	private: int maxHumTINKUY = 0;
	private: int maxHumFACI = 0;
	private: int maxHumCIA = 0;
	private: int maxHumBIBLIO = 0;

	private: int maxCOTINKUY = 0;
	private: int maxCOFACI = 0;
	private: int maxCOCIA = 0;
	private: int maxCOBIBLIO = 0;

	private: int maxAirqTINKUY = 0;
	private: int maxAirqFACI = 0;
	private: int maxAirqCIA = 0;
	private: int maxAirqBIBLIO = 0;

	private: int minTempTINKUY = 0;
	private: int minTempFACI = 0;
	private: int minTempCIA = 0;
	private: int minTempBIBLIO = 0;

	private: int minHumTINKUY = 0;
	private: int minHumFACI = 0;
	private: int minHumCIA = 0;
	private: int minHumBIBLIO = 0;

	private: int minCOTINKUY = 0;
	private: int minCOFACI = 0;
	private: int minCOCIA = 0;
	private: int minCOBIBLIO = 0;

	private: int minAirqTINKUY = 0;
	private: int minAirqFACI = 0;
	private: int minAirqCIA = 0;
	private: int minAirqBIBLIO = 0;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btnMean;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chHum;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chCO;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chAir;
	private: System::Windows::Forms::Button^ btnMin;
	private: System::Windows::Forms::Button^ btnMax;





	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

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
			this->chTemp = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btnMean = (gcnew System::Windows::Forms::Button());
			this->chHum = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chCO = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chAir = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->btnMin = (gcnew System::Windows::Forms::Button());
			this->btnMax = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chTemp))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chHum))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chCO))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chAir))->BeginInit();
			this->SuspendLayout();
			// 
			// chTemp
			// 
			chartArea1->Name = L"ChartArea1";
			this->chTemp->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chTemp->Legends->Add(legend1);
			this->chTemp->Location = System::Drawing::Point(29, 34);
			this->chTemp->Name = L"chTemp";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series1->Legend = L"Legend1";
			series1->Name = L"Temp";
			this->chTemp->Series->Add(series1);
			this->chTemp->Size = System::Drawing::Size(221, 206);
			this->chTemp->TabIndex = 0;
			this->chTemp->Text = L"chart1";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(29, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(67, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Temperatura";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(354, 15);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Humedad ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(29, 266);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(46, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"NivelCO";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(354, 266);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(60, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"CalidadAire";
			// 
			// btnMean
			// 
			this->btnMean->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnMean->ForeColor = System::Drawing::SystemColors::Control;
			this->btnMean->Location = System::Drawing::Point(647, 34);
			this->btnMean->Name = L"btnMean";
			this->btnMean->Size = System::Drawing::Size(135, 66);
			this->btnMean->TabIndex = 8;
			this->btnMean->Text = L"Valores Promedio";
			this->btnMean->UseVisualStyleBackColor = false;
			this->btnMean->Click += gcnew System::EventHandler(this, &NewPie::btnMean_Click);
			// 
			// chHum
			// 
			chartArea2->Name = L"ChartArea1";
			this->chHum->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chHum->Legends->Add(legend2);
			this->chHum->Location = System::Drawing::Point(346, 34);
			this->chHum->Name = L"chHum";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series2->Legend = L"Legend1";
			series2->Name = L"Hum";
			this->chHum->Series->Add(series2);
			this->chHum->Size = System::Drawing::Size(221, 206);
			this->chHum->TabIndex = 9;
			this->chHum->Text = L"chart1";
			// 
			// chCO
			// 
			chartArea3->Name = L"ChartArea1";
			this->chCO->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chCO->Legends->Add(legend3);
			this->chCO->Location = System::Drawing::Point(29, 315);
			this->chCO->Name = L"chCO";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series3->Legend = L"Legend1";
			series3->Name = L"CO";
			this->chCO->Series->Add(series3);
			this->chCO->Size = System::Drawing::Size(221, 206);
			this->chCO->TabIndex = 10;
			this->chCO->Text = L"chart1";
			// 
			// chAir
			// 
			chartArea4->Name = L"ChartArea1";
			this->chAir->ChartAreas->Add(chartArea4);
			legend4->Name = L"Legend1";
			this->chAir->Legends->Add(legend4);
			this->chAir->Location = System::Drawing::Point(346, 315);
			this->chAir->Name = L"chAir";
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series4->Legend = L"Legend1";
			series4->Name = L"Airq";
			this->chAir->Series->Add(series4);
			this->chAir->Size = System::Drawing::Size(221, 206);
			this->chAir->TabIndex = 11;
			this->chAir->Text = L"chart1";
			// 
			// btnMin
			// 
			this->btnMin->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnMin->ForeColor = System::Drawing::SystemColors::Control;
			this->btnMin->Location = System::Drawing::Point(647, 160);
			this->btnMin->Name = L"btnMin";
			this->btnMin->Size = System::Drawing::Size(135, 66);
			this->btnMin->TabIndex = 12;
			this->btnMin->Text = L"Valores Mínimos";
			this->btnMin->UseVisualStyleBackColor = false;
			this->btnMin->Click += gcnew System::EventHandler(this, &NewPie::btnMin_Click);
			// 
			// btnMax
			// 
			this->btnMax->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnMax->ForeColor = System::Drawing::SystemColors::Control;
			this->btnMax->Location = System::Drawing::Point(647, 289);
			this->btnMax->Name = L"btnMax";
			this->btnMax->Size = System::Drawing::Size(135, 63);
			this->btnMax->TabIndex = 13;
			this->btnMax->Text = L"Valores Máximo";
			this->btnMax->UseVisualStyleBackColor = false;
			this->btnMax->Click += gcnew System::EventHandler(this, &NewPie::btnMax_Click);
			// 
			// NewPie
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(820, 518);
			this->Controls->Add(this->btnMax);
			this->Controls->Add(this->btnMin);
			this->Controls->Add(this->chAir);
			this->Controls->Add(this->chCO);
			this->Controls->Add(this->chHum);
			this->Controls->Add(this->btnMean);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->chTemp);
			this->Name = L"NewPie";
			this->Text = L"NewPie";
			this->Load += gcnew System::EventHandler(this, &NewPie::NewPie_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chTemp))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chHum))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chCO))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chAir))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void NewPie_Load(System::Object^ sender, System::EventArgs^ e) {

		for each (int index in indexdataCIA)
		{
			tempdataCIA->Add(tempdata[index]);
			humdataCIA->Add(humdata[index]);
			codataCIA->Add(codata[index]);
			airqdataCIA->Add(airqdata[index]);
			//datetimeCIA->Add(datetimedata[index]);
		}

		for each (int index in indexdataFACI)
		{
			tempdataFACI->Add(tempdata[index]);
			humdataFACI->Add(humdata[index]);
			codataFACI->Add(codata[index]);
			airqdataFACI->Add(airqdata[index]);
			//datetimeFACI->Add(datetimedata[index]);
		}

		for each (int index in indexdataBIBLIO)
		{
			tempdataBIBLIO->Add(tempdata[index]);
			humdataBIBLIO->Add(humdata[index]);
			codataBIBLIO->Add(codata[index]);
			airqdataBIBLIO->Add(airqdata[index]);
			//datetimeBIBLIO->Add(datetimedata[index]);
		}

		for each (int index in indexdataTINKUY)
		{
			tempdataTINKUY->Add(tempdata[index]);
			humdataTINKUY->Add(humdata[index]);
			codataTINKUY->Add(codata[index]);
			airqdataTINKUY->Add(airqdata[index]);
			//datetimeTINKUY->Add(datetimedata[index]);
		}
	}
    void refresh() {
		chTemp->Series["Temp"]->Points->Clear();
		chTemp->Update();
		chTemp->Refresh();

		chHum->Series["Hum"]->Points->Clear();
		chHum->Update();
		chHum->Refresh();

		chCO->Series["CO"]->Points->Clear();
		chCO->Update();
		chCO->Refresh();

		chAir->Series["Airq"]->Points->Clear();
		chAir->Update();
		chAir->Refresh();

	}
	private: System::Void btnMean_Click(System::Object^ sender, System::EventArgs^ e) {
		refresh();
		meanTempTINKUY =fxmean(tempdataTINKUY);
		meanTempBIBLIO = fxmean(tempdataBIBLIO);
		meanTempCIA = fxmean(tempdataCIA);
		meanTempFACI = fxmean(tempdataFACI);

		meanHumTINKUY = fxmean(humdataTINKUY);
		meanHumBIBLIO = fxmean(humdataBIBLIO);
		meanHumCIA = fxmean(humdataCIA);
		meanHumFACI = fxmean(humdataFACI);

		meanCOTINKUY = fxmean(codataTINKUY);
		meanCOBIBLIO = fxmean(codataBIBLIO);
		meanCOCIA = fxmean(codataCIA);
		meanCOFACI = fxmean(codataFACI);

		meanAirqTINKUY = fxmean(airqdataTINKUY);
		meanAirqBIBLIO = fxmean(airqdataBIBLIO);
		meanAirqCIA = fxmean(airqdataCIA);
		meanAirqFACI = fxmean(airqdataFACI);

		array<double>^ tempArray = gcnew array<double>(4) {meanTempTINKUY,meanTempFACI,meanTempBIBLIO,meanTempCIA};
		array<double>^ humArray = gcnew array<double>(4) { meanHumTINKUY, meanHumFACI, meanHumBIBLIO, meanHumCIA };
		array<double>^ coArray = gcnew array<double>(4) { meanCOTINKUY, meanCOFACI, meanCOBIBLIO, meanCOCIA };
		array<double>^ airqArray = gcnew array<double>(4) { meanAirqTINKUY, meanAirqFACI, meanAirqBIBLIO, meanAirqCIA };
		array<String^>^ nameArray = gcnew array<String^>(4) { "TINKUY", "FACI", "BIBLIO", "CIA" };


		for (int i = 0; i < 4; i++) {
			chTemp->Series["Temp"]->Points->Add(tempArray[i]);
			chTemp->Series["Temp"]->Points[i]->LegendText=(nameArray[i]);
			chTemp->Series["Temp"]->Points[i]->Label = Convert::ToString(tempArray[i]);

			chHum->Series["Hum"]->Points->Add(humArray[i]);
			chHum->Series["Hum"]->Points[i]->LegendText = (nameArray[i]);
			chHum->Series["Hum"]->Points[i]->Label = Convert::ToString(humArray[i]);

			chCO->Series["CO"]->Points->Add(coArray[i]);
			chCO->Series["CO"]->Points[i]->LegendText = (nameArray[i]);
			chCO->Series["CO"]->Points[i]->Label = Convert::ToString(coArray[i]);

			chAir->Series["Airq"]->Points->Add(airqArray[i]);
			chAir->Series["Airq"]->Points[i]->LegendText = (nameArray[i]);
			chAir->Series["Airq"]->Points[i]->Label = Convert::ToString(airqArray[i]);
		}

	}

	double fxmean(List<int>^ data) {
		int sum = 0;
		for each(int i in data){
			sum += i;
		}
		double mean = static_cast<double>(sum) / data->Count;
		return Math::Round(mean, 2);
	}
private: System::Void btnMin_Click(System::Object^ sender, System::EventArgs^ e) {
	refresh();

	minTempTINKUY = fxmin(tempdataTINKUY);
	minTempBIBLIO = fxmin(tempdataBIBLIO);
	minTempCIA = fxmin(tempdataCIA);
	minTempFACI = fxmin(tempdataFACI);

	minHumTINKUY = fxmin(humdataTINKUY);
	minHumBIBLIO = fxmin(humdataBIBLIO);
	minHumCIA = fxmin(humdataCIA);
	minHumFACI = fxmin(humdataFACI);

	minCOTINKUY = fxmin(codataTINKUY);
	minCOBIBLIO = fxmin(codataBIBLIO);
	minCOCIA = fxmin(codataCIA);
	minCOFACI = fxmin(codataFACI);

	minAirqTINKUY = fxmin(airqdataTINKUY);
	minAirqBIBLIO = fxmin(airqdataBIBLIO);
	minAirqCIA = fxmin(airqdataCIA);
	minAirqFACI = fxmin(airqdataFACI);

	array<double>^ tempArray = gcnew array<double>(4) { minTempTINKUY, minTempFACI, minTempBIBLIO, minTempCIA };
	array<double>^ humArray = gcnew array<double>(4) { minHumTINKUY, minHumFACI, minHumBIBLIO, minHumCIA };
	array<double>^ coArray = gcnew array<double>(4) { minCOTINKUY, minCOFACI, minCOBIBLIO, minCOCIA };
	array<double>^ airqArray = gcnew array<double>(4) { minAirqTINKUY, minAirqFACI, minAirqBIBLIO, minAirqCIA };
	array<String^>^ nameArray = gcnew array<String^>(4) { "TINKUY", "FACI", "BIBLIO", "CIA" };


	for (int i = 0; i < 4; i++) {
		chTemp->Series["Temp"]->Points->Add(tempArray[i]);
		chTemp->Series["Temp"]->Points[i]->LegendText = (nameArray[i]);
		chTemp->Series["Temp"]->Points[i]->Label = Convert::ToString(tempArray[i]);

		chHum->Series["Hum"]->Points->Add(humArray[i]);
		chHum->Series["Hum"]->Points[i]->LegendText = (nameArray[i]);
		chHum->Series["Hum"]->Points[i]->Label = Convert::ToString(humArray[i]);

		chCO->Series["CO"]->Points->Add(coArray[i]);
		chCO->Series["CO"]->Points[i]->LegendText = (nameArray[i]);
		chCO->Series["CO"]->Points[i]->Label = Convert::ToString(coArray[i]);

		chAir->Series["Airq"]->Points->Add(airqArray[i]);
		chAir->Series["Airq"]->Points[i]->LegendText = (nameArray[i]);
		chAir->Series["Airq"]->Points[i]->Label = Convert::ToString(airqArray[i]);
	}
}

int fxmin(List<int>^ data) {
	int min = 1000;
	for each (int i in data) {
		if (i<min) {
			min = i;
		}
	}
	return min;
}
private: System::Void btnMax_Click(System::Object^ sender, System::EventArgs^ e) {
	refresh();

	maxTempTINKUY = fxmax(tempdataTINKUY);
	maxTempBIBLIO = fxmax(tempdataBIBLIO);
	maxTempCIA = fxmax(tempdataCIA);
	maxTempFACI = fxmax(tempdataFACI);

	maxHumTINKUY = fxmax(humdataTINKUY);
	maxHumBIBLIO = fxmax(humdataBIBLIO);
	maxHumCIA = fxmax(humdataCIA);
	maxHumFACI = fxmax(humdataFACI);

	maxCOTINKUY = fxmax(codataTINKUY);
	maxCOBIBLIO = fxmax(codataBIBLIO);
	maxCOCIA = fxmax(codataCIA);
	maxCOFACI = fxmax(codataFACI);

	maxAirqTINKUY = fxmax(airqdataTINKUY);
	maxAirqBIBLIO = fxmax(airqdataBIBLIO);
	maxAirqCIA = fxmax(airqdataCIA);
	maxAirqFACI = fxmax(airqdataFACI);

	array<double>^ tempArray = gcnew array<double>(4) { maxTempTINKUY, maxTempFACI, maxTempBIBLIO, maxTempCIA };
	array<double>^ humArray = gcnew array<double>(4) { maxHumTINKUY, maxHumFACI, maxHumBIBLIO, maxHumCIA };
	array<double>^ coArray = gcnew array<double>(4) { maxCOTINKUY, maxCOFACI, maxCOBIBLIO, maxCOCIA };
	array<double>^ airqArray = gcnew array<double>(4) { maxAirqTINKUY, maxAirqFACI, maxAirqBIBLIO, maxAirqCIA };
	array<String^>^ nameArray = gcnew array<String^>(4) { "TINKUY", "FACI", "BIBLIO", "CIA" };


	for (int i = 0; i < 4; i++) {
		chTemp->Series["Temp"]->Points->Add(tempArray[i]);
		chTemp->Series["Temp"]->Points[i]->LegendText = (nameArray[i]);
		chTemp->Series["Temp"]->Points[i]->Label = Convert::ToString(tempArray[i]);

		chHum->Series["Hum"]->Points->Add(humArray[i]);
		chHum->Series["Hum"]->Points[i]->LegendText = (nameArray[i]);
		chHum->Series["Hum"]->Points[i]->Label = Convert::ToString(humArray[i]);

		chCO->Series["CO"]->Points->Add(coArray[i]);
		chCO->Series["CO"]->Points[i]->LegendText = (nameArray[i]);
		chCO->Series["CO"]->Points[i]->Label = Convert::ToString(coArray[i]);

		chAir->Series["Airq"]->Points->Add(airqArray[i]);
		chAir->Series["Airq"]->Points[i]->LegendText = (nameArray[i]);
		chAir->Series["Airq"]->Points[i]->Label = Convert::ToString(airqArray[i]);
	}
}

int fxmax(List<int>^ data) {
	int max = 0;
	for each (int i in data) {
		if (max<i) {
			max = i;
		}
	}
	return max;
}
};
}
