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
	/// Resumen de SensorsReport
	/// </summary>
	public ref class SensorsReport : public System::Windows::Forms::Form
	{
	public:
		SensorsReport(void)
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
		~SensorsReport()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: List<Ambiente^>^ sensorData;
	private: List<Ambiente^>^ ambiente_aux;
	private: int soloFechas=0;
	private: int solounDia=0;
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


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DateTimePicker^ dtp1;
	private: System::Windows::Forms::DateTimePicker^ dtp2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::Button^ button1;






	protected:









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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dtp1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dtp2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->Column6,
					this->Column1, this->UnidadTempdgv, this->Column2, this->Column3, this->Column4, this->Column5, this->Fecha, this->dgvHora
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 97);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(741, 177);
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
			this->CerrarBtn->Location = System::Drawing::Point(667, 291);
			this->CerrarBtn->Name = L"CerrarBtn";
			this->CerrarBtn->Size = System::Drawing::Size(75, 23);
			this->CerrarBtn->TabIndex = 16;
			this->CerrarBtn->Text = L"Cerrar";
			this->CerrarBtn->UseVisualStyleBackColor = true;
			this->CerrarBtn->Click += gcnew System::EventHandler(this, &SensorsReport::CerrarBtn_Click);
			// 
			// BuscarBtn
			// 
			this->BuscarBtn->Location = System::Drawing::Point(667, 40);
			this->BuscarBtn->Name = L"BuscarBtn";
			this->BuscarBtn->Size = System::Drawing::Size(75, 23);
			this->BuscarBtn->TabIndex = 15;
			this->BuscarBtn->Text = L"Buscar";
			this->BuscarBtn->UseVisualStyleBackColor = true;
			this->BuscarBtn->Click += gcnew System::EventHandler(this, &SensorsReport::Buscar_Click);
			// 
			// MinBox
			// 
			this->MinBox->Location = System::Drawing::Point(213, 42);
			this->MinBox->Name = L"MinBox";
			this->MinBox->Size = System::Drawing::Size(112, 20);
			this->MinBox->TabIndex = 17;
			// 
			// CriterioBox
			// 
			this->CriterioBox->FormattingEnabled = true;
			this->CriterioBox->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Temperatura", L"Humedad", L"Concentracion CO",
					L"Calidad Aire", L"Ubicacion Geografica", L"Fecha-Hora"
			});
			this->CriterioBox->Location = System::Drawing::Point(21, 40);
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
			this->MaxBox->Location = System::Drawing::Point(415, 42);
			this->MaxBox->Name = L"MaxBox";
			this->MaxBox->Size = System::Drawing::Size(109, 20);
			this->MaxBox->TabIndex = 20;
			// 
			// MinLabel
			// 
			this->MinLabel->AutoSize = true;
			this->MinLabel->Location = System::Drawing::Point(213, 15);
			this->MinLabel->Name = L"MinLabel";
			this->MinLabel->Size = System::Drawing::Size(35, 13);
			this->MinLabel->TabIndex = 21;
			this->MinLabel->Text = L"label2";
			// 
			// MaxLabel
			// 
			this->MaxLabel->AutoSize = true;
			this->MaxLabel->Location = System::Drawing::Point(412, 15);
			this->MaxLabel->Name = L"MaxLabel";
			this->MaxLabel->Size = System::Drawing::Size(35, 13);
			this->MaxLabel->TabIndex = 22;
			this->MaxLabel->Text = L"label3";
			// 
			// RestablecerBtn
			// 
			this->RestablecerBtn->Location = System::Drawing::Point(561, 291);
			this->RestablecerBtn->Name = L"RestablecerBtn";
			this->RestablecerBtn->Size = System::Drawing::Size(75, 23);
			this->RestablecerBtn->TabIndex = 23;
			this->RestablecerBtn->Text = L"Restablecer";
			this->RestablecerBtn->UseVisualStyleBackColor = true;
			this->RestablecerBtn->Click += gcnew System::EventHandler(this, &SensorsReport::Restablecer_Click);
			// 
			// HoraInicial
			// 
			this->HoraInicial->Location = System::Drawing::Point(213, 69);
			this->HoraInicial->Name = L"HoraInicial";
			this->HoraInicial->Size = System::Drawing::Size(28, 20);
			this->HoraInicial->TabIndex = 24;
			// 
			// MinutoInicial
			// 
			this->MinutoInicial->Location = System::Drawing::Point(256, 69);
			this->MinutoInicial->Name = L"MinutoInicial";
			this->MinutoInicial->Size = System::Drawing::Size(28, 20);
			this->MinutoInicial->TabIndex = 25;
			// 
			// MinutoFinal
			// 
			this->MinutoFinal->Location = System::Drawing::Point(457, 69);
			this->MinutoFinal->Name = L"MinutoFinal";
			this->MinutoFinal->Size = System::Drawing::Size(28, 20);
			this->MinutoFinal->TabIndex = 30;
			// 
			// HoraFinal
			// 
			this->HoraFinal->Location = System::Drawing::Point(415, 69);
			this->HoraFinal->Name = L"HoraFinal";
			this->HoraFinal->Size = System::Drawing::Size(28, 20);
			this->HoraFinal->TabIndex = 29;
			// 
			// AMPM1
			// 
			this->AMPM1->FormattingEnabled = true;
			this->AMPM1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"a.m.", L"p.m." });
			this->AMPM1->Location = System::Drawing::Point(294, 69);
			this->AMPM1->Name = L"AMPM1";
			this->AMPM1->Size = System::Drawing::Size(43, 21);
			this->AMPM1->TabIndex = 31;
			// 
			// AMPM2
			// 
			this->AMPM2->FormattingEnabled = true;
			this->AMPM2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"a.m.", L"p.m." });
			this->AMPM2->Location = System::Drawing::Point(493, 68);
			this->AMPM2->Name = L"AMPM2";
			this->AMPM2->Size = System::Drawing::Size(43, 21);
			this->AMPM2->TabIndex = 32;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(244, 72);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(10, 13);
			this->label2->TabIndex = 33;
			this->label2->Text = L":";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(445, 72);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(10, 13);
			this->label3->TabIndex = 34;
			this->label3->Text = L":";
			// 
			// dtp1
			// 
			this->dtp1->Location = System::Drawing::Point(213, 42);
			this->dtp1->Name = L"dtp1";
			this->dtp1->Size = System::Drawing::Size(193, 20);
			this->dtp1->TabIndex = 35;
			// 
			// dtp2
			// 
			this->dtp2->Location = System::Drawing::Point(415, 42);
			this->dtp2->Name = L"dtp2";
			this->dtp2->Size = System::Drawing::Size(193, 20);
			this->dtp2->TabIndex = 36;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(12, 73);
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
			this->checkBox2->Location = System::Drawing::Point(108, 73);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(81, 17);
			this->checkBox2->TabIndex = 38;
			this->checkBox2->Text = L"Solo un día";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &SensorsReport::SoloUnDia);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(21, 291);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(121, 23);
			this->button1->TabIndex = 39;
			this->button1->Text = L"Mostrar Graficos";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SensorsReport::MostrarGraficosClick);
			// 
			// SensorsReport
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(765, 326);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->dtp2);
			this->Controls->Add(this->dtp1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
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
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Buscar_Click(System::Object^ sender, System::EventArgs^ e) {
		List<Ambiente^>^ ambiente_to_filter = gcnew List<Ambiente^>(); //lista a ser filtrada
		if (CriterioBox->SelectedItem->ToString() == "Temperatura") {
			for each (Ambiente^ dato in ambiente_aux) {
				int temp = dynamic_cast<SensorTemperaturaHumedad^>(dato->DataBase[0])->Temperatura;
				if ((temp >= Int32::Parse(MinBox->Text)) && (temp <= Int32::Parse(MaxBox->Text))) {
					// El valor de Temperatura está dentro del rango, agrega el dato filtrado a la nueva lista.
					ambiente_to_filter->Add(dato);
				}
			}
		}
		else if (CriterioBox->SelectedItem->ToString() == "Humedad") {
			for each (Ambiente^ dato in ambiente_aux) {
				int humedad = dynamic_cast<SensorTemperaturaHumedad^>(dato->DataBase[0])->Humedad;
				if ((humedad >= Int32::Parse(MinBox->Text)) && (humedad <= Int32::Parse(MaxBox->Text))) {
					// El valor de Temperatura está dentro del rango, agrega el dato filtrado a la nueva lista.
					ambiente_to_filter->Add(dato);
				}
			}
		}
		else if (CriterioBox->SelectedItem->ToString() == "Concentracion CO") {
			for each (Ambiente^ dato in ambiente_aux) {
				int CO = dynamic_cast<SensorCO^>(dato->DataBase[1])->NivelCO;
				if ((CO >= Int32::Parse(MinBox->Text)) && (CO <= Int32::Parse(MaxBox->Text))) {
					// El valor de Temperatura está dentro del rango, agrega el dato filtrado a la nueva lista.
					ambiente_to_filter->Add(dato);
				}
			}
		}
		else if (CriterioBox->SelectedItem->ToString() == "Calidad Aire") {
			for each (Ambiente^ dato in ambiente_aux) {
				int AirQ = dynamic_cast<SensorCalidadAire^>(dato->DataBase[2])->CalidadAire;
				if ((AirQ >= Int32::Parse(MinBox->Text)) && (AirQ <= Int32::Parse(MaxBox->Text))) {
					// El valor de Temperatura está dentro del rango, agrega el dato filtrado a la nueva lista.
					ambiente_to_filter->Add(dato);
				}
			}
		}
		else if (CriterioBox->SelectedItem->ToString() == "Ubicacion Geografica") {
			for each (Ambiente^ dato in ambiente_aux) {
				String^ ubiGeo = dato->UbicacionGeografica;
				if (ubiGeo == MinBox->Text) {
					// El valor de Temperatura está dentro del rango, agrega el dato filtrado a la nueva lista.
					ambiente_to_filter->Add(dato);
				}
			}
		}
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
			fechaFin = fechaFin.Date.AddHours(Hora2+factor2).AddMinutes(Min2).AddSeconds(0);
			
			for each (Ambiente^ dato in ambiente_aux) {
				DateTime fechaSensor = DateTime::ParseExact(dato->FechaMedicion, "yyyy-MM-dd", nullptr);
				DateTime horaSensor = DateTime::ParseExact(dato->TiempoMedicion, "hh:mm:ss tt", nullptr);
				DateTime fechaYHora = fechaSensor.Date + horaSensor.TimeOfDay; //gpts

				if ((fechaYHora >= fechaInicio) && (fechaYHora <= fechaFin)) {
					// El valor de Temperatura está dentro del rango, agrega el dato filtrado a la nueva lista.
					ambiente_to_filter->Add(dato);
				}
			}
		}
		else if ((CriterioBox->SelectedItem->ToString() == "Fecha-Hora") && (soloFechas % 2 == 1) && (solounDia % 2 == 0)) {
			DateTime fechaInicio = dtp1->Value;
			fechaInicio = fechaInicio.Date.AddHours(0).AddMinutes(0).AddSeconds(0);

			DateTime fechaFin = dtp2->Value;
			fechaFin = fechaFin.Date.AddHours(23).AddMinutes(59).AddSeconds(59);

			for each (Ambiente^ dato in ambiente_aux) {
				DateTime fechaSensor = DateTime::ParseExact(dato->FechaMedicion, "yyyy-MM-dd", nullptr);
				DateTime horaSensor = DateTime::ParseExact(dato->TiempoMedicion, "hh:mm:ss tt", nullptr);
				DateTime fechaYHora = fechaSensor.Date + horaSensor.TimeOfDay; //gpts

				if ((fechaYHora >= fechaInicio) && (fechaYHora <= fechaFin)) {
					// El valor de Temperatura está dentro del rango, agrega el dato filtrado a la nueva lista.
					ambiente_to_filter->Add(dato);
				}
			}
		}
		else if ((CriterioBox->SelectedItem->ToString() == "Fecha-Hora") && (soloFechas % 2 == 1) && (solounDia % 2 == 1)) {
			DateTime fechaInicio = dtp1->Value;
			fechaInicio = fechaInicio.Date.AddHours(0).AddMinutes(0).AddSeconds(0);

			DateTime fechaFin = fechaInicio.Date.AddHours(23).AddMinutes(59).AddSeconds(59);

			for each (Ambiente^ dato in ambiente_aux) {
				DateTime fechaSensor = DateTime::ParseExact(dato->FechaMedicion, "yyyy-MM-dd", nullptr);
				DateTime horaSensor = DateTime::ParseExact(dato->TiempoMedicion, "hh:mm:ss tt", nullptr);
				DateTime fechaYHora = fechaSensor.Date + horaSensor.TimeOfDay; //gpts

				if ((fechaYHora >= fechaInicio) && (fechaYHora <= fechaFin)) {
					// El valor de Temperatura está dentro del rango, agrega el dato filtrado a la nueva lista.
					ambiente_to_filter->Add(dato);
				}
			}
		}
		else if ((CriterioBox->SelectedItem->ToString() == "Fecha-Hora") && (soloFechas % 2 == 0) && (solounDia % 2 == 1)) {
			//falta
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
				DateTime horaSensor = DateTime::ParseExact(dato->TiempoMedicion, "hh:mm:ss tt", nullptr);
				DateTime fechaYHora = fechaSensor.Date + horaSensor.TimeOfDay; //gpts

				if ((fechaYHora >= fechaInicio) && (fechaYHora <= fechaFin)) {
					// El valor de Temperatura está dentro del rango, agrega el dato filtrado a la nueva lista.
					ambiente_to_filter->Add(dato);
				}
			}
			}
		else {
			MessageBox::Show("You shouldn't be here.");
		}
		ambiente_aux = ambiente_to_filter;
		ShowFilteredData(ambiente_to_filter);
	}

