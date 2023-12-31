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
	using namespace System::Xml;
	using namespace System::IO;
	using namespace Model;

	/// <summary>
	/// Resumen de SensorsReport
	/// </summary>
	public ref class SensorsReport : public System::Windows::Forms::Form
	{
	public:
		SensorsReport(User^ User)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
			this->user = User;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~SensorsReport()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: User^ user;
	private: List<Ambiente^>^ sensorData = Controller::Controller::QueryAmbienteData();
	private: List<Ambiente^>^ ambiente_aux;
	private: List<Ambiente^>^ ambiente_aux_2;
	private: List<String^>^ datetimeCIA = gcnew List<String^>();
	private: List<String^>^ solohoraslistaCIA = gcnew List<String^>();
	private: List<String^>^ soloFechaListaCIA = gcnew List<String^>();

	private: List<String^>^ datetimeFACI = gcnew List<String^>();

	private: List<String^>^ solohoraslistaFACI = gcnew List<String^>();
	private: List<String^>^ soloFechaListaFACI = gcnew List<String^>();

	private: List<String^>^ datetimeBIBLIO = gcnew List<String^>();

	private: List<String^>^ solohoraslistaBIBLIO = gcnew List<String^>();
	private: List<String^>^ soloFechaListaBIBLIO = gcnew List<String^>();

	private: List<String^>^ datetimeTINKUY = gcnew List<String^>();

	private: List<String^>^ solohoraslistaTINKUY = gcnew List<String^>();
	private: List<String^>^ soloFechaListaTINKUY = gcnew List<String^>();

	private: int flag = 0;
	private: int minValue = 0;
	private: int maxValue = 0;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ UnidadTempdgv;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Fecha;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvHora;
	private: System::Windows::Forms::Button^ CerrarBtn;
	private: System::Windows::Forms::Button^ BuscarBtn;
	private: System::Windows::Forms::TextBox^ MinBox;

	private: System::Windows::Forms::ComboBox^ CriterioBox;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ MaxBox;

	private: System::Windows::Forms::Label^ MinLabel;
	private: System::Windows::Forms::Label^ MaxLabel;
	private: System::Windows::Forms::Button^ RestablecerBtn;
	private: System::Windows::Forms::TextBox^ HoraInicial;

	private: System::Windows::Forms::TextBox^ MinutoInicial;
	private: System::Windows::Forms::TextBox^ MinutoFinal;





	private: System::Windows::Forms::TextBox^ HoraFinal;

	private: System::Windows::Forms::ComboBox^ AMPM1;
	private: System::Windows::Forms::ComboBox^ AMPM2;
	private: System::Windows::Forms::Label^ dosPuntos1;
	private: System::Windows::Forms::Label^ dosPuntos2;




	private: System::Windows::Forms::DateTimePicker^ dtp1;
	private: System::Windows::Forms::DateTimePicker^ dtp2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;

	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart4;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart3;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;



	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::CheckBox^ FACIChk;
	private: System::Windows::Forms::CheckBox^ TinkuyChk;


	private: System::Windows::Forms::CheckBox^ BiblioChk;

	private: System::Windows::Forms::CheckBox^ CIAChk;
private: System::Windows::Forms::CheckBox^ isFahrenheit;
private: System::Windows::Forms::Button^ CSVBtn;







	protected:









	protected:

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SensorsReport::typeid));
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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->UnidadTempdgv = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Fecha = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvHora = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CerrarBtn = (gcnew System::Windows::Forms::Button());
			this->BuscarBtn = (gcnew System::Windows::Forms::Button());
			this->MinBox = (gcnew System::Windows::Forms::TextBox());
			this->CriterioBox = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->MaxBox = (gcnew System::Windows::Forms::TextBox());
			this->MinLabel = (gcnew System::Windows::Forms::Label());
			this->MaxLabel = (gcnew System::Windows::Forms::Label());
			this->RestablecerBtn = (gcnew System::Windows::Forms::Button());
			this->HoraInicial = (gcnew System::Windows::Forms::TextBox());
			this->MinutoInicial = (gcnew System::Windows::Forms::TextBox());
			this->MinutoFinal = (gcnew System::Windows::Forms::TextBox());
			this->HoraFinal = (gcnew System::Windows::Forms::TextBox());
			this->AMPM1 = (gcnew System::Windows::Forms::ComboBox());
			this->AMPM2 = (gcnew System::Windows::Forms::ComboBox());
			this->dosPuntos1 = (gcnew System::Windows::Forms::Label());
			this->dosPuntos2 = (gcnew System::Windows::Forms::Label());
			this->dtp1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dtp2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->chart4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->FACIChk = (gcnew System::Windows::Forms::CheckBox());
			this->TinkuyChk = (gcnew System::Windows::Forms::CheckBox());
			this->BiblioChk = (gcnew System::Windows::Forms::CheckBox());
			this->CIAChk = (gcnew System::Windows::Forms::CheckBox());
			this->isFahrenheit = (gcnew System::Windows::Forms::CheckBox());
			this->CSVBtn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->Column6,
					this->Column1, this->UnidadTempdgv, this->Column2, this->Column3, this->Column4, this->Column5, this->Fecha, this->dgvHora
			});
			resources->ApplyResources(this->dataGridView1, L"dataGridView1");
			this->dataGridView1->Name = L"dataGridView1";
			// 
			// Column6
			// 
			resources->ApplyResources(this->Column6, L"Column6");
			this->Column6->Name = L"Column6";
			// 
			// Column1
			// 
			resources->ApplyResources(this->Column1, L"Column1");
			this->Column1->Name = L"Column1";
			// 
			// UnidadTempdgv
			// 
			resources->ApplyResources(this->UnidadTempdgv, L"UnidadTempdgv");
			this->UnidadTempdgv->Name = L"UnidadTempdgv";
			// 
			// Column2
			// 
			resources->ApplyResources(this->Column2, L"Column2");
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			resources->ApplyResources(this->Column3, L"Column3");
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			resources->ApplyResources(this->Column4, L"Column4");
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			resources->ApplyResources(this->Column5, L"Column5");
			this->Column5->Name = L"Column5";
			// 
			// Fecha
			// 
			resources->ApplyResources(this->Fecha, L"Fecha");
			this->Fecha->Name = L"Fecha";
			// 
			// dgvHora
			// 
			resources->ApplyResources(this->dgvHora, L"dgvHora");
			this->dgvHora->Name = L"dgvHora";
			// 
			// CerrarBtn
			// 
			resources->ApplyResources(this->CerrarBtn, L"CerrarBtn");
			this->CerrarBtn->Name = L"CerrarBtn";
			this->CerrarBtn->UseVisualStyleBackColor = true;
			this->CerrarBtn->Click += gcnew System::EventHandler(this, &SensorsReport::CerrarBtn_Click);
			// 
			// BuscarBtn
			// 
			resources->ApplyResources(this->BuscarBtn, L"BuscarBtn");
			this->BuscarBtn->Name = L"BuscarBtn";
			this->BuscarBtn->UseVisualStyleBackColor = true;
			this->BuscarBtn->Click += gcnew System::EventHandler(this, &SensorsReport::Buscar_Click);
			// 
			// MinBox
			// 
			resources->ApplyResources(this->MinBox, L"MinBox");
			this->MinBox->Name = L"MinBox";
			// 
			// CriterioBox
			// 
			this->CriterioBox->FormattingEnabled = true;
			this->CriterioBox->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				resources->GetString(L"CriterioBox.Items"), resources->GetString(L"CriterioBox.Items1"),
					resources->GetString(L"CriterioBox.Items2"), resources->GetString(L"CriterioBox.Items3"), resources->GetString(L"CriterioBox.Items4")
			});
			resources->ApplyResources(this->CriterioBox, L"CriterioBox");
			this->CriterioBox->Name = L"CriterioBox";
			this->CriterioBox->SelectedIndexChanged += gcnew System::EventHandler(this, &SensorsReport::EleccionCriterio);
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->Name = L"label1";
			// 
			// MaxBox
			// 
			resources->ApplyResources(this->MaxBox, L"MaxBox");
			this->MaxBox->Name = L"MaxBox";
			// 
			// MinLabel
			// 
			resources->ApplyResources(this->MinLabel, L"MinLabel");
			this->MinLabel->Name = L"MinLabel";
			// 
			// MaxLabel
			// 
			resources->ApplyResources(this->MaxLabel, L"MaxLabel");
			this->MaxLabel->Name = L"MaxLabel";
			// 
			// RestablecerBtn
			// 
			resources->ApplyResources(this->RestablecerBtn, L"RestablecerBtn");
			this->RestablecerBtn->Name = L"RestablecerBtn";
			this->RestablecerBtn->UseVisualStyleBackColor = true;
			this->RestablecerBtn->Click += gcnew System::EventHandler(this, &SensorsReport::Restablecer_Click);
			// 
			// HoraInicial
			// 
			resources->ApplyResources(this->HoraInicial, L"HoraInicial");
			this->HoraInicial->Name = L"HoraInicial";
			// 
			// MinutoInicial
			// 
			resources->ApplyResources(this->MinutoInicial, L"MinutoInicial");
			this->MinutoInicial->Name = L"MinutoInicial";
			// 
			// MinutoFinal
			// 
			resources->ApplyResources(this->MinutoFinal, L"MinutoFinal");
			this->MinutoFinal->Name = L"MinutoFinal";
			// 
			// HoraFinal
			// 
			resources->ApplyResources(this->HoraFinal, L"HoraFinal");
			this->HoraFinal->Name = L"HoraFinal";
			// 
			// AMPM1
			// 
			this->AMPM1->FormattingEnabled = true;
			this->AMPM1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { resources->GetString(L"AMPM1.Items"), resources->GetString(L"AMPM1.Items1") });
			resources->ApplyResources(this->AMPM1, L"AMPM1");
			this->AMPM1->Name = L"AMPM1";
			// 
			// AMPM2
			// 
			this->AMPM2->FormattingEnabled = true;
			this->AMPM2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { resources->GetString(L"AMPM2.Items"), resources->GetString(L"AMPM2.Items1") });
			resources->ApplyResources(this->AMPM2, L"AMPM2");
			this->AMPM2->Name = L"AMPM2";
			// 
			// dosPuntos1
			// 
			resources->ApplyResources(this->dosPuntos1, L"dosPuntos1");
			this->dosPuntos1->Name = L"dosPuntos1";
			// 
			// dosPuntos2
			// 
			resources->ApplyResources(this->dosPuntos2, L"dosPuntos2");
			this->dosPuntos2->Name = L"dosPuntos2";
			// 
			// dtp1
			// 
			resources->ApplyResources(this->dtp1, L"dtp1");
			this->dtp1->Name = L"dtp1";
			// 
			// dtp2
			// 
			resources->ApplyResources(this->dtp2, L"dtp2");
			this->dtp2->Name = L"dtp2";
			// 
			// checkBox1
			// 
			resources->ApplyResources(this->checkBox1, L"checkBox1");
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &SensorsReport::SoloFechas);
			// 
			// checkBox2
			// 
			resources->ApplyResources(this->checkBox2, L"checkBox2");
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &SensorsReport::SoloUnDia);
			// 
			// chart4
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart4->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart4->Legends->Add(legend1);
			resources->ApplyResources(this->chart4, L"chart4");
			this->chart4->Name = L"chart4";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::FastPoint;
			series1->Legend = L"Legend1";
			series1->Name = L"CIA";
			series1->YValuesPerPoint = 2;
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series2->Legend = L"Legend1";
			series2->Name = L"FACI";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::FastPoint;
			series3->Legend = L"Legend1";
			series3->Name = L"TINKUY";
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::FastPoint;
			series4->Legend = L"Legend1";
			series4->Name = L"BIBLIOTECA";
			this->chart4->Series->Add(series1);
			this->chart4->Series->Add(series2);
			this->chart4->Series->Add(series3);
			this->chart4->Series->Add(series4);
			// 
			// chart3
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart3->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart3->Legends->Add(legend2);
			resources->ApplyResources(this->chart3, L"chart3");
			this->chart3->Name = L"chart3";
			series5->ChartArea = L"ChartArea1";
			series5->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::FastPoint;
			series5->Legend = L"Legend1";
			series5->Name = L"CIA";
			series6->ChartArea = L"ChartArea1";
			series6->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::FastPoint;
			series6->Legend = L"Legend1";
			series6->Name = L"FACI";
			series7->ChartArea = L"ChartArea1";
			series7->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::FastPoint;
			series7->Legend = L"Legend1";
			series7->Name = L"TINKUY";
			series8->ChartArea = L"ChartArea1";
			series8->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::FastPoint;
			series8->Legend = L"Legend1";
			series8->Name = L"BIBLIOTECA";
			this->chart3->Series->Add(series5);
			this->chart3->Series->Add(series6);
			this->chart3->Series->Add(series7);
			this->chart3->Series->Add(series8);
			// 
			// chart2
			// 
			chartArea3->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chart2->Legends->Add(legend3);
			resources->ApplyResources(this->chart2, L"chart2");
			this->chart2->Name = L"chart2";
			series9->ChartArea = L"ChartArea1";
			series9->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::FastPoint;
			series9->Legend = L"Legend1";
			series9->Name = L"CIA";
			series10->ChartArea = L"ChartArea1";
			series10->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::FastPoint;
			series10->Legend = L"Legend1";
			series10->Name = L"FACI";
			series11->ChartArea = L"ChartArea1";
			series11->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::FastPoint;
			series11->Legend = L"Legend1";
			series11->Name = L"TINKUY";
			series12->ChartArea = L"ChartArea1";
			series12->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::FastPoint;
			series12->Legend = L"Legend1";
			series12->Name = L"BIBLIOTECA";
			this->chart2->Series->Add(series9);
			this->chart2->Series->Add(series10);
			this->chart2->Series->Add(series11);
			this->chart2->Series->Add(series12);
			// 
			// chart1
			// 
			chartArea4->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea4);
			legend4->Name = L"Legend1";
			this->chart1->Legends->Add(legend4);
			resources->ApplyResources(this->chart1, L"chart1");
			this->chart1->Name = L"chart1";
			series13->ChartArea = L"ChartArea1";
			series13->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::FastPoint;
			series13->Legend = L"Legend1";
			series13->Name = L"CIA";
			series14->ChartArea = L"ChartArea1";
			series14->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::FastPoint;
			series14->Legend = L"Legend1";
			series14->Name = L"FACI";
			series15->ChartArea = L"ChartArea1";
			series15->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series15->Legend = L"Legend1";
			series15->Name = L"TINKUY";
			series16->ChartArea = L"ChartArea1";
			series16->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::FastPoint;
			series16->Legend = L"Legend1";
			series16->Name = L"BIBLIOTECA";
			this->chart1->Series->Add(series13);
			this->chart1->Series->Add(series14);
			this->chart1->Series->Add(series15);
			this->chart1->Series->Add(series16);
			// 
			// FACIChk
			// 
			resources->ApplyResources(this->FACIChk, L"FACIChk");
			this->FACIChk->Checked = true;
			this->FACIChk->CheckState = System::Windows::Forms::CheckState::Checked;
			this->FACIChk->Name = L"FACIChk";
			this->FACIChk->UseVisualStyleBackColor = true;
			this->FACIChk->CheckedChanged += gcnew System::EventHandler(this, &SensorsReport::FACI_Check);
			// 
			// TinkuyChk
			// 
			resources->ApplyResources(this->TinkuyChk, L"TinkuyChk");
			this->TinkuyChk->Checked = true;
			this->TinkuyChk->CheckState = System::Windows::Forms::CheckState::Checked;
			this->TinkuyChk->Name = L"TinkuyChk";
			this->TinkuyChk->UseVisualStyleBackColor = true;
			this->TinkuyChk->CheckedChanged += gcnew System::EventHandler(this, &SensorsReport::TINKUY_Check);
			// 
			// BiblioChk
			// 
			resources->ApplyResources(this->BiblioChk, L"BiblioChk");
			this->BiblioChk->Checked = true;
			this->BiblioChk->CheckState = System::Windows::Forms::CheckState::Checked;
			this->BiblioChk->Name = L"BiblioChk";
			this->BiblioChk->UseVisualStyleBackColor = true;
			this->BiblioChk->CheckedChanged += gcnew System::EventHandler(this, &SensorsReport::BIBLIO_Check);
			// 
			// CIAChk
			// 
			resources->ApplyResources(this->CIAChk, L"CIAChk");
			this->CIAChk->Checked = true;
			this->CIAChk->CheckState = System::Windows::Forms::CheckState::Checked;
			this->CIAChk->Name = L"CIAChk";
			this->CIAChk->UseVisualStyleBackColor = true;
			this->CIAChk->CheckedChanged += gcnew System::EventHandler(this, &SensorsReport::CIA_Check);
			// 
			// isFahrenheit
			// 
			resources->ApplyResources(this->isFahrenheit, L"isFahrenheit");
			this->isFahrenheit->Name = L"isFahrenheit";
			this->isFahrenheit->UseVisualStyleBackColor = true;
			this->isFahrenheit->CheckedChanged += gcnew System::EventHandler(this, &SensorsReport::isFahrenheit_CheckedChanged);
			// 
			// CSVBtn
			// 
			resources->ApplyResources(this->CSVBtn, L"CSVBtn");
			this->CSVBtn->Name = L"CSVBtn";
			this->CSVBtn->UseVisualStyleBackColor = true;
			this->CSVBtn->Click += gcnew System::EventHandler(this, &SensorsReport::CSVBtn_Click);
			// 
			// SensorsReport
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->CSVBtn);
			this->Controls->Add(this->isFahrenheit);
			this->Controls->Add(this->CIAChk);
			this->Controls->Add(this->BiblioChk);
			this->Controls->Add(this->TinkuyChk);
			this->Controls->Add(this->FACIChk);
			this->Controls->Add(this->chart4);
			this->Controls->Add(this->chart3);
			this->Controls->Add(this->chart2);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->dtp2);
			this->Controls->Add(this->dtp1);
			this->Controls->Add(this->dosPuntos2);
			this->Controls->Add(this->dosPuntos1);
			this->Controls->Add(this->AMPM2);
			this->Controls->Add(this->AMPM1);
			this->Controls->Add(this->MinutoFinal);
			this->Controls->Add(this->HoraFinal);
			this->Controls->Add(this->MinutoInicial);
			this->Controls->Add(this->HoraInicial);
			this->Controls->Add(this->RestablecerBtn);
			this->Controls->Add(this->MaxLabel);
			this->Controls->Add(this->MinLabel);
			this->Controls->Add(this->MaxBox);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->CriterioBox);
			this->Controls->Add(this->MinBox);
			this->Controls->Add(this->CerrarBtn);
			this->Controls->Add(this->BuscarBtn);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"SensorsReport";
			this->Load += gcnew System::EventHandler(this, &SensorsReport::SensorsReportLoad);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Buscar_Click(System::Object^ sender, System::EventArgs^ e) {
		List<Ambiente^>^ ambiente_to_filter = gcnew List<Ambiente^>(); //lista a ser filtrada
		List<Ambiente^>^ ambiente_to_filter_2 = gcnew List<Ambiente^>(); //lista a ser filtrada
		if (CriterioBox->SelectedItem->ToString() == "Temperatura") {
			if (MinBox->Text != "" && MaxBox->Text != "") {
				if (Int32::TryParse(MinBox->Text, minValue) && Int32::TryParse(MaxBox->Text, maxValue)) {
					if ((maxValue > minValue) && minValue > 0) {
						//tabla
						for each (Ambiente ^ dato in ambiente_aux) {
							int temp = dynamic_cast<SensorTemperaturaHumedad^>(dato->DataBase[0])->Temperatura;
							if ((temp >= Int32::Parse(MinBox->Text)) && (temp <= Int32::Parse(MaxBox->Text))) {
								// El valor de Temperatura est� dentro del rango, agrega el dato filtrado a la nueva lista.
								ambiente_to_filter->Add(dato);
							}
						}
						for each (Ambiente ^ dato in ambiente_aux_2) {
							int temp = dynamic_cast<SensorTemperaturaHumedad^>(dato->DataBase[0])->Temperatura;
							if ((temp >= Int32::Parse(MinBox->Text)) && (temp <= Int32::Parse(MaxBox->Text))) {
								// El valor de Temperatura est� dentro del rango, agrega el dato filtrado a la nueva lista.
								ambiente_to_filter_2->Add(dato);
							}
						}

						//chart1: temp
						for (int i = 0; i < chart1->Series["CIA"]->Points->Count; i++) {
							int temp = chart1->Series["CIA"]->Points[i]->YValues[0];
							if ((temp >= Int32::Parse(MinBox->Text)) && (temp <= Int32::Parse(MaxBox->Text))) {
								chart1->Series["CIA"]->Points[i]->IsEmpty = false;
							}
							else {
								chart1->Series["CIA"]->Points[i]->IsEmpty = true;
							}
						}

						for (int i = 0; i < chart1->Series["FACI"]->Points->Count; i++) {
							int temp = chart1->Series["FACI"]->Points[i]->YValues[0];
							if ((temp >= Int32::Parse(MinBox->Text)) && (temp <= Int32::Parse(MaxBox->Text))) {
								chart1->Series["FACI"]->Points[i]->IsEmpty = false;
							}
							else {
								chart1->Series["FACI"]->Points[i]->IsEmpty = true;
							}
						}

						for (int i = 0; i < chart1->Series["BIBLIOTECA"]->Points->Count; i++) {
							int temp = chart1->Series["BIBLIOTECA"]->Points[i]->YValues[0];
							if ((temp >= Int32::Parse(MinBox->Text)) && (temp <= Int32::Parse(MaxBox->Text))) {
								chart1->Series["BIBLIOTECA"]->Points[i]->IsEmpty = false;
							}
							else {
								chart1->Series["BIBLIOTECA"]->Points[i]->IsEmpty = true;
							}
						}

						for (int i = 0; i < chart1->Series["TINKUY"]->Points->Count; i++) {
							int temp = chart1->Series["TINKUY"]->Points[i]->YValues[0];
							if ((temp >= Int32::Parse(MinBox->Text)) && (temp <= Int32::Parse(MaxBox->Text))) {
								chart1->Series["TINKUY"]->Points[i]->IsEmpty = false;
							}
							else {
								chart1->Series["TINKUY"]->Points[i]->IsEmpty = true;
							}
						}
						flag = 1;
					}
					else {
						MessageBox::Show("El dato menor no puede ser el mayor. Los datos deben ser enteros positivos.");
					}
				}
				else {
					MessageBox::Show("Los datos ingresados deben ser num�ricos");
				}
			}
			else {
				MessageBox::Show("Por favor complete los datos antes de filtrar.");
			}

		}
		
		else if (CriterioBox->SelectedItem->ToString() == "Humedad") {
			if (MinBox->Text != "" && MaxBox->Text != "") {
				if (Int32::TryParse(MinBox->Text, minValue) && Int32::TryParse(MaxBox->Text, maxValue)) {
					if ((maxValue > minValue) && minValue > 0) {
						for each (Ambiente ^ dato in ambiente_aux) {
							int humedad = dynamic_cast<SensorTemperaturaHumedad^>(dato->DataBase[0])->Humedad;
							if ((humedad >= Int32::Parse(MinBox->Text)) && (humedad <= Int32::Parse(MaxBox->Text))) {
								// El valor de Temperatura est� dentro del rango, agrega el dato filtrado a la nueva lista.
								ambiente_to_filter->Add(dato);
							}
						}
						for each (Ambiente ^ dato in ambiente_aux_2) {
							int humedad = dynamic_cast<SensorTemperaturaHumedad^>(dato->DataBase[0])->Humedad;
							if ((humedad >= Int32::Parse(MinBox->Text)) && (humedad <= Int32::Parse(MaxBox->Text))) {
								// El valor de Temperatura est� dentro del rango, agrega el dato filtrado a la nueva lista.
								ambiente_to_filter_2->Add(dato);
							}
						}

						//chart2... humedad
						for (int i = 0; i < chart2->Series["CIA"]->Points->Count; i++) {
							int humedad = chart2->Series["CIA"]->Points[i]->YValues[0];
							if ((humedad >= Int32::Parse(MinBox->Text)) && (humedad <= Int32::Parse(MaxBox->Text))) {
								chart2->Series["CIA"]->Points[i]->IsEmpty = false;
							}
							else {
								chart2->Series["CIA"]->Points[i]->IsEmpty = true;
							}
						}

						for (int i = 0; i < chart2->Series["FACI"]->Points->Count; i++) {
							int humedad = chart2->Series["FACI"]->Points[i]->YValues[0];
							if ((humedad >= Int32::Parse(MinBox->Text)) && (humedad <= Int32::Parse(MaxBox->Text))) {
								chart2->Series["FACI"]->Points[i]->IsEmpty = false;
							}
							else {
								chart2->Series["FACI"]->Points[i]->IsEmpty = true;
							}
						}

						for (int i = 0; i < chart2->Series["BIBLIOTECA"]->Points->Count; i++) {
							int humedad = chart2->Series["BIBLIOTECA"]->Points[i]->YValues[0];
							if ((humedad >= Int32::Parse(MinBox->Text)) && (humedad <= Int32::Parse(MaxBox->Text))) {
								chart2->Series["BIBLIOTECA"]->Points[i]->IsEmpty = false;
							}
							else {
								chart2->Series["BIBLIOTECA"]->Points[i]->IsEmpty = true;
							}
						}

						for (int i = 0; i < chart2->Series["TINKUY"]->Points->Count; i++) {
							int humedad = chart2->Series["TINKUY"]->Points[i]->YValues[0];
							if ((humedad >= Int32::Parse(MinBox->Text)) && (humedad <= Int32::Parse(MaxBox->Text))) {
								chart2->Series["TINKUY"]->Points[i]->IsEmpty = false;
							}
							else {
								chart2->Series["TINKUY"]->Points[i]->IsEmpty = true;
							}
						}
						flag = 1;
					}
					else {
						MessageBox::Show("El dato menor no puede ser el mayor. Los datos deben ser enteros positivos.");
					}
				}
				else {
					MessageBox::Show("Los datos ingresados deben ser num�ricos");
				}

			}
			else {
				MessageBox::Show("Por favor complete los datos antes de filtrar.");
			}
		}
		else if (CriterioBox->SelectedItem->ToString() == "Concentracion CO") {
			if (MinBox->Text != "" && MaxBox->Text != "") {
				if (Int32::TryParse(MinBox->Text, minValue) && Int32::TryParse(MaxBox->Text, maxValue)) {
					if ((maxValue > minValue) && minValue > 0) {						//tabla
						for each (Ambiente ^ dato in ambiente_aux) {
							int CO = dynamic_cast<SensorCO^>(dato->DataBase[1])->NivelCO;
							if ((CO >= Int32::Parse(MinBox->Text)) && (CO <= Int32::Parse(MaxBox->Text))) {
								// El valor de Temperatura est� dentro del rango, agrega el dato filtrado a la nueva lista.
								ambiente_to_filter->Add(dato);
							}
						}
						for each (Ambiente ^ dato in ambiente_aux_2) {
							int CO = dynamic_cast<SensorCO^>(dato->DataBase[1])->NivelCO;
							if ((CO >= Int32::Parse(MinBox->Text)) && (CO <= Int32::Parse(MaxBox->Text))) {
								// El valor de Temperatura est� dentro del rango, agrega el dato filtrado a la nueva lista.
								ambiente_to_filter_2->Add(dato);
							}
						}

						//chart3
						for (int i = 0; i < chart3->Series["CIA"]->Points->Count; i++) {
							int CO = chart3->Series["CIA"]->Points[i]->YValues[0];
							if ((CO >= Int32::Parse(MinBox->Text)) && (CO <= Int32::Parse(MaxBox->Text))) {
								chart3->Series["CIA"]->Points[i]->IsEmpty = false;
							}
							else {
								chart3->Series["CIA"]->Points[i]->IsEmpty = true;
							}
						}

						for (int i = 0; i < chart3->Series["FACI"]->Points->Count; i++) {
							int CO = chart3->Series["FACI"]->Points[i]->YValues[0];
							if ((CO >= Int32::Parse(MinBox->Text)) && (CO <= Int32::Parse(MaxBox->Text))) {
								chart3->Series["FACI"]->Points[i]->IsEmpty = false;
							}
							else {
								chart3->Series["FACI"]->Points[i]->IsEmpty = true;
							}
						}

						for (int i = 0; i < chart3->Series["BIBLIOTECA"]->Points->Count; i++) {
							int CO = chart3->Series["BIBLIOTECA"]->Points[i]->YValues[0];
							if ((CO >= Int32::Parse(MinBox->Text)) && (CO <= Int32::Parse(MaxBox->Text))) {
								chart3->Series["BIBLIOTECA"]->Points[i]->IsEmpty = false;
							}
							else {
								chart3->Series["BIBLIOTECA"]->Points[i]->IsEmpty = true;
							}
						}

						for (int i = 0; i < chart3->Series["TINKUY"]->Points->Count; i++) {
							int CO = chart3->Series["TINKUY"]->Points[i]->YValues[0];
							if ((CO >= Int32::Parse(MinBox->Text)) && (CO <= Int32::Parse(MaxBox->Text))) {
								chart3->Series["TINKUY"]->Points[i]->IsEmpty = false;
							}
							else {
								chart3->Series["TINKUY"]->Points[i]->IsEmpty = true;
							}
						}
						flag = 1;
					}
					else {
						MessageBox::Show("El dato menor no puede ser el mayor. Los datos deben ser enteros positivos.");
					}
				}
				else {
					MessageBox::Show("Los datos ingresados deben ser num�ricos");
				}
			}
			else {
				MessageBox::Show("Por favor complete los datos antes de filtrar.");
			}

		}
		else if (CriterioBox->SelectedItem->ToString() == "Calidad Aire") {
			if (MinBox->Text != "" && MaxBox->Text != "") {
				if (Int32::TryParse(MinBox->Text, minValue) && Int32::TryParse(MaxBox->Text, maxValue)) {
					if ((maxValue > minValue) && minValue > 0) {
						//tabla
						for each (Ambiente ^ dato in ambiente_aux) {
							int AirQ = dynamic_cast<SensorCalidadAire^>(dato->DataBase[2])->CalidadAire;
							if ((AirQ >= Int32::Parse(MinBox->Text)) && (AirQ <= Int32::Parse(MaxBox->Text))) {
								ambiente_to_filter->Add(dato);
							}
						}
						for each (Ambiente ^ dato in ambiente_aux_2) {
							int AirQ = dynamic_cast<SensorCalidadAire^>(dato->DataBase[2])->CalidadAire;
							if ((AirQ >= Int32::Parse(MinBox->Text)) && (AirQ <= Int32::Parse(MaxBox->Text))) {
								ambiente_to_filter_2->Add(dato);
							}
						}

						//chart4
						for (int i = 0; i < chart4->Series["CIA"]->Points->Count; i++) {
							int AirQ = chart4->Series["CIA"]->Points[i]->YValues[0];
							if ((AirQ >= Int32::Parse(MinBox->Text)) && (AirQ <= Int32::Parse(MaxBox->Text))) {
								chart4->Series["CIA"]->Points[i]->IsEmpty = false;
							}
							else {
								chart4->Series["CIA"]->Points[i]->IsEmpty = true;
							}
						}

						for (int i = 0; i < chart4->Series["FACI"]->Points->Count; i++) {
							int AirQ = chart4->Series["FACI"]->Points[i]->YValues[0];
							if ((AirQ >= Int32::Parse(MinBox->Text)) && (AirQ <= Int32::Parse(MaxBox->Text))) {
								chart4->Series["FACI"]->Points[i]->IsEmpty = false;
							}
							else {
								chart4->Series["FACI"]->Points[i]->IsEmpty = true;
							}
						}

						for (int i = 0; i < chart4->Series["BIBLIOTECA"]->Points->Count; i++) {
							int AirQ = chart4->Series["BIBLIOTECA"]->Points[i]->YValues[0];
							if ((AirQ >= Int32::Parse(MinBox->Text)) && (AirQ <= Int32::Parse(MaxBox->Text))) {
								chart4->Series["BIBLIOTECA"]->Points[i]->IsEmpty = false;
							}
							else {
								chart4->Series["BIBLIOTECA"]->Points[i]->IsEmpty = true;
							}
						}

						for (int i = 0; i < chart4->Series["TINKUY"]->Points->Count; i++) {
							int AirQ = chart4->Series["TINKUY"]->Points[i]->YValues[0];
							if ((AirQ >= Int32::Parse(MinBox->Text)) && (AirQ <= Int32::Parse(MaxBox->Text))) {
								chart4->Series["TINKUY"]->Points[i]->IsEmpty = false;
							}
							else {
								chart4->Series["TINKUY"]->Points[i]->IsEmpty = true;
							}
						}
						flag = 1;
					}
					else {
						MessageBox::Show("El dato menor no puede ser el mayor. Los datos deben ser enteros positivos.");
					}
				}
				else {
					MessageBox::Show("Los datos ingresados deben ser num�ricos");
				}
			}
			else {
				MessageBox::Show("Por favor complete los datos antes de filtrar.");
			}
		}
		else if ((CriterioBox->SelectedItem->ToString() == "Fecha-Hora") && (checkBox1->Checked==0) && (checkBox2->Checked== 0)) {
			if (HoraInicial->Text != "" && HoraFinal->Text != "" && MinutoFinal->Text != "" && MinutoInicial->Text != "") {
				
				DateTime fechaInicio = dtp1->Value;
				int Hora1;
				int Min1;

				DateTime fechaFin = dtp2->Value;
				int Hora2;
				int Min2;

				if (Int32::TryParse(HoraInicial->Text, Hora1) && Int32::TryParse(MinutoInicial->Text, Min1) && Int32::TryParse(HoraFinal->Text, Hora2) && Int32::TryParse(MinutoFinal->Text, Min2)){					
					String^ ampm1 = AMPM1->SelectedItem->ToString();
					int factor1 = (ampm1 == "a.m.") ? 0 : 12; //if fino, a ? b : c, a condicion, b S�, c No
					fechaInicio = fechaInicio.Date.AddHours(Hora1 + factor1).AddMinutes(Min1).AddSeconds(0);
				
					String^ ampm2 = AMPM2->SelectedItem->ToString();
					int factor2 = (ampm2 == "a.m.") ? 0 : 12;
					fechaFin = fechaFin.Date.AddHours(Hora2 + factor2).AddMinutes(Min2).AddSeconds(0);

					if ((Hora1 >= 0 && Hora1 <= 12) && (Min1 >= 0 && Min1 <= 60) && (Hora2 >= 0 && Hora2 <= 12) && (Min2 >= 0 && Min2 <= 60) && (fechaInicio < fechaFin)) {

						for each (Ambiente ^ dato in ambiente_aux) {
							DateTime fechaSensor = DateTime::ParseExact(dato->FechaMedicion, "yyyy-MM-dd", nullptr);
							DateTime horaSensor = DateTime::ParseExact(dato->TiempoMedicion, "HH:mm:ss", nullptr);
							DateTime fechaYHora = fechaSensor.Date + horaSensor.TimeOfDay; //gpts

							if ((fechaYHora >= fechaInicio) && (fechaYHora <= fechaFin)) {
								ambiente_to_filter->Add(dato);
							}
						}
						for each (Ambiente ^ dato in ambiente_aux_2) {
							DateTime fechaSensor = DateTime::ParseExact(dato->FechaMedicion, "yyyy-MM-dd", nullptr);
							DateTime horaSensor = DateTime::ParseExact(dato->TiempoMedicion, "HH:mm:ss", nullptr);
							DateTime fechaYHora = fechaSensor.Date + horaSensor.TimeOfDay; //gpts

							if ((fechaYHora >= fechaInicio) && (fechaYHora <= fechaFin)) {
								ambiente_to_filter_2->Add(dato);
							}
						}
						RefreshChartsbyDateTime(fechaInicio, fechaFin);
						flag = 1;
					}
					else {
						MessageBox::Show("Asegurarse de que los valores de fecha y hora est�n en los l�mites respectivos.");
					}
				}
				else {
					MessageBox::Show("Los datos ingresados deben ser num�ricos");
				}
			}
			else {
				MessageBox::Show("Por favor complete los datos antes de filtrar.");
			}

		}
		else if ((CriterioBox->SelectedItem->ToString() == "Fecha-Hora") && (checkBox1->Checked) && (checkBox2->Checked == 0)) {
			
			DateTime fechaInicio = dtp1->Value;
			fechaInicio = fechaInicio.Date.AddHours(0).AddMinutes(0).AddSeconds(0);

			DateTime fechaFin = dtp2->Value;
			fechaFin = fechaFin.Date.AddHours(23).AddMinutes(59).AddSeconds(59);

			if (fechaFin > fechaInicio) {
				for each (Ambiente ^ dato in ambiente_aux) {
					DateTime fechaSensor = DateTime::ParseExact(dato->FechaMedicion, "yyyy-MM-dd", nullptr);
					DateTime horaSensor = DateTime::ParseExact(dato->TiempoMedicion, "HH:mm:ss", nullptr);
					DateTime fechaYHora = fechaSensor.Date + horaSensor.TimeOfDay; //gpts

					if ((fechaYHora >= fechaInicio) && (fechaYHora <= fechaFin)) {
						ambiente_to_filter->Add(dato);
					}
				}
				for each (Ambiente ^ dato in ambiente_aux_2) {
					DateTime fechaSensor = DateTime::ParseExact(dato->FechaMedicion, "yyyy-MM-dd", nullptr);
					DateTime horaSensor = DateTime::ParseExact(dato->TiempoMedicion, "HH:mm:ss", nullptr);
					DateTime fechaYHora = fechaSensor.Date + horaSensor.TimeOfDay; //gpts

					if ((fechaYHora >= fechaInicio) && (fechaYHora <= fechaFin)) {
						ambiente_to_filter_2->Add(dato);
					}
				}
				RefreshChartsbyDateTime(fechaInicio, fechaFin);
				flag = 1;
			}
			else {
				MessageBox::Show("La fecha de fin debe ser mayor que la fecha de inicio");
			}
		}
		else if ((CriterioBox->SelectedItem->ToString() == "Fecha-Hora") && (checkBox1->Checked) && (checkBox2->Checked)) {
			DateTime fechaInicio = dtp1->Value;
			fechaInicio = fechaInicio.Date.AddHours(0).AddMinutes(0).AddSeconds(0);

			DateTime fechaFin = fechaInicio.Date.AddHours(23).AddMinutes(59).AddSeconds(59);

			if (fechaInicio < fechaFin) {
				for each (Ambiente ^ dato in ambiente_aux) {
					DateTime fechaSensor = DateTime::ParseExact(dato->FechaMedicion, "yyyy-MM-dd", nullptr);
					DateTime horaSensor = DateTime::ParseExact(dato->TiempoMedicion, "HH:mm:ss", nullptr);
					DateTime fechaYHora = fechaSensor.Date + horaSensor.TimeOfDay; //gpts

					if ((fechaYHora >= fechaInicio) && (fechaYHora <= fechaFin)) {
						ambiente_to_filter->Add(dato);
					}
				}
				for each (Ambiente ^ dato in ambiente_aux_2) {
					DateTime fechaSensor = DateTime::ParseExact(dato->FechaMedicion, "yyyy-MM-dd", nullptr);
					DateTime horaSensor = DateTime::ParseExact(dato->TiempoMedicion, "HH:mm:ss", nullptr);
					DateTime fechaYHora = fechaSensor.Date + horaSensor.TimeOfDay; //gpts

					if ((fechaYHora >= fechaInicio) && (fechaYHora <= fechaFin)) {
						ambiente_to_filter_2->Add(dato);
					}
				}
				RefreshChartsbyDateTime(fechaInicio, fechaFin);
				flag = 1;
			}
			else {
				MessageBox::Show("La fecha de inicio debe ser menor que la fecha de fin");
			}

		}
		else if ((CriterioBox->SelectedItem->ToString() == "Fecha-Hora") && (checkBox1->Checked == 0) && (checkBox2->Checked)) {
			if (HoraInicial->Text != "" && MinutoInicial->Text != "" && HoraFinal->Text != "" && MinutoFinal->Text != ""){


				DateTime fechaInicio = dtp1->Value;
				int Hora1;
				int Min1;

				DateTime fechaFin = dtp2->Value;
				int Hora2;
				int Min2;

				if (Int32::TryParse(HoraInicial->Text, Hora1) && Int32::TryParse(MinutoInicial->Text, Min1) && Int32::TryParse(HoraFinal->Text, Hora2) && Int32::TryParse(MinutoFinal->Text, Min2)) {
					String^ ampm1 = AMPM1->SelectedItem->ToString();
					int factor1 = (ampm1 == "a.m.") ? 0 : 12; //if fino, a ? b : c, a condicion, b S�, c No
					fechaInicio = fechaInicio.Date.AddHours(Hora1 + factor1).AddMinutes(Min1).AddSeconds(0);

					String^ ampm2 = AMPM2->SelectedItem->ToString();
					int factor2 = (ampm2 == "a.m.") ? 0 : 12;
					DateTime fechaFin = fechaInicio.Date.AddHours(Hora2 + factor2).AddMinutes(Min2).AddSeconds(0);

					if ((Hora1 >= 0 && Hora1 <= 12) && (Min1 >= 0 && Min1 <= 60) && (Hora2 >= 0 && Hora2 <= 12) && (Min2 >= 0 && Min2 <= 60) && (fechaInicio < fechaFin)) {


						for each (Ambiente ^ dato in ambiente_aux) {
							DateTime fechaSensor = DateTime::ParseExact(dato->FechaMedicion, "yyyy-MM-dd", nullptr);
							DateTime horaSensor = DateTime::ParseExact(dato->TiempoMedicion, "HH:mm:ss", nullptr);
							DateTime fechaYHora = fechaSensor.Date + horaSensor.TimeOfDay; //gpts

							if ((fechaYHora >= fechaInicio) && (fechaYHora <= fechaFin)) {
								ambiente_to_filter->Add(dato);
							}
						}
						for each (Ambiente ^ dato in ambiente_aux_2) {
							DateTime fechaSensor = DateTime::ParseExact(dato->FechaMedicion, "yyyy-MM-dd", nullptr);
							DateTime horaSensor = DateTime::ParseExact(dato->TiempoMedicion, "HH:mm:ss", nullptr);
							DateTime fechaYHora = fechaSensor.Date + horaSensor.TimeOfDay; //gpts

							if ((fechaYHora >= fechaInicio) && (fechaYHora <= fechaFin)) {
								ambiente_to_filter_2->Add(dato);
							}
						}
						RefreshChartsbyDateTime(fechaInicio, fechaFin);
						flag = 1;
					}
					else {
						MessageBox::Show("Asegurarse de que los valores de fecha y hora est�n en los l�mites respectivos.");
					}
				}
				else {
					MessageBox::Show("Los datos ingresados deben ser num�ricos");
				}
			}
			else {
				MessageBox::Show("Por favor complete los datos antes de filtrar.");
			}
		}
		else {
			MessageBox::Show("You shouldn't be here.");
			Application::Exit();
		}

		
		if (flag == 1) {
			ambiente_aux = ambiente_to_filter;
			ambiente_aux_2 = ambiente_to_filter_2;
		}

		flag = 0;
		ShowFilteredData(ambiente_aux);
	}

	private: System::Void SensorsReportLoad(System::Object^ sender, System::EventArgs^ e) {
		MinLabel->Text = "Temperatura minima";
		MaxLabel->Text = "Temperatura maxima";
		CriterioBox->SelectedIndex = 0;
		AMPM1->SelectedIndex = 0;
		AMPM2->SelectedIndex = 0;
		//CriterioMedicionBox->SelectedIndex = 0;
		LoadCharts();
		chart1->Visible = true;
		chart2->Visible = false;
		chart3->Visible = false;
		chart4->Visible = false;


		FechaVisible(0);

		ShowAmbienteData();
	}
		   void ShowAmbienteData() {

			   sensorData = Controller::Controller::QueryAmbienteData();
			   ambiente_aux = sensorData;
			   ambiente_aux_2 = ambiente_aux;
			   dataGridView1->Rows->Clear();
			   if (user->membresia->TipoMembresia == "Premium") {
				   for (int i = 0; i < sensorData->Count; i++) {
					   Ambiente^ ambiente = sensorData[i];

					   dataGridView1->Rows->Add(gcnew array<String^> {
						   "" + ambiente->IdMedicion,
							   "" + dynamic_cast<SensorTemperaturaHumedad^>(ambiente->DataBase[0])->Temperatura, //temperatura
							   dynamic_cast<SensorTemperaturaHumedad^>(ambiente->DataBase[0])->UnidadTemp,
							   "" + dynamic_cast<SensorTemperaturaHumedad^>(ambiente->DataBase[0])->Humedad, //humedad
							   "" + dynamic_cast<SensorCO^>(ambiente->DataBase[1])->NivelCO, //co
							   "" + dynamic_cast<SensorCalidadAire^>(ambiente->DataBase[2])->CalidadAire, //airq
							   ambiente->UbicacionGeografica, //ubigeo
							   ambiente->FechaMedicion, //fecha
							   ambiente->TiempoMedicion //hora
					   });
				   }
			   }
			   //Si es Estandar, se filtran los resultados una semana
			   else if (user->membresia->TipoMembresia == "Estandar") {

				   List<Ambiente^>^ ambiente_to_filter = gcnew List<Ambiente^>(); //lista a ser filtrada
				   List<Ambiente^>^ ambiente_to_filter_2 = gcnew List<Ambiente^>(); //lista a ser filtrada		   

				   DateTime fechaFin = DateTime::Now;
				   TimeSpan oneWeek = TimeSpan(7, 0, 0, 0);
				   DateTime fechaInicio = fechaFin - oneWeek;

				   for each (Ambiente ^ dato in ambiente_aux) {
					   DateTime fechaSensor = DateTime::ParseExact(dato->FechaMedicion, "yyyy-MM-dd", nullptr);
					   DateTime horaSensor = DateTime::ParseExact(dato->TiempoMedicion, "HH:mm:ss", nullptr);
					   DateTime fechaYHora = fechaSensor.Date + horaSensor.TimeOfDay; //gpts

					   if ((fechaYHora >= fechaInicio) && (fechaYHora <= fechaFin)) {
						   ambiente_to_filter->Add(dato);
					   }
				   }
				   for each (Ambiente ^ dato in ambiente_aux_2) {
					   DateTime fechaSensor = DateTime::ParseExact(dato->FechaMedicion, "yyyy-MM-dd", nullptr);
					   DateTime horaSensor = DateTime::ParseExact(dato->TiempoMedicion, "HH:mm:ss", nullptr);
					   DateTime fechaYHora = fechaSensor.Date + horaSensor.TimeOfDay; //gpts

					   if ((fechaYHora >= fechaInicio) && (fechaYHora <= fechaFin)) {
						   ambiente_to_filter_2->Add(dato);
					   }
				   }

				   ambiente_aux = ambiente_to_filter;
				   ambiente_aux_2 = ambiente_to_filter_2;

				   ShowFilteredData(ambiente_to_filter);
			   }


		   }
		   void ShowFilteredData(List<Ambiente^>^ ambiente_aux) {
			   dataGridView1->Rows->Clear();
			   for (int i = 0; i < ambiente_aux->Count; i++) {
				   Ambiente^ ambiente = ambiente_aux[i];

				   dataGridView1->Rows->Add(gcnew array<String^> {
					   "" + ambiente->IdMedicion,
						   "" + dynamic_cast<SensorTemperaturaHumedad^>(ambiente->DataBase[0])->Temperatura, //temperatura
						   dynamic_cast<SensorTemperaturaHumedad^>(ambiente->DataBase[0])->UnidadTemp,
						   "" + dynamic_cast<SensorTemperaturaHumedad^>(ambiente->DataBase[0])->Humedad, //humedad
						   "" + dynamic_cast<SensorCO^>(ambiente->DataBase[1])->NivelCO, //co
						   "" + dynamic_cast<SensorCalidadAire^>(ambiente->DataBase[2])->CalidadAire, //airq
						   ambiente->UbicacionGeografica, //ubigeo
						   ambiente->FechaMedicion, //fecha
						   ambiente->TiempoMedicion //hora
				   });
			   }
		   }

	private: System::Void EleccionCriterio(System::Object^ sender, System::EventArgs^ e) {
		MinBox->Text = "";
		MaxBox->Text = "";
		if (CriterioBox->SelectedItem->ToString() == "Temperatura") {
			MinLabel->Text = "Temperatura minima";
			MinBox->Visible = true;
			MaxLabel->Text = "Temperatura maxima";
			MaxLabel->Visible = true;
			MaxBox->Visible = true;
			isFahrenheit->Visible = true;
			FechaVisible(0);
			chart1->Visible = true;
			chart2->Visible = false;
			chart3->Visible = false;
			chart4->Visible = false;
		}
		else if (CriterioBox->SelectedItem->ToString() == "Humedad") {
			MinLabel->Text = "Humedad minima";
			MinBox->Visible = true;
			MaxLabel->Text = "Humedad maxima";
			MaxLabel->Visible = true;
			MaxBox->Visible = true;
			isFahrenheit->Visible = false;
			FechaVisible(0);
			chart1->Visible = false;
			chart2->Visible = true;
			chart3->Visible = false;
			chart4->Visible = false;
		}
		else if (CriterioBox->SelectedItem->ToString() == "Concentracion CO") {
			MinLabel->Text = "Concentracion minima";
			MinBox->Visible = true;
			MaxLabel->Text = "Concentracion maxima";
			MaxLabel->Visible = true;
			MaxBox->Visible = true;
			isFahrenheit->Visible = false;
			FechaVisible(0);
			chart1->Visible = false;
			chart2->Visible = false;
			chart3->Visible = true;
			chart4->Visible = false;

		}
		else if (CriterioBox->SelectedItem->ToString() == "Calidad Aire") {
			MinLabel->Text = "Calidad Aire minima";
			MinBox->Visible = true;
			MaxLabel->Text = "Calidad Aire maxima";
			MaxLabel->Visible = true;
			MaxBox->Visible = true;
			isFahrenheit->Visible = false;
			FechaVisible(0);
			chart1->Visible = false;
			chart2->Visible = false;
			chart3->Visible = false;
			chart4->Visible = true;
		}
		else if (CriterioBox->SelectedItem->ToString() == "Fecha-Hora") {
			//implemented
			FechaVisible(1);
			MinLabel->Text = "Fecha Inicio";
			MaxLabel->Text = "Fecha Fin";
			MinBox->Visible = false;
			MaxBox->Visible = false;
			isFahrenheit->Visible = false;

			if (checkBox2->Checked) {
				dtp2->Visible = false;
				MaxLabel->Visible = false;			
			}
			else {
				dtp2->Visible = true;
				MaxLabel->Visible = true;
			}

			if (checkBox1->Checked) {
				HoraFinal->Visible = false;
				HoraInicial->Visible = false;
				MinutoFinal->Visible = false;
				MinutoInicial->Visible = false;
				AMPM1->Visible = false;
				AMPM2->Visible = false;
				dosPuntos1->Visible = false;
				dosPuntos2->Visible = false;
			}
			else {
				HoraFinal->Visible = true;
				HoraInicial->Visible = true;
				MinutoFinal->Visible = true;
				MinutoInicial->Visible = true;
				AMPM1->Visible = true;
				AMPM2->Visible = true;
				dosPuntos1->Visible = true;
				dosPuntos2->Visible = true;
			}
		}
		else {
			MessageBox::Show("You shouldn't be here.");
		}
	}
		   void FechaVisible(int flag) {
			   if (flag) {
				   HoraInicial->Visible = true;
				   MinutoInicial->Visible = true;
				   AMPM1->Visible = true;
				   HoraFinal->Visible = true;
				   MinutoFinal->Visible = true;
				   AMPM2->Visible = true;
				   dtp1->Visible = true;
				   dtp2->Visible = true;
				   checkBox1->Visible = true;
				   checkBox2->Visible = true;
				   dosPuntos1->Visible = true;
				   dosPuntos2->Visible = true;
			   }
			   else {
				   HoraInicial->Visible = false;
				   MinutoInicial->Visible = false;
				   AMPM1->Visible = false;
				   HoraFinal->Visible = false;
				   MinutoFinal->Visible = false;
				   AMPM2->Visible = false;
				   dtp1->Visible = false;
				   dtp2->Visible = false;
				   checkBox1->Visible = false;
				   checkBox2->Visible = false;
				   dosPuntos1->Visible = false;
				   dosPuntos2->Visible = false;

			   }
		   }
	private: System::Void CerrarBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void Restablecer_Click(System::Object^ sender, System::EventArgs^ e) {
		this->CIAChk->Checked = true;
		this->FACIChk->Checked = true;
		this->BiblioChk->Checked = true;
		this->TinkuyChk->Checked = true;

		MinBox->Text = "";
		MaxBox->Text = "";
		HoraInicial->Text = "";
		HoraFinal->Text = "";
		MinutoInicial->Text = "";
		MinutoFinal->Text = "";
		AMPM1->SelectedIndex = 0;
		AMPM2->SelectedIndex = 0;
		dtp1->Value = DateTime::Today;
		dtp2->Value = DateTime::Today;

		isFahrenheit->Checked = false;

		ShowAmbienteData();
		LoadCharts();
	}
	private: System::Void SoloUnDia(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox2->Checked) {
			dtp2->Visible = false;
			MaxLabel->Visible = false;
		}
		else {
			dtp2->Visible = true;
			MaxLabel->Visible = true;
		}
	}
	private: System::Void SoloFechas(System::Object^ sender, System::EventArgs^ e) {

		if (checkBox1->Checked) {
			HoraFinal->Visible = false;
			HoraInicial->Visible = false;
			MinutoFinal->Visible = false;
			MinutoInicial->Visible = false;
			AMPM1->Visible = false;
			AMPM2->Visible = false;
			dosPuntos1->Visible = false;
			dosPuntos2->Visible = false;
		}
		else {
			HoraFinal->Visible = true;
			HoraInicial->Visible = true;
			MinutoFinal->Visible = true;
			MinutoInicial->Visible = true;
			AMPM1->Visible = true;
			AMPM2->Visible = true;
			dosPuntos1->Visible = true;
			dosPuntos2->Visible = true;
		}
	}
		   void LoadCharts() {
			   /******	DECLARACION DE VARIABLES ********/

			   List<int>^ tempdata = Controller::Controller::GetTempfromAmbiente(sensorData);
			   List<int>^ humdata = Controller::Controller::GetHumfromAmbiente(sensorData);
			   List<int>^ codata = Controller::Controller::GetCOfromAmbiente(sensorData);
			   List<int>^ airqdata = Controller::Controller::GetAirQfromAmbiente(sensorData);
			   List<String^>^ datetimedata = Controller::Controller::GetDateTimefromAmbiente(sensorData);
			   List<String^>^ solohoradata = Controller::Controller::GetOnlyHora(sensorData);
			   List<String^>^ solofechadata = Controller::Controller::GetOnlyFecha(sensorData);




			   List<int>^ indexdataCIA = Controller::Controller::GetIndexfromAmbiente(sensorData, "CIA");
			   List<int>^ indexdataFACI = Controller::Controller::GetIndexfromAmbiente(sensorData, "FACI");
			   List<int>^ indexdataBIBLIO = Controller::Controller::GetIndexfromAmbiente(sensorData, "BIBLIOTECA CENTRAL");
			   List<int>^ indexdataTINKUY = Controller::Controller::GetIndexfromAmbiente(sensorData, "TINKUY");

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

			   datetimeCIA = gcnew List<String^>();
			   solohoraslistaCIA = gcnew List<String^>();
			   soloFechaListaCIA = gcnew List<String^>();







			   datetimeFACI = gcnew List<String^>();

			   solohoraslistaFACI = gcnew List<String^>();
			   soloFechaListaFACI = gcnew List<String^>();

			   datetimeBIBLIO = gcnew List<String^>();

			   solohoraslistaBIBLIO = gcnew List<String^>();
			   soloFechaListaBIBLIO = gcnew List<String^>();

			   datetimeTINKUY = gcnew List<String^>();
			   solohoraslistaTINKUY = gcnew List<String^>();
			   soloFechaListaTINKUY = gcnew List<String^>();


			   //se inicializa las listas con los datos respectivos de cada lugar

			   for each (int index in indexdataCIA)
			   {
				   tempdataCIA->Add(tempdata[index]);
				   humdataCIA->Add(humdata[index]);
				   codataCIA->Add(codata[index]);
				   airqdataCIA->Add(airqdata[index]);
				   datetimeCIA->Add(datetimedata[index]);
				   solohoraslistaCIA->Add(solohoradata[index]);
				   soloFechaListaCIA->Add(solofechadata[index]);

			   }

			   for each (int index in indexdataFACI)
			   {
				   tempdataFACI->Add(tempdata[index]);
				   humdataFACI->Add(humdata[index]);
				   codataFACI->Add(codata[index]);
				   airqdataFACI->Add(airqdata[index]);
				   datetimeFACI->Add(datetimedata[index]);
				   solohoraslistaFACI->Add(solohoradata[index]);
				   soloFechaListaFACI->Add(solofechadata[index]);

			   }

			   for each (int index in indexdataBIBLIO)
			   {
				   tempdataBIBLIO->Add(tempdata[index]);
				   humdataBIBLIO->Add(humdata[index]);
				   codataBIBLIO->Add(codata[index]);
				   airqdataBIBLIO->Add(airqdata[index]);
				   datetimeBIBLIO->Add(datetimedata[index]);

				   solohoraslistaBIBLIO->Add(solohoradata[index]);
				   soloFechaListaBIBLIO->Add(solofechadata[index]);


			   }

			   for each (int index in indexdataTINKUY)
			   {
				   tempdataTINKUY->Add(tempdata[index]);
				   humdataTINKUY->Add(humdata[index]);
				   codataTINKUY->Add(codata[index]);
				   airqdataTINKUY->Add(airqdata[index]);
				   datetimeTINKUY->Add(datetimedata[index]);

				   solohoraslistaTINKUY->Add(solohoradata[index]);
				   soloFechaListaTINKUY->Add(solofechadata[index]);

			   }

			   chart1->Series["CIA"]->Points->DataBindXY(soloFechaListaCIA, tempdataCIA);
			   chart1->Series["FACI"]->Points->DataBindXY(soloFechaListaFACI, tempdataFACI);
			   chart1->Series["BIBLIOTECA"]->Points->DataBindXY(soloFechaListaBIBLIO, tempdataBIBLIO);
			   chart1->Series["TINKUY"]->Points->DataBindXY(soloFechaListaTINKUY, tempdataTINKUY);

			   chart2->Series["CIA"]->Points->DataBindXY(soloFechaListaCIA, humdataCIA);
			   chart2->Series["FACI"]->Points->DataBindXY(soloFechaListaFACI, humdataFACI);
			   chart2->Series["BIBLIOTECA"]->Points->DataBindXY(soloFechaListaBIBLIO, humdataBIBLIO);
			   chart2->Series["TINKUY"]->Points->DataBindXY(soloFechaListaTINKUY, humdataTINKUY);

			   chart3->Series["CIA"]->Points->DataBindXY(soloFechaListaCIA, codataCIA);
			   chart3->Series["FACI"]->Points->DataBindXY(soloFechaListaFACI, codataFACI);
			   chart3->Series["BIBLIOTECA"]->Points->DataBindXY(soloFechaListaBIBLIO, codataBIBLIO);
			   chart3->Series["TINKUY"]->Points->DataBindXY(soloFechaListaTINKUY, codataTINKUY);

			   chart4->Series["CIA"]->Points->DataBindXY(soloFechaListaCIA, airqdataCIA);
			   chart4->Series["FACI"]->Points->DataBindXY(soloFechaListaFACI, airqdataFACI);
			   chart4->Series["BIBLIOTECA"]->Points->DataBindXY(soloFechaListaBIBLIO, airqdataBIBLIO);
			   chart4->Series["TINKUY"]->Points->DataBindXY(soloFechaListaTINKUY, airqdataTINKUY);

			   if (user->membresia->TipoMembresia == "Estandar") {
				   DateTime fechaFin = DateTime::Now;
				   TimeSpan oneWeek = TimeSpan(7, 0, 0, 0);
				   DateTime fechaInicio = fechaFin - oneWeek;
				   RefreshChartsbyDateTime(fechaInicio, fechaFin);
			   }
		   }
	private: System::Void CriterioMedicionBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void CIA_Check(System::Object^ sender, System::EventArgs^ e) {
		RefreshbyCheck();
	}
	private: System::Void FACI_Check(System::Object^ sender, System::EventArgs^ e) {
		RefreshbyCheck();
	}
	private: System::Void BIBLIO_Check(System::Object^ sender, System::EventArgs^ e) {
		RefreshbyCheck();
	}
	private: System::Void TINKUY_Check(System::Object^ sender, System::EventArgs^ e) {
		RefreshbyCheck();
	}
		   void RefreshbyCheck(void) {
			   RefreshbyCIACheck();
			   RefreshbyFACICheck();
			   RefreshbyBiblioCheck();
			   RefreshbyTinkuyCheck();

			   List<Ambiente^>^ ambiente_to_filter = gcnew List<Ambiente^>(); //lista a ser filtrada


			   for each (Ambiente ^ dato in ambiente_aux_2) {
				   String^ ubiGeo = dato->UbicacionGeografica;
				   if ((ubiGeo == "CIA" && CIAChk->Checked) || (ubiGeo == "FACI" && FACIChk->Checked) || (ubiGeo == "BIBLIOTECA CENTRAL" && BiblioChk->Checked) || (ubiGeo == "TINKUY" && TinkuyChk->Checked)) {
					   ambiente_to_filter->Add(dato);
				   }
			   }
			   ambiente_aux = ambiente_to_filter;
			   ShowFilteredData(ambiente_to_filter);


		   }

		   void RefreshbyCIACheck() {
			   if (CIAChk->Checked == true) {
				   chart1->Series["CIA"]->Enabled = true;
				   chart2->Series["CIA"]->Enabled = true;
				   chart3->Series["CIA"]->Enabled = true;
				   chart4->Series["CIA"]->Enabled = true;
			   }
			   else {
				   chart1->Series["CIA"]->Enabled = false;
				   chart2->Series["CIA"]->Enabled = false;
				   chart3->Series["CIA"]->Enabled = false;
				   chart4->Series["CIA"]->Enabled = false;
			   }


		   }
		   void RefreshbyFACICheck() {
			   if (FACIChk->Checked == true) {
				   chart1->Series["FACI"]->Enabled = true;
				   chart2->Series["FACI"]->Enabled = true;
				   chart3->Series["FACI"]->Enabled = true;
				   chart4->Series["FACI"]->Enabled = true;
			   }
			   else {
				   chart1->Series["FACI"]->Enabled = false;
				   chart2->Series["FACI"]->Enabled = false;
				   chart3->Series["FACI"]->Enabled = false;
				   chart4->Series["FACI"]->Enabled = false;
			   }
		   }

		   void RefreshbyBiblioCheck() {
			   if (BiblioChk->Checked == true) {
				   chart1->Series["BIBLIOTECA"]->Enabled = true;
				   chart2->Series["BIBLIOTECA"]->Enabled = true;
				   chart3->Series["BIBLIOTECA"]->Enabled = true;
				   chart4->Series["BIBLIOTECA"]->Enabled = true;

			   }
			   else {
				   chart1->Series["BIBLIOTECA"]->Enabled = false;
				   chart2->Series["BIBLIOTECA"]->Enabled = false;
				   chart3->Series["BIBLIOTECA"]->Enabled = false;
				   chart4->Series["BIBLIOTECA"]->Enabled = false;
			   }
		   }

		   void RefreshbyTinkuyCheck() {
			   if (TinkuyChk->Checked == true) {
				   chart1->Series["TINKUY"]->Enabled = true;
				   chart2->Series["TINKUY"]->Enabled = true;
				   chart3->Series["TINKUY"]->Enabled = true;
				   chart4->Series["TINKUY"]->Enabled = true;

			   }
			   else {
				   chart1->Series["TINKUY"]->Enabled = false;
				   chart2->Series["TINKUY"]->Enabled = false;
				   chart3->Series["TINKUY"]->Enabled = false;
				   chart4->Series["TINKUY"]->Enabled = false;
			   }
		   }
		   void RefreshChartsbyDateTime(DateTime fechaInicio, DateTime fechaFin) {
			   for (int i = 0; i < chart1->Series["CIA"]->Points->Count; i++) {
				   DateTime datetimeValue = DateTime::ParseExact(datetimeCIA[i], "yyyy-MM-dd HH:mm:ss", nullptr);
				   // String^ solohora= DateTime::ParseExact(datetimeCIA[i], "HH:mm:ss", nullptr);
				   //solohoraslista->Add(solohora);

				   if ((datetimeValue >= fechaInicio) && (datetimeValue <= fechaFin)) {
					   chart1->Series["CIA"]->Points[i]->IsEmpty = false;
					   chart2->Series["CIA"]->Points[i]->IsEmpty = false;
					   chart3->Series["CIA"]->Points[i]->IsEmpty = false;
					   chart4->Series["CIA"]->Points[i]->IsEmpty = false;


				   }
				   else {
					   chart1->Series["CIA"]->Points[i]->IsEmpty = true;
					   chart2->Series["CIA"]->Points[i]->IsEmpty = true;
					   chart3->Series["CIA"]->Points[i]->IsEmpty = true;
					   chart4->Series["CIA"]->Points[i]->IsEmpty = true;
				   }
			   }

			   for (int i = 0; i < chart1->Series["FACI"]->Points->Count; i++) {
				   DateTime datetimeValue = DateTime::ParseExact(datetimeFACI[i], "yyyy-MM-dd HH:mm:ss", nullptr);
				   if ((datetimeValue >= fechaInicio) && (datetimeValue <= fechaFin)) {
					   chart1->Series["FACI"]->Points[i]->IsEmpty = false;
					   chart2->Series["FACI"]->Points[i]->IsEmpty = false;
					   chart3->Series["FACI"]->Points[i]->IsEmpty = false;
					   chart4->Series["FACI"]->Points[i]->IsEmpty = false;


				   }
				   else {
					   chart1->Series["FACI"]->Points[i]->IsEmpty = true;
					   chart2->Series["FACI"]->Points[i]->IsEmpty = true;
					   chart3->Series["FACI"]->Points[i]->IsEmpty = true;
					   chart4->Series["FACI"]->Points[i]->IsEmpty = true;
				   }
			   }

			   for (int i = 0; i < chart1->Series["TINKUY"]->Points->Count; i++) {
				   DateTime datetimeValue = DateTime::ParseExact(datetimeTINKUY[i], "yyyy-MM-dd HH:mm:ss", nullptr);
				   if ((datetimeValue >= fechaInicio) && (datetimeValue <= fechaFin)) {
					   chart1->Series["TINKUY"]->Points[i]->IsEmpty = false;
					   chart2->Series["TINKUY"]->Points[i]->IsEmpty = false;
					   chart3->Series["TINKUY"]->Points[i]->IsEmpty = false;
					   chart4->Series["TINKUY"]->Points[i]->IsEmpty = false;

				   }
				   else {
					   chart1->Series["TINKUY"]->Points[i]->IsEmpty = true;
					   chart2->Series["TINKUY"]->Points[i]->IsEmpty = true;
					   chart3->Series["TINKUY"]->Points[i]->IsEmpty = true;
					   chart4->Series["TINKUY"]->Points[i]->IsEmpty = true;
				   }
			   }

			   for (int i = 0; i < chart1->Series["BIBLIOTECA"]->Points->Count; i++) {
				   DateTime datetimeValue = DateTime::ParseExact(datetimeBIBLIO[i], "yyyy-MM-dd HH:mm:ss", nullptr);
				   if ((datetimeValue >= fechaInicio) && (datetimeValue <= fechaFin)) {
					   chart1->Series["BIBLIOTECA"]->Points[i]->IsEmpty = false;
					   chart2->Series["BIBLIOTECA"]->Points[i]->IsEmpty = false;
					   chart3->Series["BIBLIOTECA"]->Points[i]->IsEmpty = false;
					   chart4->Series["BIBLIOTECA"]->Points[i]->IsEmpty = false;

				   }
				   else {
					   chart1->Series["BIBLIOTECA"]->Points[i]->IsEmpty = true;
					   chart2->Series["BIBLIOTECA"]->Points[i]->IsEmpty = true;
					   chart3->Series["BIBLIOTECA"]->Points[i]->IsEmpty = true;
					   chart4->Series["BIBLIOTECA"]->Points[i]->IsEmpty = true;
				   }

			   }
		   }

	private: System::Void isFahrenheit_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		F_Check();
	}
		   void F_Check() {
		
			   for each (Ambiente^ dato in ambiente_aux) {
				   int temp = dynamic_cast<SensorTemperaturaHumedad^>(dato->DataBase[0])->Temperatura;
				   if (isFahrenheit->Checked) { //C a F
					   dynamic_cast<SensorTemperaturaHumedad^>(dato->DataBase[0])->Temperatura = temp * 1.8 + 32; //C a F
					   dynamic_cast<SensorTemperaturaHumedad^>(dato->DataBase[0])->UnidadTemp = Convert::ToChar(176) + "F";
				   }
				   else if (isFahrenheit->Checked == 0) { // F a C
					   dynamic_cast<SensorTemperaturaHumedad^>(dato->DataBase[0])->Temperatura = Math::Round((temp-32)*5/(double)9, 0); //F a C
					   dynamic_cast<SensorTemperaturaHumedad^>(dato->DataBase[0])->UnidadTemp = Convert::ToChar(176) + "C";
				   }

			   }

			   if (isFahrenheit->Checked) {
				   for each (DataPoint^ point in chart1->Series["CIA"]->Points)
				   {
					   int originalY = point->YValues[0];
					   int newY = originalY * 1.8 + 32; // Duplicar el valor Y (puedes usar tu l�gica aqu�)
					   point->YValues[0] = newY;
				   }
				   for each (DataPoint^ point in chart1->Series["FACI"]->Points)
				   {
					   int originalY = point->YValues[0];
					   int newY = originalY * 1.8 + 32; // Duplicar el valor Y (puedes usar tu l�gica aqu�)
					   point->YValues[0] = newY;
				   }
				   for each (DataPoint^ point in chart1->Series["BIBLIOTECA"]->Points)
				   {
					   int originalY = point->YValues[0];
					   int newY = originalY * 1.8 + 32; // Duplicar el valor Y (puedes usar tu l�gica aqu�)
					   point->YValues[0] = newY;
				   }
				   for each (DataPoint^ point in chart1->Series["TINKUY"]->Points)
				   {
					   int originalY = point->YValues[0];
					   int newY = originalY * 1.8 + 32; // Duplicar el valor Y (puedes usar tu l�gica aqu�)
					   point->YValues[0] = newY;
				   }
				   chart1->Invalidate();
				   chart1->ChartAreas[0]->AxisY->Minimum = 0;
				   chart1->ChartAreas[0]->AxisY->Maximum = 100;
			   }
			   else {
				   for each (DataPoint^ point in chart1->Series["CIA"]->Points)
				   {
					   int originalY = point->YValues[0];
					   int newY = Math::Round((originalY - 32) * 5 / (double)9, 0); // Duplicar el valor Y (puedes usar tu l�gica aqu�)
					   point->YValues[0] = newY;
				   }
				   for each (DataPoint^ point in chart1->Series["FACI"]->Points)
				   {
					   int originalY = point->YValues[0];
					   int newY = Math::Round((originalY - 32) * 5 / (double)9, 0); // Duplicar el valor Y (puedes usar tu l�gica aqu�)
					   point->YValues[0] = newY;
				   }
				   for each (DataPoint^ point in chart1->Series["BIBLIOTECA"]->Points)
				   {
					   int originalY = point->YValues[0];
					   int newY = Math::Round((originalY - 32) * 5 / (double)9, 0); // Duplicar el valor Y (puedes usar tu l�gica aqu�)
					   point->YValues[0] = newY;
				   }
				   for each (DataPoint^ point in chart1->Series["TINKUY"]->Points)
				   {
					   int originalY = point->YValues[0];
					   int newY = Math::Round((originalY - 32) * 5 / (double)9, 0); // Duplicar el valor Y (puedes usar tu l�gica aqu�)
					   point->YValues[0] = newY;
				   }
				   chart1->Invalidate();
				   chart1->ChartAreas[0]->AxisY->Minimum = 0;
				   chart1->ChartAreas[0]->AxisY->Maximum = 40;
			   }
			   

			  
			   ShowFilteredData(ambiente_aux);
		   }

