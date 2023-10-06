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
	/// Resumen de COMaintenanceForm
	/// </summary>
	public ref class COMaintenanceForm : public System::Windows::Forms::Form
	{
	public:
		COMaintenanceForm(void)
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
		~COMaintenanceForm()
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
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;

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
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
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
			this->button4->Location = System::Drawing::Point(566, 368);
			this->button4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(112, 35);
			this->button4->TabIndex = 36;
			this->button4->Text = L"Cerrar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &COMaintenanceForm::button4_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column2,
					this->Column1, this->Column4
			});
			this->dataGridView1->Location = System::Drawing::Point(18, 131);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->Size = System::Drawing::Size(516, 272);
			this->dataGridView1->TabIndex = 35;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &COMaintenanceForm::CO_CellClick);
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &COMaintenanceForm::dataGridView1_CellContentClick);
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"IdMedicion";
			this->Column2->MinimumWidth = 8;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 150;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"IdSensor";
			this->Column1->MinimumWidth = 8;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 150;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Concentración CO";
			this->Column4->MinimumWidth = 8;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 150;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(566, 165);
			this->button3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(112, 35);
			this->button3->TabIndex = 34;
			this->button3->Text = L"Eliminar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &COMaintenanceForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(566, 94);
			this->button2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(112, 35);
			this->button2->TabIndex = 33;
			this->button2->Text = L"Modificar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &COMaintenanceForm::button2_Click_1);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(566, 22);
			this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 35);
			this->button1->TabIndex = 32;
			this->button1->Text = L"Agregar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &COMaintenanceForm::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(196, 58);
			this->textBox2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(148, 26);
			this->textBox2->TabIndex = 31;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &COMaintenanceForm::textBox2_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(196, 17);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(148, 26);
			this->textBox1->TabIndex = 30;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(14, 58);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(161, 20);
			this->label2->TabIndex = 29;
			this->label2->Text = L"Concentración de CO";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(14, 22);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 20);
			this->label1->TabIndex = 28;
			this->label1->Text = L"IdSensor";
			// 
			// COMaintenanceForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(696, 455);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"COMaintenanceForm";
			this->Text = L"COMaintenanceForm";
			this->Load += gcnew System::EventHandler(this, &COMaintenanceForm::COForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) { //cerrar
		this->Close();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) { //agregar
	int NivelCO = Int32::Parse(textBox2->Text);
	String^ IdSensor = textBox1->Text;

	List<SensorCO^>^ COs = Controller::Controller::QueryCOData();
	int lastIdIndex = COs->Count;

	SensorCO^ CO = gcnew SensorCO();
	SensorCO^ COlastId = COs[lastIdIndex - 1];
	CO->IdMedicion = (COlastId->IdMedicion) + 1;
	CO->IdSensor = IdSensor;
	CO->NivelCO = NivelCO;

	Controller::Controller::AddCOData(CO);
	ShowCOData();

	textBox1->Text = "";
	textBox2->Text = "";
}
	   void ShowCOData() {
		   List<SensorCO^>^ COdata = Controller::Controller::QueryCOData();
		   dataGridView1->Rows->Clear();
		   for (int i = 0; i < COdata->Count; i++) {
			   SensorCO^ CO = COdata[i];
			   dataGridView1->Rows->Add(gcnew array<String^> {
				   "" + CO->IdMedicion,
					   CO->IdSensor,
					   "" + CO->NivelCO
			   });
		   }
	   }

private: System::Void COForm_Load(System::Object^ sender, System::EventArgs^ e) {
	ShowCOData();
}

private: System::Void CO_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	IdMedicion = Int32::Parse(dataGridView1->Rows[dataGridView1->SelectedCells[0]->RowIndex]
		->Cells[0]->Value->ToString());

	String^ IdSensor = dataGridView1->Rows[dataGridView1->SelectedCells[0]->RowIndex]
		->Cells[1]->Value->ToString();

	SensorCO^ sCO = Controller::Controller::QueryCObyIds(IdMedicion, IdSensor);

	textBox1->Text = sCO->IdSensor;
	textBox2->Text = "" + sCO->NivelCO;
}


private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) { //eliminar
	String^ IdSensor = textBox1->Text;
	Controller::Controller::DeleteCOData(IdMedicion, IdSensor);
	ShowCOData();

}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	String^ IdSensor = textBox1->Text;
	int NivelCO = Int32::Parse(textBox2->Text);

	SensorCO^ sCO = gcnew SensorCO();
	sCO->IdMedicion = IdMedicion;
	sCO->IdSensor = IdSensor;
	sCO->NivelCO = NivelCO;

	Controller::Controller::UpdateCOData(sCO);
	ShowCOData();
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