private: System::Void SensorsReportLoad(System::Object^ sender, System::EventArgs^ e) {
	MinLabel->Text = "Temperatura minima";
	MaxLabel->Text = "Temperatura maxima";
	CriterioBox->SelectedIndex = 0;
	FechaVisible(0);

	ShowAmbienteData();
}
	   void ShowAmbienteData() {

		   sensorData = Controller::Controller::QueryAmbienteData();
		   ambiente_aux = sensorData;
		   dataGridView1->Rows->Clear();
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
	}
	else if (CriterioBox->SelectedItem->ToString() == "Humedad") {
		MinLabel->Text = "Humedad minima";
		MinBox->Visible = true;
		MaxLabel->Text = "Humedad maxima";
		MaxLabel->Visible = true;
		MaxBox->Visible = true;
		FechaVisible(0);
	}
	else if (CriterioBox->SelectedItem->ToString() == "Concentracion CO") {
		MinLabel->Text = "Concentracion minima";
		MinBox->Visible = true;
		MaxLabel->Text = "Concentracion maxima";
		MaxLabel->Visible = true;
		MaxBox->Visible = true;
		FechaVisible(0);
	}
	else if (CriterioBox->SelectedItem->ToString() == "Calidad Aire") {
		MinLabel->Text = "Calidad Aire minima";
		MinBox->Visible = true;
		MaxLabel->Text = "Calidad Aire maxima";
		MaxLabel->Visible = true;
		MaxBox->Visible = true;
		FechaVisible(0);
	}
	else if (CriterioBox->SelectedItem->ToString() == "Ubicacion Geografica") {
		MinLabel->Text = "Ubicacion Seleccionada";
		MinBox->Visible = true;
		MaxLabel-> Visible = false;
		MaxBox-> Visible = false;
		FechaVisible(0);
	}
	else if (CriterioBox->SelectedItem->ToString() == "Fecha-Hora") {
		//to be implemented
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
		   }
	   }
private: System::Void CerrarBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void Restablecer_Click(System::Object^ sender, System::EventArgs^ e) {
	ShowAmbienteData();
}
private: System::Void SoloUnDia(System::Object^ sender, System::EventArgs^ e) {
	solounDia++;
	if (solounDia % 2) {
		dtp2->Visible = false;
	}
	else {
		dtp2->Visible = true;
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
		label2->Visible = false;
		label3->Visible = false;
	}
	else {
		HoraFinal->Visible = true;
		HoraInicial->Visible = true;
		MinutoFinal->Visible = true;
		MinutoInicial->Visible = true;
		AMPM1->Visible = true;
		AMPM2->Visible = true;
		label2->Visible = true;
		label3->Visible = true;
	}
}
private: System::Void MostrarGraficosClick(System::Object^ sender, System::EventArgs^ e) {
	
}
};
}
