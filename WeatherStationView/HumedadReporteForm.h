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
	/// Resumen de HumedadReporteForm
	/// </summary>
	public ref class HumedadReporteForm : public System::Windows::Forms::Form
	{
	public:
		HumedadReporteForm(void)
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
		~HumedadReporteForm()
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
			this->chart1->Location = System::Drawing::Point(22, 12);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series1->Legend = L"Legend1";
			series1->Name = L"Humedad";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(914, 447);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// HumedadReporteForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(948, 439);
			this->Controls->Add(this->chart1);
			this->Name = L"HumedadReporteForm";
			this->Text = L"HumedadReporteForm";
			this->Load += gcnew System::EventHandler(this, &HumedadReporteForm::HumedadReporteForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
		///zzzz

#pragma endregion
	private: System::Void HumedadReporteForm_Load(System::Object^ sender, System::EventArgs^ e) {
		List<Ambiente^>^ Humedad = Controller::Controller::QueryAmbienteData();
		for (int i = 0; i < Humedad->Count; i++) {
			chart1->Series["Humedad"]->Points->Add(dynamic_cast<SensorTemperaturaHumedad^>(Humedad[i]->DataBase[0])->Humedad);
			chart1->Series["Humedad"]->Points[i]->AxisLabel = (Humedad[i]->TiempoMedicion);
			chart1->Series["Humedad"]->Points[i]->Label = Convert::ToString((dynamic_cast<SensorTemperaturaHumedad^>(Humedad[i]->DataBase[0])->Humedad));
		}
	}
	};
}
