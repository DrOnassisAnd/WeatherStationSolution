#pragma once

namespace WeatherStationView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class BasicGraphics : public System::Windows::Forms::Form
	{
	public:
		BasicGraphics(void)
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
		~BasicGraphics()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chTemp;
	protected:
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chAirq;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chHum;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chCO;

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
			this->chAirq = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chHum = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chCO = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chTemp))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chAirq))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chHum))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chCO))->BeginInit();
			this->SuspendLayout();
			// 
			// chTemp
			// 
			chartArea1->Name = L"ChartArea1";
			this->chTemp->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chTemp->Legends->Add(legend1);
			this->chTemp->Location = System::Drawing::Point(32, 24);
			this->chTemp->Name = L"chTemp";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chTemp->Series->Add(series1);
			this->chTemp->Size = System::Drawing::Size(204, 160);
			this->chTemp->TabIndex = 0;
			this->chTemp->Text = L"chart1";
			this->chTemp->TextAntiAliasingQuality = System::Windows::Forms::DataVisualization::Charting::TextAntiAliasingQuality::Normal;
			// 
			// chAirq
			// 
			chartArea2->Name = L"ChartArea1";
			this->chAirq->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chAirq->Legends->Add(legend2);
			this->chAirq->Location = System::Drawing::Point(298, 208);
			this->chAirq->Name = L"chAirq";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series2->Legend = L"Legend1";
			series2->Name = L"Series1";
			this->chAirq->Series->Add(series2);
			this->chAirq->Size = System::Drawing::Size(204, 160);
			this->chAirq->TabIndex = 1;
			this->chAirq->Text = L"chart1";
			// 
			// chHum
			// 
			chartArea3->Name = L"ChartArea1";
			this->chHum->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chHum->Legends->Add(legend3);
			this->chHum->Location = System::Drawing::Point(32, 208);
			this->chHum->Name = L"chHum";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series3->Legend = L"Legend1";
			series3->Name = L"Series1";
			this->chHum->Series->Add(series3);
			this->chHum->Size = System::Drawing::Size(204, 160);
			this->chHum->TabIndex = 2;
			this->chHum->Text = L"chart1";
			// 
			// chCO
			// 
			chartArea4->Name = L"ChartArea1";
			this->chCO->ChartAreas->Add(chartArea4);
			legend4->Name = L"Legend1";
			this->chCO->Legends->Add(legend4);
			this->chCO->Location = System::Drawing::Point(298, 24);
			this->chCO->Name = L"chCO";
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series4->Legend = L"Legend1";
			series4->Name = L"Series1";
			series4->YValuesPerPoint = 4;
			this->chCO->Series->Add(series4);
			this->chCO->Size = System::Drawing::Size(204, 160);
			this->chCO->TabIndex = 3;
			this->chCO->Text = L"chart1";
			// 
			// BasicGraphics
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(555, 393);
			this->Controls->Add(this->chCO);
			this->Controls->Add(this->chHum);
			this->Controls->Add(this->chAirq);
			this->Controls->Add(this->chTemp);
			this->Name = L"BasicGraphics";
			this->Text = L"BasicGraphics";
			this->Load += gcnew System::EventHandler(this, &BasicGraphics::BasicGraphics_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chTemp))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chAirq))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chHum))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chCO))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void BasicGraphics_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
