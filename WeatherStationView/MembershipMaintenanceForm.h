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
			//TODO: agregar código de constructor aquí
			//
			this->IdMembresia = 0;

		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
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
	private: int IdMembresia;








	private: System::Windows::Forms::Button^ btnAdd;

	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnDelete;








	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ fechainicial;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ fechafinal;





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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dgvMembresia = (gcnew System::Windows::Forms::DataGridView());
			this->Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->fechainicial = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->fechafinal = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
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
			this->label3->Location = System::Drawing::Point(91, 68);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(76, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"FechaInicio";
			this->label3->Click += gcnew System::EventHandler(this, &MembershipMaintenanceForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(51, 109);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(116, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"FechaFinalizacion";
			this->label4->Click += gcnew System::EventHandler(this, &MembershipMaintenanceForm::label4_Click);
			// 
			// dgvMembresia
			// 
			this->dgvMembresia->AllowUserToOrderColumns = true;
			this->dgvMembresia->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvMembresia->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Id, this->fechainicial,
					this->fechafinal
			});
			this->dgvMembresia->Location = System::Drawing::Point(38, 255);
			this->dgvMembresia->Name = L"dgvMembresia";
			this->dgvMembresia->RowHeadersWidth = 51;
			this->dgvMembresia->RowTemplate->Height = 24;
			this->dgvMembresia->Size = System::Drawing::Size(675, 150);
			this->dgvMembresia->TabIndex = 5;
			this->dgvMembresia->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MembershipMaintenanceForm::dataGridView1_CellContentClick);
			// 
			// Id
			// 
			this->Id->HeaderText = L"Id";
			this->Id->MinimumWidth = 6;
			this->Id->Name = L"Id";
			this->Id->Width = 125;
			// 
			// fechainicial
			// 
			this->fechainicial->HeaderText = L"FechaInicio";
			this->fechainicial->MinimumWidth = 6;
			this->fechainicial->Name = L"fechainicial";
			this->fechainicial->Width = 125;
			// 
			// fechafinal
			// 
			this->fechafinal->HeaderText = L"Fecha de Finalizacion";
			this->fechafinal->MinimumWidth = 6;
			this->fechafinal->Name = L"fechafinal";
			this->fechafinal->Width = 125;
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(69, 216);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(75, 23);
			this->btnAdd->TabIndex = 10;
			this->btnAdd->Text = L"Agregar";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &MembershipMaintenanceForm::btnAdd_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(207, 216);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(75, 23);
			this->btnUpdate->TabIndex = 11;
			this->btnUpdate->Text = L"Modificar";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &MembershipMaintenanceForm::btnUpdate_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(361, 216);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(75, 23);
			this->btnDelete->TabIndex = 12;
			this->btnDelete->Text = L"Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &MembershipMaintenanceForm::btnDelete_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(173, 68);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 22);
			this->dateTimePicker1->TabIndex = 13;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &MembershipMaintenanceForm::dateTimePicker1_ValueChanged);
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(173, 109);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(200, 22);
			this->dateTimePicker2->TabIndex = 14;
			this->dateTimePicker2->ValueChanged += gcnew System::EventHandler(this, &MembershipMaintenanceForm::dateTimePicker2_ValueChanged);
			// 
			// MembershipMaintenanceForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(753, 432);
			this->Controls->Add(this->dateTimePicker2);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->dgvMembresia);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Name = L"MembershipMaintenanceForm";
			this->Text = L"MembershipMaintenanceForm";
			this->Load += gcnew System::EventHandler(this, &MembershipMaintenanceForm::MembershipMaintenanceForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMembresia))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MembershipMaintenanceForm_Load(System::Object^ sender, System::EventArgs^ e) {
	
		//ShowMembresiaData();
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	//IdMembresia = Int32::Parse(dgvMembresia->Rows[dgvMembresia->SelectedCells[0]->RowIndex]
		//->Cells[0]->Value->ToString());
	//Membresia^ membresia = Controller::Controller::QueryMembresiabyId(IdMembresia);

}
private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {

//	DateTime fechaInicio = dateTimePicker1->Value;
//	String^ StringDateTime = fechaInicio.ToString("dd-MM-yyyy HH:mm:ss");
//
//	DateTime fechaFinalizacion = dateTimePicker2->Value;
//	String^ StringDateTimezz = fechaFinalizacion.ToString("dd-MM-yyyy HH:mm:ss");
//
//	List<Membresia^>^ membresias = Controller::Controller::QueryMembresia();
//	int lastIdIndex = membresias->Count;
//
//	Membresia^ membresia = gcnew Membresia();
//	Membresia^ membresialastId = membresias[lastIdIndex - 1];
//	membresia->Id = (membresialastId->Id) + 1;
//	//int Id = Int32::Parse(txtId->Text);
//
//
//	//user->Id = Id;
//
//	membresia->fechaInicio = DateTime::Parse(StringDateTime);
//	membresia->fechaFinalizacion = DateTime::Parse(StringDateTimezz);
//
//
//	Controller::Controller::AddMembresia(membresia);
//	//ShowUser();
//	ShowMembresiaData();
//	// MessageBox::Show("Oki Doki");
//
//}
//
//	   void ShowMembresiaData() {
//		   List<Membresia^>^ membresias = Controller::Controller::QueryMembresia();
//		   dgvMembresia->Rows->Clear();
//		   for (int i = 0; i < membresias->Count; i++) {
//			   Membresia^ membresia = membresias[i];
//			   dgvMembresia->Rows->Add(gcnew array<String^> {
//				   "" + membresia->Id,
//					   "" + membresia->fechaInicio,
//					   "" + membresia->fechaFinalizacion,
//
//			   });
//		   }
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
private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dateTimePicker2_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	
	//Controller::Controller::DeleteMembresia(IdMembresia);
	//ShowMembresiaData();
}
private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {


		/*Membresia^ membresia = gcnew Membresia();
		membresia->Id = IdMembresia;
		membresia->fechaInicio = dateTimePicker1->Value.ToString("yyyy-MM-dd");
		membresia->fechaFinalizacion = dateTimePicker2->Value.ToString("yyyy-MM-dd");

		Controller::Controller::UpdateMembresia(membresia);
		ShowMembresiaData();*/
	/*
	String^ name = textBox2->Text;
	String^ password = textBox3->Text;
	String^ email = textBox4->Text;

	User^ user = gcnew User();
	user->Id = Id;
	user->Name = name;
	user->Password = password;
	user->Email = email;

	Controller::Controller::UpdateUser(user);
	ShowUserData();
	*/


}
};
}
