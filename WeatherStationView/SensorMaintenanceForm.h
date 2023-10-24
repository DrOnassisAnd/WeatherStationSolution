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
	/// Resumen de SensorMaintenanceForm
	/// </summary>
	public ref class SensorMaintenanceForm : public System::Windows::Forms::Form
	{
	public:
		SensorMaintenanceForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->idMedicion = 0;
			this->tiempoMedicion;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~SensorMaintenanceForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ TempLabel;
	private: System::Windows::Forms::Label^ HumLabel;
	private: System::Windows::Forms::Label^ COLabel;
	protected:

	protected:

	private: int idMedicion;
	private: String^ tiempoMedicion;
	private: System::Windows::Forms::TextBox^ TempBox;
	private: System::Windows::Forms::TextBox^ HumBox;
	private: System::Windows::Forms::TextBox^ COBox;
	private: System::Windows::Forms::TextBox^ AirQBox;
	private: System::Windows::Forms::Label^ AirQLabel;





	private: System::Windows::Forms::Button^ AgregarBtn;
	private: System::Windows::Forms::Button^ ModificarBtn;
	private: System::Windows::Forms::Button^ EliminarBtn;





	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ CerrarBtn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvHora;
	private: System::Windows::Forms::Label^ UbiGeoLabel;
	private: System::Windows::Forms::ComboBox^ UbigeoCombo;
	private: System::Windows::Forms::TextBox^ UnidadTBox;
	private: System::Windows::Forms::Label^ UnidadTLabel;



















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
			this->TempLabel = (gcnew System::Windows::Forms::Label());
			this->HumLabel = (gcnew System::Windows::Forms::Label());
			this->COLabel = (gcnew System::Windows::Forms::Label());
			this->TempBox = (gcnew System::Windows::Forms::TextBox());
			this->HumBox = (gcnew System::Windows::Forms::TextBox());
			this->COBox = (gcnew System::Windows::Forms::TextBox());
			this->AirQBox = (gcnew System::Windows::Forms::TextBox());
			this->AirQLabel = (gcnew System::Windows::Forms::Label());
			this->AgregarBtn = (gcnew System::Windows::Forms::Button());
			this->ModificarBtn = (gcnew System::Windows::Forms::Button());
			this->EliminarBtn = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvHora = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CerrarBtn = (gcnew System::Windows::Forms::Button());
			this->UbiGeoLabel = (gcnew System::Windows::Forms::Label());
			this->UbigeoCombo = (gcnew System::Windows::Forms::ComboBox());
			this->UnidadTBox = (gcnew System::Windows::Forms::TextBox());
			this->UnidadTLabel = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// TempLabel
			// 
			this->TempLabel->AutoSize = true;
			this->TempLabel->Location = System::Drawing::Point(33, 25);
			this->TempLabel->Name = L"TempLabel";
			this->TempLabel->Size = System::Drawing::Size(67, 13);
			this->TempLabel->TabIndex = 0;
			this->TempLabel->Text = L"Temperatura";
			// 
			// HumLabel
			// 
			this->HumLabel->AutoSize = true;
			this->HumLabel->Location = System::Drawing::Point(33, 49);
			this->HumLabel->Name = L"HumLabel";
			this->HumLabel->Size = System::Drawing::Size(53, 13);
			this->HumLabel->TabIndex = 1;
			this->HumLabel->Text = L"Humedad";
			// 
			// COLabel
			// 
			this->COLabel->AutoSize = true;
			this->COLabel->Location = System::Drawing::Point(33, 75);
			this->COLabel->Name = L"COLabel";
			this->COLabel->Size = System::Drawing::Size(94, 13);
			this->COLabel->TabIndex = 2;
			this->COLabel->Text = L"Concentración CO";
			// 
			// TempBox
			// 
			this->TempBox->Location = System::Drawing::Point(155, 22);
			this->TempBox->Name = L"TempBox";
			this->TempBox->Size = System::Drawing::Size(100, 20);
			this->TempBox->TabIndex = 3;
			// 
			// HumBox
			// 
			this->HumBox->Location = System::Drawing::Point(155, 49);
			this->HumBox->Name = L"HumBox";
			this->HumBox->Size = System::Drawing::Size(100, 20);
			this->HumBox->TabIndex = 4;
			// 
			// COBox
			// 
			this->COBox->Location = System::Drawing::Point(155, 75);
			this->COBox->Name = L"COBox";
			this->COBox->Size = System::Drawing::Size(100, 20);
			this->COBox->TabIndex = 5;
			// 
			// AirQBox
			// 
			this->AirQBox->Location = System::Drawing::Point(443, 50);
			this->AirQBox->Name = L"AirQBox";
			this->AirQBox->Size = System::Drawing::Size(100, 20);
			this->AirQBox->TabIndex = 6;
			// 
			// AirQLabel
			// 
			this->AirQLabel->AutoSize = true;
			this->AirQLabel->Location = System::Drawing::Point(300, 53);
			this->AirQLabel->Name = L"AirQLabel";
			this->AirQLabel->Size = System::Drawing::Size(63, 13);
			this->AirQLabel->TabIndex = 7;
			this->AirQLabel->Text = L"Calidad Aire";
			// 
			// AgregarBtn
			// 
			this->AgregarBtn->Location = System::Drawing::Point(36, 134);
			this->AgregarBtn->Name = L"AgregarBtn";
			this->AgregarBtn->Size = System::Drawing::Size(75, 23);
			this->AgregarBtn->TabIndex = 10;
			this->AgregarBtn->Text = L"Agregar";
			this->AgregarBtn->UseVisualStyleBackColor = true;
			this->AgregarBtn->Click += gcnew System::EventHandler(this, &SensorMaintenanceForm::AgregarBtn_Click);
			// 
			// ModificarBtn
			// 
			this->ModificarBtn->Location = System::Drawing::Point(228, 134);
			this->ModificarBtn->Name = L"ModificarBtn";
			this->ModificarBtn->Size = System::Drawing::Size(75, 23);
			this->ModificarBtn->TabIndex = 11;
			this->ModificarBtn->Text = L"Modificar";
			this->ModificarBtn->UseVisualStyleBackColor = true;
			this->ModificarBtn->Click += gcnew System::EventHandler(this, &SensorMaintenanceForm::ModificarBtn_Click);
			// 
			// EliminarBtn
			// 
			this->EliminarBtn->Location = System::Drawing::Point(447, 134);
			this->EliminarBtn->Name = L"EliminarBtn";
			this->EliminarBtn->Size = System::Drawing::Size(75, 23);
			this->EliminarBtn->TabIndex = 12;
			this->EliminarBtn->Text = L"Eliminar";
			this->EliminarBtn->UseVisualStyleBackColor = true;
			this->EliminarBtn->Click += gcnew System::EventHandler(this, &SensorMaintenanceForm::EliminarBtn_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Column6,
					this->Column1, this->Column2, this->Column3, this->Column4, this->Column5, this->dgvHora
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 179);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(741, 177);
			this->dataGridView1->TabIndex = 13;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &SensorMaintenanceForm::TableCellClick);
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"IdMedicion";
			this->Column6->Name = L"Column6";
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Temperatura";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Humedad";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Concentracion CO";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Calidad Aire";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Ubicacion Geografica";
			this->Column5->Name = L"Column5";
			// 
			// dgvHora
			// 
			this->dgvHora->HeaderText = L"Hora";
			this->dgvHora->Name = L"dgvHora";
			// 
			// CerrarBtn
			// 
			this->CerrarBtn->Location = System::Drawing::Point(650, 134);
			this->CerrarBtn->Name = L"CerrarBtn";
			this->CerrarBtn->Size = System::Drawing::Size(75, 23);
			this->CerrarBtn->TabIndex = 14;
			this->CerrarBtn->Text = L"Cerrar";
			this->CerrarBtn->UseVisualStyleBackColor = true;
			this->CerrarBtn->Click += gcnew System::EventHandler(this, &SensorMaintenanceForm::CerrarBtn_Click);
			// 
			// UbiGeoLabel
			// 
			this->UbiGeoLabel->AutoSize = true;
			this->UbiGeoLabel->Location = System::Drawing::Point(300, 82);
			this->UbiGeoLabel->Name = L"UbiGeoLabel";
			this->UbiGeoLabel->Size = System::Drawing::Size(110, 13);
			this->UbiGeoLabel->TabIndex = 16;
			this->UbiGeoLabel->Text = L"Ubicacion Geografica";
			// 
			// UbigeoCombo
			// 
			this->UbigeoCombo->FormattingEnabled = true;
			this->UbigeoCombo->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"FACI", L"CIA", L"BIBLIOTECA CENTRAL", L"TINKUY" });
			this->UbigeoCombo->Location = System::Drawing::Point(443, 78);
			this->UbigeoCombo->Name = L"UbigeoCombo";
			this->UbigeoCombo->Size = System::Drawing::Size(121, 21);
			this->UbigeoCombo->TabIndex = 17;
			// 
			// UnidadTBox
			// 
			this->UnidadTBox->Location = System::Drawing::Point(443, 23);
			this->UnidadTBox->Name = L"UnidadTBox";
			this->UnidadTBox->Size = System::Drawing::Size(100, 20);
			this->UnidadTBox->TabIndex = 19;
			// 
			// UnidadTLabel
			// 
			this->UnidadTLabel->AutoSize = true;
			this->UnidadTLabel->Location = System::Drawing::Point(300, 25);
			this->UnidadTLabel->Name = L"UnidadTLabel";
			this->UnidadTLabel->Size = System::Drawing::Size(104, 13);
			this->UnidadTLabel->TabIndex = 18;
			this->UnidadTLabel->Text = L"Unidad Temperatura";
			// 
			// SensorMaintenanceForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(761, 361);
			this->Controls->Add(this->UnidadTBox);
			this->Controls->Add(this->UnidadTLabel);
			this->Controls->Add(this->UbigeoCombo);
			this->Controls->Add(this->UbiGeoLabel);
			this->Controls->Add(this->CerrarBtn);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->EliminarBtn);
			this->Controls->Add(this->ModificarBtn);
			this->Controls->Add(this->AgregarBtn);
			this->Controls->Add(this->AirQLabel);
			this->Controls->Add(this->AirQBox);
			this->Controls->Add(this->COBox);
			this->Controls->Add(this->HumBox);
			this->Controls->Add(this->TempBox);
			this->Controls->Add(this->COLabel);
			this->Controls->Add(this->HumLabel);
			this->Controls->Add(this->TempLabel);
			this->Name = L"SensorMaintenanceForm";
			this->Text = L"SensorMaintenanceForm";
			this->Load += gcnew System::EventHandler(this, &SensorMaintenanceForm::SensorMaintenanceForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void SensorMaintenanceForm_Load(System::Object^ sender, System::EventArgs^ e) {
		ShowAmbienteData();
	}

private: System::Void AgregarBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	double Temperatura = Int32::Parse(TempBox->Text);
	int Humedad = Int32::Parse(HumBox->Text);
	int ConcentracionCO = Int32::Parse(COBox->Text);
	int AirQ = Int32::Parse(AirQBox->Text);
	String^ UnidadTemp = UnidadTBox->Text;
	String^ UbiGeo = UbigeoCombo->SelectedItem->ToString();

	List<Ambiente^>^ sensorData = Controller::Controller::QueryAmbienteData();
	int lastIdIndex = sensorData->Count;
	Ambiente^ ambiente = gcnew Ambiente();

	if (lastIdIndex == 0) {
		ambiente->IdMedicion = 1;
	}
	else {
		Ambiente^ ambientelastId = sensorData[lastIdIndex - 1];
		ambiente->IdMedicion = (ambientelastId->IdMedicion) + 1;
	}

	//Ingresar los datos en Ambiente
	ambiente->UbicacionGeografica = UbiGeo;
	int IdSensor;

	if (UbiGeo == "FACI") {
		IdSensor = 1;
	}
	else if (UbiGeo == "CIA") {
		IdSensor = 2;
	}
	else if (UbiGeo == "BIBLIOTECA CENTRAL") {
		IdSensor = 3;
	}
	else if (UbiGeo == "TINKUY") {
		IdSensor = 4;
	}
	
	SensorTemperaturaHumedad^ TH = gcnew SensorTemperaturaHumedad(IdSensor, Temperatura, UnidadTemp, Humedad);
	SensorCO^ CO = gcnew SensorCO(IdSensor, ConcentracionCO);
	SensorCalidadAire^ airq = gcnew SensorCalidadAire(IdSensor, AirQ);

	List<Sensor^>^ sensorList = gcnew List<Sensor^>();
	sensorList->Add(TH);
	sensorList->Add(CO);
	sensorList->Add(airq);

	ambiente->DataBase = sensorList;

	ambiente->TiempoMedicion = DateTime::Now.ToString("hh:mm:ss tt");

	Controller::Controller::AddAmbienteData(ambiente);
	ShowAmbienteData();

	TempBox->Text = "";
	HumBox->Text = "";
	COBox->Text = "";
	AirQBox->Text = "";
	UbigeoCombo->SelectedIndex = 0;
	
}
	   void ShowAmbienteData() {
		   List<Ambiente^>^ sensorData = Controller::Controller::QueryAmbienteData();
		   dataGridView1->Rows->Clear();
		   for (int i = 0; i < sensorData->Count; i++) {
			   Ambiente^ ambiente = sensorData[i];

			   dataGridView1->Rows->Add(gcnew array<String^> {
				   "" + ambiente->IdMedicion,	
				   "" + dynamic_cast<SensorTemperaturaHumedad^>(ambiente->DataBase[0])->Temperatura, //temperatura
				   "" + dynamic_cast<SensorTemperaturaHumedad^>(ambiente->DataBase[0])->Humedad, //humedad
				   "" + dynamic_cast<SensorCO^>(ambiente->DataBase[1])->NivelCO, //co
				   "" + dynamic_cast<SensorCalidadAire^>(ambiente->DataBase[2])->CalidadAire, //airq
					   ambiente->UbicacionGeografica, //ubigeo
					   ambiente->TiempoMedicion //hora
			   });
		   }
	   }

