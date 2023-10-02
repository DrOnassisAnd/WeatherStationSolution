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
	/// Resumen de TempHumMaintenanceForm
	/// </summary>
	public ref class TempHumMaintenanceForm : public System::Windows::Forms::Form
	{
	public:
		TempHumMaintenanceForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->IdMedicion = 0;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~TempHumMaintenanceForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button4;
	protected:
	private: System::Windows::Forms::DataGridView^ dataGridView1;



	private: int IdMedicion;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;


	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;

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
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(481, 321);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 45;
			this->button4->Text = L"Cerrar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &TempHumMaintenanceForm::button4_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column5,
					this->Column1, this->Column4, this->Column2, this->Column3
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 137);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(544, 178);
			this->dataGridView1->TabIndex = 44;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &TempHumMaintenanceForm::TH_CellClick);
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"IdMedicion";
			this->Column5->Name = L"Column5";
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"IdSensor";
			this->Column1->Name = L"Column1";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Temperatura";
			this->Column4->Name = L"Column4";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"UnidadTemp";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Humedad";
			this->Column3->Name = L"Column3";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(481, 96);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 43;
			this->button3->Text = L"Eliminar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &TempHumMaintenanceForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(481, 50);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 42;
			this->button2->Text = L"Modificar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &TempHumMaintenanceForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(481, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 41;
			this->button1->Text = L"Agregar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &TempHumMaintenanceForm::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(134, 33);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 40;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(134, 6);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 39;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(9, 33);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(67, 13);
			this->label2->TabIndex = 38;
			this->label2->Text = L"Temperatura";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(49, 13);
			this->label1->TabIndex = 37;
			this->label1->Text = L"IdSensor";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(134, 90);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 49;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(134, 63);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 48;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 90);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 13);
			this->label3->TabIndex = 47;
			this->label3->Text = L"Humedad";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 63);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(68, 13);
			this->label4->TabIndex = 46;
			this->label4->Text = L"UnidadTemp";
			// 
			// TempHumMaintenanceForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(563, 349);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"TempHumMaintenanceForm";
			this->Text = L"TempHumMaintenanceForm";
			this->Load += gcnew System::EventHandler(this, &TempHumMaintenanceForm::TempHumForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) { //agregar
		double Temperatura = Int32::Parse(textBox2->Text);
		String^ IdSensor = textBox1->Text;
		int Humedad = Int32::Parse(textBox3->Text);
		String^ UnidadTemp = textBox4->Text;

		List<SensorTemperaturaHumedad^>^ airqs = Controller::Controller::QueryTempHumData();
		int lastIdIndex = airqs->Count;

		SensorTemperaturaHumedad^ airq = gcnew SensorTemperaturaHumedad();
		SensorTemperaturaHumedad^ airqLastId = airqs[lastIdIndex - 1];

		airq->IdMedicion = (airqLastId->IdMedicion) + 1;
		airq->IdSensor = IdSensor;
		airq->Temperatura = Temperatura;
		airq->UnidadTemp = UnidadTemp;
		airq->Humedad = Humedad;

		Controller::Controller::AddTempHumData(airq);
		ShowTempHumData();
		textBox1->Text = "";
		textBox2->Text = "";
		textBox3->Text = "";
		textBox4->Text = "";

	}
		   void ShowTempHumData() {
			   List<SensorTemperaturaHumedad^>^ THData = Controller::Controller::QueryTempHumData();
			   dataGridView1->Rows->Clear();
			   for (int i = 0; i < THData->Count; i++) {
				   SensorTemperaturaHumedad^ TH = THData[i];
				   dataGridView1->Rows->Add(gcnew array<String^> {
					   "" + TH->IdMedicion,
					   TH->IdSensor,
						"" + TH->Temperatura,
						TH->UnidadTemp,
						"" + TH->Humedad
				   });
			   }
		    }
	
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {//cerrar
	this->Close();
}

private: System::Void TempHumForm_Load(System::Object^ sender, System::EventArgs^ e) {
	ShowTempHumData();
}

private: System::Void TH_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	IdMedicion = Int32::Parse(dataGridView1->Rows[dataGridView1->SelectedCells[0]->RowIndex]
		->Cells[0]->Value->ToString());

	String^ IdSensor = dataGridView1->Rows[dataGridView1->SelectedCells[0]->RowIndex]
		->Cells[1]->Value->ToString();

	SensorTemperaturaHumedad^ sTempHum = Controller::Controller::QueryTHbyIds(IdMedicion, IdSensor);

	textBox1->Text = sTempHum->IdSensor;
	textBox2->Text = "" + sTempHum->Temperatura;
	textBox4->Text = sTempHum->UnidadTemp;
	textBox3->Text = "" + sTempHum->Humedad;
}
//51243

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) { //Update
	
	String^ IdSensor = textBox1->Text;
	int Temperatura = Int32::Parse(textBox2->Text);
	String^ UnidadTemp = textBox4->Text;
	int Humedad = Int32::Parse(textBox3->Text);

	SensorTemperaturaHumedad^ sTempHum = gcnew SensorTemperaturaHumedad();
	sTempHum->IdMedicion = IdMedicion;
	sTempHum->IdSensor = IdSensor;
	sTempHum->Temperatura = Temperatura;
	sTempHum->UnidadTemp = UnidadTemp;
	sTempHum->Humedad = Humedad;

	Controller::Controller::UpdateTHData(sTempHum);
	ShowTempHumData();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) { //Delete
	String^ IdSensor = textBox1->Text;
	Controller::Controller::DeleteTHData(IdMedicion, IdSensor);
	ShowTempHumData();
}
};
}
