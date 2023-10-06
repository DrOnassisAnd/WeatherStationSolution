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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DataGridView^ dgvMembresia;
	private: System::Windows::Forms::TextBox^ txtTipoMembresia;
	private: System::Windows::Forms::TextBox^ txtnombreMiembro;
	private: System::Windows::Forms::TextBox^ txtfechaInicio;
	private: System::Windows::Forms::TextBox^ txtfechaFinalizacion;





	private: System::Windows::Forms::Button^ btnAdd;

	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::TextBox^ txtMetododepago;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ membresia;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ fechainicial;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ fechafinal;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Metodopago;





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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dgvMembresia = (gcnew System::Windows::Forms::DataGridView());
			this->txtTipoMembresia = (gcnew System::Windows::Forms::TextBox());
			this->txtnombreMiembro = (gcnew System::Windows::Forms::TextBox());
			this->txtfechaInicio = (gcnew System::Windows::Forms::TextBox());
			this->txtfechaFinalizacion = (gcnew System::Windows::Forms::TextBox());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtMetododepago = (gcnew System::Windows::Forms::TextBox());
			this->membresia = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->fechainicial = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->fechafinal = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Metodopago = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMembresia))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(86, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(103, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"TipoMembresia";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(111, 57);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nombre";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(111, 96);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(76, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"FechaInicio";
			this->label3->Click += gcnew System::EventHandler(this, &MembershipMaintenanceForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(71, 137);
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
			this->dgvMembresia->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->membresia,
					this->Nombre, this->fechainicial, this->fechafinal, this->Metodopago
			});
			this->dgvMembresia->Location = System::Drawing::Point(38, 255);
			this->dgvMembresia->Name = L"dgvMembresia";
			this->dgvMembresia->RowHeadersWidth = 51;
			this->dgvMembresia->RowTemplate->Height = 24;
			this->dgvMembresia->Size = System::Drawing::Size(675, 150);
			this->dgvMembresia->TabIndex = 5;
			this->dgvMembresia->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MembershipMaintenanceForm::dataGridView1_CellContentClick);
			// 
			// txtTipoMembresia
			// 
			this->txtTipoMembresia->Location = System::Drawing::Point(195, 16);
			this->txtTipoMembresia->Name = L"txtTipoMembresia";
			this->txtTipoMembresia->Size = System::Drawing::Size(100, 22);
			this->txtTipoMembresia->TabIndex = 6;
			this->txtTipoMembresia->TextChanged += gcnew System::EventHandler(this, &MembershipMaintenanceForm::textBox1_TextChanged);
			// 
			// txtnombreMiembro
			// 
			this->txtnombreMiembro->Location = System::Drawing::Point(195, 57);
			this->txtnombreMiembro->Name = L"txtnombreMiembro";
			this->txtnombreMiembro->Size = System::Drawing::Size(100, 22);
			this->txtnombreMiembro->TabIndex = 7;
			this->txtnombreMiembro->TextChanged += gcnew System::EventHandler(this, &MembershipMaintenanceForm::textBox2_TextChanged);
			// 
			// txtfechaInicio
			// 
			this->txtfechaInicio->Location = System::Drawing::Point(195, 96);
			this->txtfechaInicio->Name = L"txtfechaInicio";
			this->txtfechaInicio->Size = System::Drawing::Size(100, 22);
			this->txtfechaInicio->TabIndex = 8;
			this->txtfechaInicio->TextChanged += gcnew System::EventHandler(this, &MembershipMaintenanceForm::textBox3_TextChanged);
			// 
			// txtfechaFinalizacion
			// 
			this->txtfechaFinalizacion->Location = System::Drawing::Point(195, 137);
			this->txtfechaFinalizacion->Name = L"txtfechaFinalizacion";
			this->txtfechaFinalizacion->Size = System::Drawing::Size(100, 22);
			this->txtfechaFinalizacion->TabIndex = 9;
			this->txtfechaFinalizacion->TextChanged += gcnew System::EventHandler(this, &MembershipMaintenanceForm::textBox4_TextChanged);
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
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(361, 216);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(75, 23);
			this->btnDelete->TabIndex = 12;
			this->btnDelete->Text = L"Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(88, 178);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(101, 16);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Metododepago";
			// 
			// txtMetododepago
			// 
			this->txtMetododepago->Location = System::Drawing::Point(195, 172);
			this->txtMetododepago->Name = L"txtMetododepago";
			this->txtMetododepago->Size = System::Drawing::Size(100, 22);
			this->txtMetododepago->TabIndex = 14;
			this->txtMetododepago->TextChanged += gcnew System::EventHandler(this, &MembershipMaintenanceForm::txtMetododepago_TextChanged);
			// 
			// membresia
			// 
			this->membresia->HeaderText = L"TipoMembresia";
			this->membresia->MinimumWidth = 6;
			this->membresia->Name = L"membresia";
			this->membresia->Width = 125;
			// 
			// Nombre
			// 
			this->Nombre->HeaderText = L"Usuario";
			this->Nombre->MinimumWidth = 6;
			this->Nombre->Name = L"Nombre";
			this->Nombre->Width = 125;
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
			// Metodopago
			// 
			this->Metodopago->HeaderText = L"Metodo de Pago";
			this->Metodopago->MinimumWidth = 6;
			this->Metodopago->Name = L"Metodopago";
			this->Metodopago->Width = 125;
			// 
			// MembershipMaintenanceForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(753, 432);
			this->Controls->Add(this->txtMetododepago);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->txtfechaFinalizacion);
			this->Controls->Add(this->txtfechaInicio);
			this->Controls->Add(this->txtnombreMiembro);
			this->Controls->Add(this->txtTipoMembresia);
			this->Controls->Add(this->dgvMembresia);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
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
	String^ tipoMembresia = txtTipoMembresia->Text;
	String^ nombreMiembro = txtnombreMiembro->Text;
	String^ fechaInicio = txtfechaInicio->Text;
	String^ fechaFinalizacion = txtfechaFinalizacion->Text;
	String^ Metododepago = txtMetododepago->Text;

	//int Id = Int32::Parse(txtId->Text);

	Membresia^ membresia = gcnew Membresia();
	//user->Id = Id;
	membresia->tipoMembresia = tipoMembresia;
	membresia->nombreMiembro = nombreMiembro;
	membresia->fechaInicio = fechaInicio;
	membresia->fechaFinalizacion = fechaFinalizacion;
	membresia->Metododepago = Metododepago;
	dgvMembresia->Rows->Add(gcnew array<String^> {
		membresia->tipoMembresia,
		membresia->nombreMiembro,
		membresia->fechaInicio,
		membresia->fechaFinalizacion,
		membresia->Metododepago
	});
	Controller::Controller::AddMembresia(membresia);
	//ShowUser();
	MessageBox::Show("Oki Doki");
	


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
};
}