private: System::Void ModificarBtn_Click(System::Object^ sender, System::EventArgs^ e) {

	double Temperatura = Int32::Parse(TempBox->Text);
	int Humedad = Int32::Parse(HumBox->Text);
	int ConcentracionCO = Int32::Parse(COBox->Text);
	int AirQ = Int32::Parse(AirQBox->Text);
	String^ UnidadTemp = UnidadTBox->Text;
	String^ UbiGeo = UbigeoCombo->SelectedItem->ToString();

	Ambiente^ ambiente = gcnew Ambiente();

	ambiente->IdMedicion = idMedicion;
	ambiente->UbicacionGeografica = UbiGeo;
	ambiente->TiempoMedicion = tiempoMedicion;

	int IdSensor;

	if (UbiGeo == "FACI") {
		IdSensor = 1;
	}
	else if (UbiGeo == "CIA") {
		IdSensor = 2;
	}
	else if (UbiGeo == "BIBLIOTECA CENTRAL") {
		IdSensor = 3;
	}
	else if (UbiGeo == "TINKUY") {
		IdSensor = 4;
	}

	SensorTemperaturaHumedad^ TH = gcnew SensorTemperaturaHumedad(IdSensor, Temperatura, UnidadTemp, Humedad);
	SensorCO^ CO = gcnew SensorCO(IdSensor, ConcentracionCO);
	SensorCalidadAire^ airq = gcnew SensorCalidadAire(IdSensor, AirQ);

	List<Sensor^>^ sensorList = gcnew List<Sensor^>();
	sensorList->Add(TH);
	sensorList->Add(CO);
	sensorList->Add(airq);

	ambiente->DataBase = sensorList;

	Controller::Controller::UpdateAmbienteData(ambiente);
	ShowAmbienteData();

}

