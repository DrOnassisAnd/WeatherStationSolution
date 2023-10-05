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
	/// Resumen de MembershipMaintenanceForm
	/// </summary>
	public ref class MembershipMaintenanceForm : public System::Windows::Forms::Form
	{
	public:
		MembershipMaintenanceForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
			this->Id = 0;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~MembershipMaintenanceForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DataGridView^ dgvMembresia;










	private: System::Windows::Forms::Button^ btnAdd;

	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnDelete;

	private: int Id;






	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ IdMembresia;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ FechaInicio;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ FechaFinalizacion;





	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dgvMembresia = (gcnew System::Windows::Forms::DataGridView());
			this->IdMembresia = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->FechaInicio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->FechaFinalizacion = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMembresia))->BeginInit();
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(83, 78);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"FechaInicio";
			this->label3->Click += gcnew System::EventHandler(this, &MembershipMaintenanceForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(53, 111);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(92, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"FechaFinalizacion";
			this->label4->Click += gcnew System::EventHandler(this, &MembershipMaintenanceForm::label4_Click);
			// 
			// dgvMembresia
			// 
			this->dgvMembresia->AllowUserToOrderColumns = true;
			this->dgvMembresia->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvMembresia->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->IdMembresia,
					this->FechaInicio, this->FechaFinalizacion
			});
			this->dgvMembresia->Location = System::Drawing::Point(28, 207);
			this->dgvMembresia->Margin = System::Windows::Forms::Padding(2);
			this->dgvMembresia->Name = L"dgvMembresia";
			this->dgvMembresia->RowHeadersWidth = 51;
			this->dgvMembresia->RowTemplate->Height = 24;
			this->dgvMembresia->Size = System::Drawing::Size(506, 122);
			this->dgvMembresia->TabIndex = 5;
			this->dgvMembresia->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MembershipMaintenanceForm::dataGridView1_CellContentClick);
			// 
			// IdMembresia
			// 
			this->IdMembresia->HeaderText = L"IdMembresia";
			this->IdMembresia->Name = L"IdMembresia";
			// 
			// FechaInicio
			// 
			this->FechaInicio->HeaderText = L"FechaInicio";
			this->FechaInicio->Name = L"FechaInicio";
			// 
			// FechaFinalizacion
			// 
			this->FechaFinalizacion->HeaderText = L"FechaFinalizacion";
			this->FechaFinalizacion->Name = L"FechaFinalizacion";
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(52, 176);
			this->btnAdd->Margin = System::Windows::Forms::Padding(2);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(56, 19);
			this->btnAdd->TabIndex = 10;
			this->btnAdd->Text = L"Agregar";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &MembershipMaintenanceForm::btnAdd_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(155, 176);
			this->btnUpdate->Margin = System::Windows::Forms::Padding(2);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(56, 19);
			this->btnUpdate->TabIndex = 11;
			this->btnUpdate->Text = L"Modificar";
			this->btnUpdate->UseVisualStyleBackColor = true;
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(271, 176);
			this->btnDelete->Margin = System::Windows::Forms::Padding(2);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(56, 19);
			this->btnDelete->TabIndex = 12;
			this->btnDelete->Text = L"Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &MembershipMaintenanceForm::btnDelete_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(155, 78);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker1->TabIndex = 13;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &MembershipMaintenanceForm::dateTimePicker1_ValueChanged);
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(155, 111);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker2->TabIndex = 14;
			this->dateTimePicker2->ValueChanged += gcnew System::EventHandler(this, &MembershipMaintenanceForm::dateTimePicker2_ValueChanged);
			// 
			// MembershipMaintenanceForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(565, 351);
			this->Controls->Add(this->dateTimePicker2);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->dgvMembresia);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MembershipMaintenanceForm";
			this->Text = L"MembershipMaintenanceForm";
			this->Load += gcnew System::EventHandler(this, &MembershipMaintenanceForm::MembershipMaintenanceForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMembresia))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MembershipMaintenanceForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	
	
	DateTime fechaInicio = dateTimePicker1->Value;
	String^ StringDateTime = fechaInicio.ToString("dd-MM-yyyy HH:mm:ss");

	DateTime fechaFinalizacion = dateTimePicker2->Value;
	String^ StringDateTimezz = fechaFinalizacion.ToString("dd-MM-yyyy HH:mm:ss");

	List<Membresia^>^ membresias = Controller::Controller::QueryMembresia();
	int lastIdIndex = membresias->Count;

	Membresia^ membresia = gcnew Membresia();
	Membresia^ membresialastId = membresias[lastIdIndex - 1];
	membresia->Id = (membresialastId->Id) + 1;
	//int Id = Int32::Parse(txtId->Text);


	//user->Id = Id;

	membresia->fechaInicio = DateTime::Parse(StringDateTime);
	membresia->fechaFinalizacion = DateTime::Parse(StringDateTimezz);
	

	Controller::Controller::AddMembresia(membresia);
	//ShowUser();
	ShowMembresiaData();
	MessageBox::Show("Oki Doki");
	
	

}

	   void ShowMembresiaData() {
		   List<Membresia^>^ membresias = Controller::Controller::QueryMembresia();
		   dgvMembresia->Rows->Clear();
		   for (int i = 0; i < membresias->Count; i++) {
			   Membresia^ membresia = membresias[i];
			   dgvMembresia->Rows->Add(gcnew array<String^> {
						 "" + membresia->Id,
					   "" + membresia->fechaInicio,
					   "" + membresia->fechaFinalizacion,

			   });
		   }
	   }
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtMetododepago_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dateTimePicker2_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	Controller::Controller::DeleteMembresia(Id);
	ShowMembresiaData();

}
};
}
