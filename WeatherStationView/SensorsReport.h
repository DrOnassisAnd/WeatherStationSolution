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
	/// Resumen de SensorsReport
	/// </summary>
	public ref class SensorsReport : public System::Windows::Forms::Form
	{
	public:
		SensorsReport(User^ User)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->user = User;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
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
	private: int soloFechas = 0;
	private: int solounDia = 0;
	private: List<String^>^ datetimeCIA = gcnew List<String^>();
	private: List<String^>^ datetimeFACI = gcnew List<String^>();
	private: List<String^>^ datetimeBIBLIO = gcnew List<String^>();
	private: List<String^>^ datetimeTINKUY = gcnew List<String^>();
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

	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::CheckBox^ FACIChk;
	private: System::Windows::Forms::CheckBox^ TinkuyChk;


	private: System::Windows::Forms::CheckBox^ BiblioChk;

	private: System::Windows::Forms::CheckBox^ CIAChk;







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
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->FACIChk = (gcnew System::Windows::Forms::CheckBox());
			this->TinkuyChk = (gcnew System::Windows::Forms::CheckBox());
			this->BiblioChk = (gcnew System::Windows::Forms::CheckBox());
			this->CIAChk = (gcnew System::Windows::Forms::CheckBox());
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
			this->dataGridView1->Location = System::Drawing::Point(12, 141);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(394, 312);
			this->dataGridView1->TabIndex = 14;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"IdMedicion";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 125;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Temperatura";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// UnidadTempdgv
			// 
			this->UnidadTempdgv->HeaderText = L"Unidad Temperatura";
			this->UnidadTempdgv->Name = L"UnidadTempdgv";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Humedad";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Concentracion CO";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Calidad Aire";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 125;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Ubicacion Geografica";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 125;
			// 
			// Fecha
			// 
			this->Fecha->HeaderText = L"Fecha";
			this->Fecha->MinimumWidth = 6;
			this->Fecha->Name = L"Fecha";
			this->Fecha->Width = 125;
			// 
			// dgvHora
			// 
			this->dgvHora->HeaderText = L"Hora";
			this->dgvHora->MinimumWidth = 6;
			this->dgvHora->Name = L"dgvHora";
			this->dgvHora->Width = 125;
			// 
			// CerrarBtn
			// 
			this->CerrarBtn->Location = System::Drawing::Point(986, 70);
			this->CerrarBtn->Name = L"CerrarBtn";
			this->CerrarBtn->Size = System::Drawing::Size(75, 23);
			this->CerrarBtn->TabIndex = 16;
			this->CerrarBtn->Text = L"Cerrar";
			this->CerrarBtn->UseVisualStyleBackColor = true;
			this->CerrarBtn->Click += gcnew System::EventHandler(this, &SensorsReport::CerrarBtn_Click);
			// 
			// BuscarBtn
			// 
			this->BuscarBtn->Location = System::Drawing::Point(333, 20);
			this->BuscarBtn->Name = L"BuscarBtn";
			this->BuscarBtn->Size = System::Drawing::Size(75, 23);
			this->BuscarBtn->TabIndex = 15;
			this->BuscarBtn->Text = L"Buscar";
			this->BuscarBtn->UseVisualStyleBackColor = true;
			this->BuscarBtn->Click += gcnew System::EventHandler(this, &SensorsReport::Buscar_Click);
			// 
			// MinBox
			// 
			this->MinBox->Location = System::Drawing::Point(21, 87);
			this->MinBox->Name = L"MinBox";
			this->MinBox->Size = System::Drawing::Size(112, 20);
			this->MinBox->TabIndex = 17;
			// 
			// CriterioBox
			// 
			this->CriterioBox->FormattingEnabled = true;
			this->CriterioBox->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Temperatura", L"Humedad", L"Concentracion CO",
					L"Calidad Aire", L"Fecha-Hora"
			});
			this->CriterioBox->Location = System::Drawing::Point(21, 35);
			this->CriterioBox->Name = L"CriterioBox";
			this->CriterioBox->Size = System::Drawing::Size(121, 21);
			this->CriterioBox->TabIndex = 18;
			this->CriterioBox->SelectedIndexChanged += gcnew System::EventHandler(this, &SensorsReport::EleccionCriterio);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(18, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(105, 13);
			this->label1->TabIndex = 19;
			this->label1->Text = L"Criterio de Búsqueda";
			// 
			// MaxBox
			// 
			this->MaxBox->Location = System::Drawing::Point(215, 87);
			this->MaxBox->Name = L"MaxBox";
			this->MaxBox->Size = System::Drawing::Size(109, 20);
			this->MaxBox->TabIndex = 20;
			// 
			// MinLabel
			// 
			this->MinLabel->AutoSize = true;
			this->MinLabel->Location = System::Drawing::Point(12, 68);
			this->MinLabel->Name = L"MinLabel";
			this->MinLabel->Size = System::Drawing::Size(35, 13);
			this->MinLabel->TabIndex = 21;
			this->MinLabel->Text = L"label2";
			// 
			// MaxLabel
			// 
			this->MaxLabel->AutoSize = true;
			this->MaxLabel->Location = System::Drawing::Point(213, 68);
			this->MaxLabel->Name = L"MaxLabel";
			this->MaxLabel->Size = System::Drawing::Size(35, 13);
			this->MaxLabel->TabIndex = 22;
			this->MaxLabel->Text = L"label3";
			// 
			// RestablecerBtn
			// 
			this->RestablecerBtn->Location = System::Drawing::Point(331, 53);
			this->RestablecerBtn->Name = L"RestablecerBtn";
			this->RestablecerBtn->Size = System::Drawing::Size(75, 23);
			this->RestablecerBtn->TabIndex = 23;
			this->RestablecerBtn->Text = L"Restablecer";
			this->RestablecerBtn->UseVisualStyleBackColor = true;
			this->RestablecerBtn->Click += gcnew System::EventHandler(this, &SensorsReport::Restablecer_Click);
			// 
			// HoraInicial
			// 
			this->HoraInicial->Location = System::Drawing::Point(12, 114);
			this->HoraInicial->Name = L"HoraInicial";
			this->HoraInicial->Size = System::Drawing::Size(28, 20);
			this->HoraInicial->TabIndex = 24;
			// 
			// MinutoInicial
			// 
			this->MinutoInicial->Location = System::Drawing::Point(55, 114);
			this->MinutoInicial->Name = L"MinutoInicial";
			this->MinutoInicial->Size = System::Drawing::Size(28, 20);
			this->MinutoInicial->TabIndex = 25;
			// 
			// MinutoFinal
			// 
			this->MinutoFinal->Location = System::Drawing::Point(257, 114);
			this->MinutoFinal->Name = L"MinutoFinal";
			this->MinutoFinal->Size = System::Drawing::Size(28, 20);
			this->MinutoFinal->TabIndex = 30;
			// 
			// HoraFinal
			// 
			this->HoraFinal->Location = System::Drawing::Point(215, 114);
			this->HoraFinal->Name = L"HoraFinal";
			this->HoraFinal->Size = System::Drawing::Size(28, 20);
			this->HoraFinal->TabIndex = 29;
			// 
			// AMPM1
			// 
			this->AMPM1->FormattingEnabled = true;
			this->AMPM1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"a.m.", L"p.m." });
			this->AMPM1->Location = System::Drawing::Point(93, 114);
			this->AMPM1->Name = L"AMPM1";
			this->AMPM1->Size = System::Drawing::Size(43, 21);
			this->AMPM1->TabIndex = 31;
			// 
			// AMPM2
			// 
			this->AMPM2->FormattingEnabled = true;
			this->AMPM2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"a.m.", L"p.m." });
			this->AMPM2->Location = System::Drawing::Point(293, 113);
			this->AMPM2->Name = L"AMPM2";
			this->AMPM2->Size = System::Drawing::Size(43, 21);
			this->AMPM2->TabIndex = 32;
			// 
			// dosPuntos1
			// 
			this->dosPuntos1->AutoSize = true;
			this->dosPuntos1->Location = System::Drawing::Point(43, 117);
			this->dosPuntos1->Name = L"dosPuntos1";
			this->dosPuntos1->Size = System::Drawing::Size(10, 13);
			this->dosPuntos1->TabIndex = 33;
			this->dosPuntos1->Text = L":";
			// 
			// dosPuntos2
			// 
			this->dosPuntos2->AutoSize = true;
			this->dosPuntos2->Location = System::Drawing::Point(245, 117);
			this->dosPuntos2->Name = L"dosPuntos2";
			this->dosPuntos2->Size = System::Drawing::Size(10, 13);
			this->dosPuntos2->TabIndex = 34;
			this->dosPuntos2->Text = L":";
			// 
			// dtp1
			// 
			this->dtp1->Location = System::Drawing::Point(12, 87);
			this->dtp1->Name = L"dtp1";
			this->dtp1->Size = System::Drawing::Size(193, 20);
			this->dtp1->TabIndex = 35;
			// 
			// dtp2
			// 
			this->dtp2->Location = System::Drawing::Point(215, 87);
			this->dtp2->Name = L"dtp2";
			this->dtp2->Size = System::Drawing::Size(193, 20);
			this->dtp2->TabIndex = 36;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(171, 15);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(85, 17);
			this->checkBox1->TabIndex = 37;
			this->checkBox1->Text = L"Solo Fechas";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &SensorsReport::SoloFechas);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(170, 41);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(81, 17);
			this->checkBox2->TabIndex = 38;
			this->checkBox2->Text = L"Solo un día";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &SensorsReport::SoloUnDia);
			// 
			// chart4
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart4->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart4->Legends->Add(legend1);
			this->chart4->Location = System::Drawing::Point(485, 110);
			this->chart4->Margin = System::Windows::Forms::Padding(2);
			this->chart4->Name = L"chart4";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Legend = L"Legend1";
			series1->Name = L"CIA";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->Legend = L"Legend1";
			series2->Name = L"FACI";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series3->Legend = L"Legend1";
			series3->Name = L"TINKUY";
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series4->Legend = L"Legend1";
			series4->Name = L"BIBLIOTECA";
			this->chart4->Series->Add(series1);
			this->chart4->Series->Add(series2);
			this->chart4->Series->Add(series3);
			this->chart4->Series->Add(series4);
			this->chart4->Size = System::Drawing::Size(576, 376);
			this->chart4->TabIndex = 46;
			this->chart4->Text = L"chart4";
			// 
			// chart3
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart3->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart3->Legends->Add(legend2);
			this->chart3->Location = System::Drawing::Point(485, 113);
			this->chart3->Margin = System::Windows::Forms::Padding(2);
			this->chart3->Name = L"chart3";
			series5->ChartArea = L"ChartArea1";
			series5->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series5->Legend = L"Legend1";
			series5->Name = L"CIA";
			series6->ChartArea = L"ChartArea1";
			series6->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series6->Legend = L"Legend1";
			series6->Name = L"FACI";
			series7->ChartArea = L"ChartArea1";
			series7->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series7->Legend = L"Legend1";
			series7->Name = L"TINKUY";
			series8->ChartArea = L"ChartArea1";
			series8->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series8->Legend = L"Legend1";
			series8->Name = L"BIBLIOTECA";
			this->chart3->Series->Add(series5);
			this->chart3->Series->Add(series6);
			this->chart3->Series->Add(series7);
			this->chart3->Series->Add(series8);
			this->chart3->Size = System::Drawing::Size(576, 376);
			this->chart3->TabIndex = 45;
			this->chart3->Text = L"chart3";
			// 
			// chart2
			// 
			chartArea3->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chart2->Legends->Add(legend3);
			this->chart2->Location = System::Drawing::Point(485, 113);
			this->chart2->Margin = System::Windows::Forms::Padding(2);
			this->chart2->Name = L"chart2";
			series9->ChartArea = L"ChartArea1";
			series9->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series9->Legend = L"Legend1";
			series9->Name = L"CIA";
			series10->ChartArea = L"ChartArea1";
			series10->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series10->Legend = L"Legend1";
			series10->Name = L"FACI";
			series11->ChartArea = L"ChartArea1";
			series11->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series11->Legend = L"Legend1";
			series11->Name = L"TINKUY";
			series12->ChartArea = L"ChartArea1";
			series12->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series12->Legend = L"Legend1";
			series12->Name = L"BIBLIOTECA";
			this->chart2->Series->Add(series9);
			this->chart2->Series->Add(series10);
			this->chart2->Series->Add(series11);
			this->chart2->Series->Add(series12);
			this->chart2->Size = System::Drawing::Size(576, 376);
			this->chart2->TabIndex = 44;
			this->chart2->Text = L"chart2";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(544, 53);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(50, 13);
			this->label4->TabIndex = 42;
			this->label4->Text = L"Medicion";
			// 
			// chart1
			// 
			chartArea4->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea4);
			legend4->Name = L"Legend1";
			this->chart1->Legends->Add(legend4);
			this->chart1->Location = System::Drawing::Point(485, 113);
			this->chart1->Margin = System::Windows::Forms::Padding(2);
			this->chart1->Name = L"chart1";
			series13->ChartArea = L"ChartArea1";
			series13->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series13->Legend = L"Legend1";
			series13->Name = L"CIA";
			series14->ChartArea = L"ChartArea1";
			series14->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series14->Legend = L"Legend1";
			series14->Name = L"FACI";
			series15->ChartArea = L"ChartArea1";
			series15->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series15->Legend = L"Legend1";
			series15->Name = L"TINKUY";
			series16->ChartArea = L"ChartArea1";
			series16->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series16->Legend = L"Legend1";
			series16->Name = L"BIBLIOTECA";
			this->chart1->Series->Add(series13);
			this->chart1->Series->Add(series14);
			this->chart1->Series->Add(series15);
			this->chart1->Series->Add(series16);
			this->chart1->Size = System::Drawing::Size(576, 376);
			this->chart1->TabIndex = 40;
			this->chart1->Text = L"chart1";
			// 
			// FACIChk
			// 
			this->FACIChk->AutoSize = true;
			this->FACIChk->Checked = true;
			this->FACIChk->CheckState = System::Windows::Forms::CheckState::Checked;
			this->FACIChk->Location = System::Drawing::Point(609, 77);
			this->FACIChk->Name = L"FACIChk";
			this->FACIChk->Size = System::Drawing::Size(49, 17);
			this->FACIChk->TabIndex = 47;
			this->FACIChk->Text = L"FACI";
			this->FACIChk->UseVisualStyleBackColor = true;
			this->FACIChk->CheckedChanged += gcnew System::EventHandler(this, &SensorsReport::FACI_Check);
			// 
			// TinkuyChk
			// 
			this->TinkuyChk->AutoSize = true;
			this->TinkuyChk->Checked = true;
			this->TinkuyChk->CheckState = System::Windows::Forms::CheckState::Checked;
			this->TinkuyChk->Location = System::Drawing::Point(836, 76);
			this->TinkuyChk->Name = L"TinkuyChk";
			this->TinkuyChk->Size = System::Drawing::Size(66, 17);
			this->TinkuyChk->TabIndex = 48;
			this->TinkuyChk->Text = L"TINKUY";
			this->TinkuyChk->UseVisualStyleBackColor = true;
			this->TinkuyChk->CheckedChanged += gcnew System::EventHandler(this, &SensorsReport::TINKUY_Check);
			// 
			// BiblioChk
			// 
			this->BiblioChk->AutoSize = true;
			this->BiblioChk->Checked = true;
			this->BiblioChk->CheckState = System::Windows::Forms::CheckState::Checked;
			this->BiblioChk->Location = System::Drawing::Point(679, 77);
			this->BiblioChk->Name = L"BiblioChk";
			this->BiblioChk->Size = System::Drawing::Size(141, 17);
			this->BiblioChk->TabIndex = 49;
			this->BiblioChk->Text = L"BIBLIOTECA CENTRAL";
			this->BiblioChk->UseVisualStyleBackColor = true;
			this->BiblioChk->CheckedChanged += gcnew System::EventHandler(this, &SensorsReport::BIBLIO_Check);
			// 
			// CIAChk
			// 
			this->CIAChk->AutoSize = true;
			this->CIAChk->Checked = true;
			this->CIAChk->CheckState = System::Windows::Forms::CheckState::Checked;
			this->CIAChk->Location = System::Drawing::Point(547, 77);
			this->CIAChk->Name = L"CIAChk";
			this->CIAChk->Size = System::Drawing::Size(43, 17);
			this->CIAChk->TabIndex = 50;
			this->CIAChk->Text = L"CIA";
			this->CIAChk->UseVisualStyleBackColor = true;
			this->CIAChk->CheckedChanged += gcnew System::EventHandler(this, &SensorsReport::CIA_Check);
			// 
			// SensorsReport
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1071, 499);
			this->Controls->Add(this->CIAChk);
			this->Controls->Add(this->BiblioChk);
			this->Controls->Add(this->TinkuyChk);
			this->Controls->Add(this->FACIChk);
			this->Controls->Add(this->chart4);
			this->Controls->Add(this->chart3);
			this->Controls->Add(this->chart2);
			this->Controls->Add(this->label4);
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
			this->Text = L"SensorsReport";
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
			//tabla
			for each (Ambiente ^ dato in ambiente_aux) {
				int temp = dynamic_cast<SensorTemperaturaHumedad^>(dato->DataBase[0])->Temperatura;
				if ((temp >= Int32::Parse(MinBox->Text)) && (temp <= Int32::Parse(MaxBox->Text))) {
					// El valor de Temperatura está dentro del rango, agrega el dato filtrado a la nueva lista.
					ambiente_to_filter->Add(dato);
				}
			}
			for each (Ambiente ^ dato in ambiente_aux_2) {
				int temp = dynamic_cast<SensorTemperaturaHumedad^>(dato->DataBase[0])->Temperatura;
				if ((temp >= Int32::Parse(MinBox->Text)) && (temp <= Int32::Parse(MaxBox->Text))) {
					// El valor de Temperatura está dentro del rango, agrega el dato filtrado a la nueva lista.
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


		}
		else if (CriterioBox->SelectedItem->ToString() == "Humedad") {
			for each (Ambiente ^ dato in ambiente_aux) {
				int humedad = dynamic_cast<SensorTemperaturaHumedad^>(dato->DataBase[0])->Humedad;
				if ((humedad >= Int32::Parse(MinBox->Text)) && (humedad <= Int32::Parse(MaxBox->Text))) {
					// El valor de Temperatura está dentro del rango, agrega el dato filtrado a la nueva lista.
					ambiente_to_filter->Add(dato);
				}
			}
			for each (Ambiente ^ dato in ambiente_aux_2) {
				int humedad = dynamic_cast<SensorTemperaturaHumedad^>(dato->DataBase[0])->Humedad;
				if ((humedad >= Int32::Parse(MinBox->Text)) && (humedad <= Int32::Parse(MaxBox->Text))) {
					// El valor de Temperatura está dentro del rango, agrega el dato filtrado a la nueva lista.
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
		}
		else if (CriterioBox->SelectedItem->ToString() == "Concentracion CO") {
			//tabla
			for each (Ambiente ^ dato in ambiente_aux) {
				int CO = dynamic_cast<SensorCO^>(dato->DataBase[1])->NivelCO;
				if ((CO >= Int32::Parse(MinBox->Text)) && (CO <= Int32::Parse(MaxBox->Text))) {
					// El valor de Temperatura está dentro del rango, agrega el dato filtrado a la nueva lista.
					ambiente_to_filter->Add(dato);
				}
			}
			for each (Ambiente ^ dato in ambiente_aux_2) {
				int CO = dynamic_cast<SensorCO^>(dato->DataBase[1])->NivelCO;
				if ((CO >= Int32::Parse(MinBox->Text)) && (CO <= Int32::Parse(MaxBox->Text))) {
					// El valor de Temperatura está dentro del rango, agrega el dato filtrado a la nueva lista.
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
		}
		else if (CriterioBox->SelectedItem->ToString() == "Calidad Aire") {
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
		}
		//Ubicacion Geografica: Se piensa actualizar, para observar data de varios lugares con el mismo
		// boton que se utiliza en los chart
		else if ((CriterioBox->SelectedItem->ToString() == "Fecha-Hora") && (soloFechas % 2 == 0) && (solounDia % 2 == 0)) {
			DateTime fechaInicio = dtp1->Value;
			int Hora1 = Int32::Parse(HoraInicial->Text);
			int Min1 = Int32::Parse(MinutoInicial->Text);
			String^ ampm1 = AMPM1->SelectedItem->ToString();
			int factor1 = (ampm1 == "a.m.") ? 0 : 12; //if fino, a ? b : c, a condicion, b Sí, c No
			fechaInicio = fechaInicio.Date.AddHours(Hora1 + factor1).AddMinutes(Min1).AddSeconds(0);

			DateTime fechaFin = dtp2->Value;
			int Hora2 = Int32::Parse(HoraFinal->Text);
			int Min2 = Int32::Parse(MinutoFinal->Text);
			String^ ampm2 = AMPM2->SelectedItem->ToString();
			int factor2 = (ampm2 == "a.m.") ? 0 : 12;
			fechaFin = fechaFin.Date.AddHours(Hora2 + factor2).AddMinutes(Min2).AddSeconds(0);

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

		}
		else if ((CriterioBox->SelectedItem->ToString() == "Fecha-Hora") && (soloFechas % 2 == 1) && (solounDia % 2 == 0)) {
			DateTime fechaInicio = dtp1->Value;
			fechaInicio = fechaInicio.Date.AddHours(0).AddMinutes(0).AddSeconds(0);

			DateTime fechaFin = dtp2->Value;
			fechaFin = fechaFin.Date.AddHours(23).AddMinutes(59).AddSeconds(59);

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
		}
		else if ((CriterioBox->SelectedItem->ToString() == "Fecha-Hora") && (soloFechas % 2 == 1) && (solounDia % 2 == 1)) {
			DateTime fechaInicio = dtp1->Value;
			fechaInicio = fechaInicio.Date.AddHours(0).AddMinutes(0).AddSeconds(0);

			DateTime fechaFin = fechaInicio.Date.AddHours(23).AddMinutes(59).AddSeconds(59);

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
		}
		else if ((CriterioBox->SelectedItem->ToString() == "Fecha-Hora") && (soloFechas % 2 == 0) && (solounDia % 2 == 1)) {
			DateTime fechaInicio = dtp1->Value;
			int Hora1 = Int32::Parse(HoraInicial->Text);
			int Min1 = Int32::Parse(MinutoInicial->Text);
			String^ ampm1 = AMPM1->SelectedItem->ToString();
			int factor1 = (ampm1 == "a.m.") ? 0 : 12; //if fino, a ? b : c, a condicion, b Sí, c No
			fechaInicio = fechaInicio.Date.AddHours(Hora1 + factor1).AddMinutes(Min1).AddSeconds(0);


			int Hora2 = Int32::Parse(HoraFinal->Text);
			int Min2 = Int32::Parse(MinutoFinal->Text);
			String^ ampm2 = AMPM2->SelectedItem->ToString();
			int factor2 = (ampm2 == "a.m.") ? 0 : 12;
			DateTime fechaFin = fechaInicio.Date.AddHours(Hora2 + factor2).AddMinutes(Min2).AddSeconds(0);

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
		}
		else {
			MessageBox::Show("You shouldn't be here.");
		}
		ambiente_aux = ambiente_to_filter;
		ambiente_aux_2 = ambiente_to_filter_2;

		ShowFilteredData(ambiente_to_filter);
	}

	private: System::Void SensorsReportLoad(System::Object^ sender, System::EventArgs^ e) {
		MinLabel->Text = "Temperatura minima";
		MaxLabel->Text = "Temperatura maxima";
		CriterioBox->SelectedIndex = 0;
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

				   DateTime fechaFin = DateTime::Today;
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
		if (CriterioBox->SelectedItem->ToString() == "Temperatura") {
			MinLabel->Text = "Temperatura minima";
			MinBox->Visible = true;
			MaxLabel->Text = "Temperatura maxima";
			MaxLabel->Visible = true;
			MaxBox->Visible = true;
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
			FechaVisible(0);
			chart1->Visible = false;
			chart2->Visible = false;
			chart3->Visible = false;
			chart4->Visible = true;
		}
		else if (CriterioBox->SelectedItem->ToString() == "Fecha-Hora") {
			//implemented
			FechaVisible(1);
			MinLabel->Text = "Ubicacion Seleccionada";
			MaxLabel->Text = "Ubicacion Seleccionada";
			MinBox->Visible = false;
			MaxBox->Visible = false;
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
		ShowAmbienteData();
		LoadCharts();

		this->CIAChk->Checked = true;
		this->FACIChk->Checked = true;
		this->BiblioChk->Checked = true;
		this->TinkuyChk->Checked = true;
	}
	private: System::Void SoloUnDia(System::Object^ sender, System::EventArgs^ e) {
		solounDia++;
		if (solounDia % 2) {
			dtp2->Visible = false;
			MaxLabel->Visible = false;
		}
		else {
			dtp2->Visible = true;
			MaxLabel->Visible = true;
		}
	}
	private: System::Void SoloFechas(System::Object^ sender, System::EventArgs^ e) {
		soloFechas++;
		if (soloFechas % 2) {
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
			   datetimeFACI = gcnew List<String^>();
			   datetimeBIBLIO = gcnew List<String^>();
			   datetimeTINKUY = gcnew List<String^>();



			   //se inicializa las listas con los datos respectivos de cada lugar

			   for each (int index in indexdataCIA)
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

			   if (user->membresia->TipoMembresia == "Estandar") {
				   DateTime fechaFin = DateTime::Today;
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

	};
}
