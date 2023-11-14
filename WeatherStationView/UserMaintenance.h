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
	/// Resumen de UserMaintenance
	/// </summary>
	public ref class UserMaintenance : public System::Windows::Forms::Form
	{
	public:
		UserMaintenance(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->Id = 0;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~UserMaintenance()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox3;
	protected:
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::DataGridView^ dataGridView1;




	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: int Id;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ FechaFin;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ FechaFindgv;
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
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->FechaFin = (gcnew System::Windows::Forms::Label());
			this->FechaFindgv = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(131, 42);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 62;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(131, 69);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 61;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 72);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(32, 13);
			this->label3->TabIndex = 60;
			this->label3->Text = L"Email";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 42);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(53, 13);
			this->label4->TabIndex = 59;
			this->label4->Text = L"Password";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(675, 335);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 58;
			this->button4->Text = L"Cerrar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &UserMaintenance::button4_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column1,
					this->Column4, this->Column2, this->Column3, this->Column5, this->FechaFindgv
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 143);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(757, 177);
			this->dataGridView1->TabIndex = 57;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &UserMaintenance::Table_CellClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Id";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Name";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Password";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Email";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Membresia";
			this->Column5->Name = L"Column5";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(675, 105);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 56;
			this->button3->Text = L"Eliminar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &UserMaintenance::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(675, 59);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 55;
			this->button2->Text = L"Modificar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &UserMaintenance::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(675, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 54;
			this->button1->Text = L"Agregar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &UserMaintenance::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(131, 12);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 53;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 12);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 51;
			this->label2->Text = L"Name";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(326, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 13);
			this->label1->TabIndex = 63;
			this->label1->Text = L"Membresia";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Basic", L"Estandar", L"Premium" });
			this->comboBox1->Location = System::Drawing::Point(445, 14);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(100, 21);
			this->comboBox1->TabIndex = 64;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(445, 59);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker1->TabIndex = 65;
			// 
			// FechaFin
			// 
			this->FechaFin->AutoSize = true;
			this->FechaFin->Location = System::Drawing::Point(326, 59);
			this->FechaFin->Name = L"FechaFin";
			this->FechaFin->Size = System::Drawing::Size(92, 13);
			this->FechaFin->TabIndex = 66;
			this->FechaFin->Text = L"FechaFinalizacion";
			// 
			// FechaFindgv
			// 
			this->FechaFindgv->HeaderText = L"FechaFin";
			this->FechaFindgv->Name = L"FechaFindgv";
			// 
			// UserMaintenance
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(778, 370);
			this->Controls->Add(this->FechaFin);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label1);
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
			this->Controls->Add(this->label2);
			this->Name = L"UserMaintenance";
			this->Text = L"UserMaintenance";
			this->Load += gcnew System::EventHandler(this, &UserMaintenance::User_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) { //aceptar
	String^ Name = textBox2->Text;
	String^ Password = textBox3->Text;
	String^ Email = textBox4->Text;

	if (Name != "" && Password != "" && Email != "") {

		String^ TipoMembresia = comboBox1->SelectedItem->ToString();
		String^ FechaFinalizacion = dateTimePicker1->Value.ToString("yyyy-MM-dd");

		List<User^>^ users = Controller::Controller::QueryAllUser();
		int lastIdIndex = users->Count;
		User^ user = gcnew User();

		if (lastIdIndex == 0) {
			user->Id = 1;
		}
		else {
			User^ userLastId = users[lastIdIndex - 1];
			user->Id = (userLastId->Id) + 1;
		}

		Membresia^ membresia = gcnew Membresia(TipoMembresia, DateTime::Today.ToString("yyyy-MM-dd"), FechaFinalizacion);
		Ajustes^ ajustes = gcnew Ajustes("°C", "Formato de 12 horas", "dd/mm/yyyy");

		user->Name = Name;
		user->Password = Password;
		user->Email = Email;
		user->membresia = membresia;
		user->ajustes = ajustes;

		Controller::Controller::AddUser(user);
		ShowUserData();

		textBox2->Text = "";
		textBox3->Text = "";
		textBox4->Text = "";
		comboBox1->SelectedIndex = 0;
		dateTimePicker1->Value = DateTime::Today;
		Id = 0;
	}
	else {
		MessageBox::Show("Por favor complete los espacios antes de añadir un dato.");
	}
}
	   void ShowUserData() {
		   List<User^>^ users = Controller::Controller::QueryAllUser();
		   dataGridView1->Rows->Clear();
		   for (int i = 0; i < users->Count; i++) {
			   User^ user = users[i];
			   dataGridView1->Rows->Add(gcnew array<String^> {
				   "" + user->Id,
					   user->Name,
					   user->Password,
					   user->Email,
					   user->membresia->TipoMembresia,
					   user->membresia->fechaInicio,
					   user->membresia->fechaFinalizacion
			   });
		   }
	   }

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) { //cerrar
	this->Close();
}
	   private: System::Void User_Load(System::Object^ sender, System::EventArgs^ e) {
		   ShowUserData();
		   comboBox1->SelectedIndex = 0;
	   }
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) { //eliminar
	if (Controller::Controller::QueryUserbyId(Id) != nullptr) {
		Controller::Controller::DeleteUser(Id);

		textBox2->Text = "";
		textBox3->Text = "";
		textBox4->Text = "";
		comboBox1->SelectedIndex = 0;
		dateTimePicker1->Value = DateTime::Today;
		Id = 0;

		ShowUserData();
	}
	else {
		MessageBox::Show("Por favor seleccione un dato antes de eliminar.");
	}
}

