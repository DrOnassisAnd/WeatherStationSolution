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
	/// Resumen de TemperaturaReportForm
	/// </summary>
	public ref class TemperaturaReportForm : public System::Windows::Forms::Form
	{
	public:
		TemperaturaReportForm(void)
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
		~TemperaturaReportForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	protected:

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
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(0, 0);
			this->chart1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series1->Legend = L"Legend1";
			series1->Name = L"Temperatura";
			series1->YValuesPerPoint = 2;
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(692, 375);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &TemperaturaReportForm::chart1_Click);
			// 
			// TemperaturaReportForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(701, 360);
			this->Controls->Add(this->chart1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"TemperaturaReportForm";
			this->Text = L"TemperaturaReportForm";
			this->Load += gcnew System::EventHandler(this, &TemperaturaReportForm::TemperaturaReportForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) {


	}
	private: System::Void TemperaturaReportForm_Load(System::Object^ sender, System::EventArgs^ e) {

		List<Ambiente^>^ sensorData = Controller::Controller::QueryAmbienteData();
		for (int i = 0; i <sensorData->Count; i++) {
			if (sensorData[i]->UbicacionGeografica == "CIA") {
				chart1->Series["Temperatura"]->Points->Add(dynamic_cast<SensorTemperaturaHumedad^>(sensorData[i]->DataBase[0])->Temperatura);
				chart1->Series["Temperatura"]->Points[i]->AxisLabel = (sensorData[i]->TiempoMedicion);
				//chart1->Series["Temperatura"]->Points[i]->Label = Convert::ToString((dynamic_cast<SensorTemperaturaHumedad^>(sensorData[i]->DataBase[0])->Temperatura));
			}
			else {
				chart1->Series["Temperatura"]->Points->Add(20);
				chart1->Series["Temperatura"]->Points[i]->AxisLabel = (sensorData[i]->TiempoMedicion);
			}
			
		}
	}
	};
}
