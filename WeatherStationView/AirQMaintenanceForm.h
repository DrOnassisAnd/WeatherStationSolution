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
	/// Resumen de AirQMaintenanceForm
	/// </summary>
	public ref class AirQMaintenanceForm : public System::Windows::Forms::Form
	{
	private:
		List<SensorCalidadAire^>^ calidadAireData; // Variable miembro para almacenar los datos

	public:
		AirQMaintenanceForm(void)
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
		~AirQMaintenanceForm()
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
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
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
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(430, 239);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 27;
			this->button4->Text = L"Cerrar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &AirQMaintenanceForm::button4_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1,
					this->Column2, this->Column3
			});
			this->dataGridView1->Location = System::Drawing::Point(23, 89);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->Size = System::Drawing::Size(391, 177);
			this->dataGridView1->TabIndex = 26;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &AirQMaintenanceForm::AirQ_CellClick);
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &AirQMaintenanceForm::dataGridView1_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"IdMedicion";
			this->Column1->MinimumWidth = 8;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 150;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"IdSensor";
			this->Column2->MinimumWidth = 8;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 150;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"CalidadAire";
			this->Column3->MinimumWidth = 8;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 150;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(430, 107);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 25;
			this->button3->Text = L"Eliminar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &AirQMaintenanceForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(430, 60);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 24;
			this->button2->Text = L"Modificar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AirQMaintenanceForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(430, 14);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 23;
			this->button1->Text = L"Agregar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AirQMaintenanceForm::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(142, 42);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 19;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(142, 15);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 18;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(20, 42);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(80, 13);
			this->label2->TabIndex = 16;
			this->label2->Text = L"Calidad del Aire";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(20, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(49, 13);
			this->label1->TabIndex = 15;
			this->label1->Text = L"IdSensor";
			// 
			// AirQMaintenanceForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(522, 282);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"AirQMaintenanceForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AirQMaintenanceForm";
			this->Load += gcnew System::EventHandler(this, &AirQMaintenanceForm::AirQForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		//this->Close();
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	/*int CalidadAire = Int32::Parse(textBox2->Text);
	String^ IdSensor = textBox1->Text;

	List<SensorCalidadAire^>^ airqs = Controller::Controller::QueryCalidadAireData();
	int lastIdIndex = airqs->Count;

	SensorCalidadAire^ airq = gcnew SensorCalidadAire();
	SensorCalidadAire^ airqlastId = airqs[lastIdIndex - 1];
	airq->IdMedicion = (airqlastId->IdMedicion) + 1;
	airq->IdSensor = IdSensor;
	airq->CalidadAire = CalidadAire;

	Controller::Controller::AddCalidadAireData(airq);
	ShowAirQData();

	textBox1->Text = "";
	textBox2->Text = "";*/
}
	   /*void ShowAirQData() {
		   List<SensorCalidadAire^>^ airqdata = Controller::Controller::QueryCalidadAireData();
		   dataGridView1->Rows->Clear();
		   for (int i = 0; i < airqdata->Count; i++) {
			   SensorCalidadAire^ airq = airqdata[i];
			   dataGridView1->Rows->Add(gcnew array<String^> {
				   "" + airq->IdMedicion,
					   airq->IdSensor,
					   "" + airq->CalidadAire
			   });
		   }
		
		   }*/
	private: System::Void AirQForm_Load(System::Object^ sender, System::EventArgs^ e) {
		//ShowAirQData();
	}

private: System::Void AirQ_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	/*IdMedicion = Int32::Parse(dataGridView1->Rows[dataGridView1->SelectedCells[0]->RowIndex]
		->Cells[0]->Value->ToString());

	String^ IdSensor = dataGridView1->Rows[dataGridView1->SelectedCells[0]->RowIndex]
		->Cells[1]->Value->ToString();

	SensorCalidadAire^ sCalidadAire = Controller::Controller::QueryCalidadAirebyIds(IdMedicion, IdSensor);

	textBox1->Text = sCalidadAire->IdSensor;
	textBox2->Text = "" + sCalidadAire->CalidadAire;*/
}


private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	/*String^ IdSensor = textBox1->Text;
	Controller::Controller::DeleteCalidadAireData(IdMedicion, IdSensor);
	ShowAirQData();*/
}


private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	/*String^ IdSensor = textBox1->Text;
	int CalidadAire = Int32::Parse(textBox2->Text);

	SensorCalidadAire^ sCalidadAire = gcnew SensorCalidadAire();
	sCalidadAire->IdMedicion = IdMedicion;
	sCalidadAire->IdSensor = IdSensor;
	sCalidadAire->CalidadAire = CalidadAire;

	Controller::Controller::UpdateCalidadAireData(sCalidadAire);
	ShowAirQData();*/
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