private: System::Void Table_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (dataGridView1->Rows[dataGridView1->SelectedCells[0]->RowIndex]->Cells[0]->Value != nullptr) {
		Id = Int32::Parse(dataGridView1->Rows[dataGridView1->SelectedCells[0]->RowIndex]
			->Cells[0]->Value->ToString());
		User^ user = Controller::Controller::QueryUserbyId(Id);
		if (user != nullptr) {
			textBox2->Text = user->Name;
			textBox3->Text = user->Password;
			textBox4->Text = user->Email;
			comboBox1->SelectedItem = user->membresia->TipoMembresia;
			dateTimePicker1->Value = DateTime::Parse(user->membresia->fechaFinalizacion);
		}
	}
	else {
		textBox2->Text = "";
		textBox3->Text = "";
		textBox4->Text = "";
		comboBox1->SelectedIndex = 0;
		dateTimePicker1->Value = DateTime::Today;
		Id = 0;
	}
	
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) { //update

	String^ name = textBox2->Text;
	String^ password = textBox3->Text;
	String^ email = textBox4->Text;

	if (name != "" && password != "" && email != "") {
		String^ TipoMembresia = comboBox1->SelectedItem->ToString();
		String^ FechaFinalizacion = dateTimePicker1->Value.ToString("yyyy-MM-dd");

		User^ user = gcnew User();
		user->Id = Id;
		user->Name = name;
		user->Password = password;
		user->Email = email;


		Membresia^ membresia = gcnew Membresia(TipoMembresia, DateTime::Today.ToString("yyyy-MM-dd"), FechaFinalizacion);
		Ajustes^ ajustes = gcnew Ajustes("°C", "Formato de 12 horas", "dd/mm/yyyy");

		user->membresia = membresia;
		user->ajustes = ajustes;

		Controller::Controller::UpdateUser(user);

		textBox2->Text = "";
		textBox3->Text = "";
		textBox4->Text = "";
		comboBox1->SelectedIndex = 0;
		dateTimePicker1->Value = DateTime::Today;
		Id = 0;

		ShowUserData();
	}
	else {
		MessageBox::Show("Por favor complete los datos antes de modificar.");
	}
}

};
}