private: System::Void CSVBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	if (user->membresia->TipoMembresia == "Premium") {
		SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();
		saveFileDialog1->Filter = "Excel files (*.xls)|*.xls|All files (*.*)|*.*";
		saveFileDialog1->Title = "Guardar como archivo XLS";
		saveFileDialog1->RestoreDirectory = true;

		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			String^ filePath = saveFileDialog1->FileName;
			ExportarDataGridViewAXML(dataGridView1, filePath);
		}
	}
	else {
		MessageBox::Show("Debes ser un usuario Premium para utilizar esta opci�n.");
	}
	
}

	void ExportarDataGridViewAXML(DataGridView^ dataGridView, String^ filePath) {
		XmlTextWriter^ writer = gcnew XmlTextWriter(filePath, nullptr);
		writer->Formatting = Formatting::Indented;
		writer->WriteStartDocument();
		writer->WriteStartElement("Data");

		for (int i = 0; i < (dataGridView->Rows->Count - 1); i++) {
			writer->WriteStartElement("Row");
			for (int j = 0; j < dataGridView->Columns->Count; j++) {
				writer->WriteStartElement(dataGridView->Columns[j]->HeaderText->Replace(" ", ""));
				writer->WriteString(dataGridView->Rows[i]->Cells[j]->Value->ToString());
				writer->WriteEndElement();
			}
			writer->WriteEndElement();
		}

		writer->WriteEndElement();
		writer->WriteEndDocument();
		writer->Close();
	}
};
}