private: System::Void EliminarBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	Controller::Controller::DeleteAmbienteData(idMedicion);
	ShowAmbienteData();
}

private: System::Void CerrarBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}

private: System::Void TableCellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	idMedicion = Int32::Parse(dataGridView1->Rows[dataGridView1->SelectedCells[0]->RowIndex]
		->Cells[0]->Value->ToString());
	Ambiente^ ambiente = Controller::Controller::QueryAmbienteDatabyId(idMedicion);
	TempBox->Text = dynamic_cast<SensorTemperaturaHumedad^>(ambiente->DataBase[0])->Temperatura.ToString();
	HumBox->Text = dynamic_cast<SensorTemperaturaHumedad^>(ambiente->DataBase[0])->Humedad.ToString();
	COBox->Text = dynamic_cast<SensorCO^>(ambiente->DataBase[1])->NivelCO.ToString();
	AirQBox->Text = dynamic_cast<SensorCalidadAire^>(ambiente->DataBase[2])->CalidadAire.ToString();
	UbigeoCombo->SelectedItem = ambiente->UbicacionGeografica;
	tiempoMedicion = ambiente->TiempoMedicion;
	UnidadTBox->Text = dynamic_cast<SensorTemperaturaHumedad^>(ambiente->DataBase[0])->UnidadTemp;
}
};
}
