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





	private: int Id;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox1;

	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ FechaFin;












	private: System::Windows::Forms::Label^ PuntosTotalesLabel;



	private: System::Windows::Forms::Label^ PuntosDiariosLabel;


	private: System::Windows::Forms::TextBox^ PuntosDiarioText;







	private: System::Windows::Forms::TextBox^ PuntoTotalesText;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ FechaFindgv;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PuntosTotales;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PuntosDiarios;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ FechaActualizacion;





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
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->FechaFin = (gcnew System::Windows::Forms::Label());
			this->PuntosTotalesLabel = (gcnew System::Windows::Forms::Label());
			this->PuntosDiariosLabel = (gcnew System::Windows::Forms::Label());
			this->PuntosDiarioText = (gcnew System::Windows::Forms::TextBox());
			this->PuntoTotalesText = (gcnew System::Windows::Forms::TextBox());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->FechaFindgv = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PuntosTotales = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PuntosDiarios = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->FechaActualizacion = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
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
			this->button4->Location = System::Drawing::Point(649, 146);
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
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
				this->Column1,
					this->Column4, this->Column2, this->Column3, this->Column5, this->Column6, this->FechaFindgv, this->PuntosTotales, this->PuntosDiarios,
					this->FechaActualizacion
			});
			this->dataGridView1->Location = System::Drawing::Point(22, 184);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(699, 201);
			this->dataGridView1->TabIndex = 57;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &UserMaintenance::Table_CellClick);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(649, 101);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 56;
			this->button3->Text = L"Eliminar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &UserMaintenance::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(649, 56);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 55;
			this->button2->Text = L"Modificar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &UserMaintenance::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(649, 9);
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
			this->label1->Location = System::Drawing::Point(297, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 13);
			this->label1->TabIndex = 63;
			this->label1->Text = L"Membresia";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Basic", L"Estandar", L"Premium" });
			this->comboBox1->Location = System::Drawing::Point(414, 21);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(100, 21);
			this->comboBox1->TabIndex = 64;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(414, 55);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker1->TabIndex = 65;
			// 
			// FechaFin
			// 
			this->FechaFin->AutoSize = true;
			this->FechaFin->Location = System::Drawing::Point(297, 57);
			this->FechaFin->Name = L"FechaFin";
			this->FechaFin->Size = System::Drawing::Size(92, 13);
			this->FechaFin->TabIndex = 66;
			this->FechaFin->Text = L"FechaFinalizacion";
			// 
			// PuntosTotalesLabel
			// 
			this->PuntosTotalesLabel->AutoSize = true;
			this->PuntosTotalesLabel->Location = System::Drawing::Point(14, 102);
			this->PuntosTotalesLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->PuntosTotalesLabel->Name = L"PuntosTotalesLabel";
			this->PuntosTotalesLabel->Size = System::Drawing::Size(75, 13);
			this->PuntosTotalesLabel->TabIndex = 67;
			this->PuntosTotalesLabel->Text = L"PuntosTotales";
			// 
			// PuntosDiariosLabel
			// 
			this->PuntosDiariosLabel->AutoSize = true;
			this->PuntosDiariosLabel->Location = System::Drawing::Point(14, 136);
			this->PuntosDiariosLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->PuntosDiariosLabel->Name = L"PuntosDiariosLabel";
			this->PuntosDiariosLabel->Size = System::Drawing::Size(75, 13);
			this->PuntosDiariosLabel->TabIndex = 69;
			this->PuntosDiariosLabel->Text = L"Puntos Diarios";
			// 
			// PuntosDiarioText
			// 
			this->PuntosDiarioText->Location = System::Drawing::Point(131, 132);
			this->PuntosDiarioText->Margin = System::Windows::Forms::Padding(2);
			this->PuntosDiarioText->Name = L"PuntosDiarioText";
			this->PuntosDiarioText->Size = System::Drawing::Size(100, 20);
			this->PuntosDiarioText->TabIndex = 72;
			// 
			// PuntoTotalesText
			// 
			this->PuntoTotalesText->Location = System::Drawing::Point(131, 102);
			this->PuntoTotalesText->Margin = System::Windows::Forms::Padding(2);
			this->PuntoTotalesText->Name = L"PuntoTotalesText";
			this->PuntoTotalesText->Size = System::Drawing::Size(100, 20);
			this->PuntoTotalesText->TabIndex = 73;
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
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 125;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"FechaInicio";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 125;
			// 
			// FechaFindgv
			// 
			this->FechaFindgv->HeaderText = L"FechaFin";
			this->FechaFindgv->MinimumWidth = 6;
			this->FechaFindgv->Name = L"FechaFindgv";
			this->FechaFindgv->Width = 125;
			// 
			// PuntosTotales
			// 
			this->PuntosTotales->HeaderText = L"PuntosTotales";
			this->PuntosTotales->MinimumWidth = 6;
			this->PuntosTotales->Name = L"PuntosTotales";
			this->PuntosTotales->Width = 125;
			// 
			// PuntosDiarios
			// 
			this->PuntosDiarios->HeaderText = L"PuntosDiarios";
			this->PuntosDiarios->MinimumWidth = 6;
			this->PuntosDiarios->Name = L"PuntosDiarios";
			this->PuntosDiarios->Width = 125;
			// 
			// FechaActualizacion
			// 
			this->FechaActualizacion->HeaderText = L"FechaActualizacion";
			this->FechaActualizacion->MinimumWidth = 6;
			this->FechaActualizacion->Name = L"FechaActualizacion";
			this->FechaActualizacion->Width = 125;
			// 
			// UserMaintenance
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(733, 397);
			this->Controls->Add(this->PuntoTotalesText);
			this->Controls->Add(this->PuntosDiarioText);
			this->Controls->Add(this->PuntosDiariosLabel);
			this->Controls->Add(this->PuntosTotalesLabel);
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
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
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
	String^ PTString = PuntoTotalesText->Text;
	String^ PDString = PuntosDiarioText->Text;


	if (Name != "" && Password != "" && Email != "" && PTString != "" && PDString != "") {
		int PuntoTotales;
		int PuntoDiarios;


		bool PTbool = Int32::TryParse(PTString, PuntoTotales);
		bool PDbool = Int32::TryParse(PDString, PuntoDiarios);
		if (PTbool && PDbool) {
			if (PuntoTotales >= 0 && PuntoDiarios >= 0) {
				if (dateTimePicker1->Value > DateTime::Today) {
					String^ TipoMembresia = comboBox1->SelectedItem->ToString();
					String^ FechaFinalizacion = dateTimePicker1->Value.ToString("yyyy-MM-dd");

					//String^ FechaFinalizacionActualizacion = dateTimePicker2->Value.ToString("yyyy-MM-dd");

					//String^ FechaFinalizacionActualizacion = dateTimePicker1->Value.ToString("yyyy-MM-dd");

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

					user->PuntosTotales = PuntoTotales;
					user->PuntosDiarios = PuntoDiarios;
					user->fechaUltimaActualizacion = DateTime::Today.ToString("yyyy-MM-dd");


					Controller::Controller::AddUser(user);
					ShowUserData();

					textBox2->Text = "";
					textBox3->Text = "";
					textBox4->Text = "";
					PuntosDiarioText->Text = "";
					PuntoTotalesText->Text = "";

					comboBox1->SelectedIndex = 0;
					dateTimePicker1->Value = DateTime::Today;
					Id = 0;
				}
				else {
					MessageBox::Show("La fecha de finalización debe ser mayor que la fecha de inicio.");
				}
			}
			else {
				MessageBox::Show("Los datos ingresados deben ser números positivos");
			}
		}
		else {
			MessageBox::Show("Los valores ingresados deben ser números.");
		}
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
					   user->membresia->fechaFinalizacion,

					   "" + user->PuntosTotales,           // Agregado
					   "" + user->PuntosDiarios,           // Agregado
					   user->fechaUltimaActualizacion,     // Agregado
					   // user->preguntasDia->AlgoAquí,    // Agregado si tienes esta propiedad
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
		PuntosDiarioText->Text = "";
		PuntoTotalesText->Text = "";
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

			PuntoTotalesText->Text = user->PuntosTotales.ToString();
			PuntosDiarioText->Text = user->PuntosDiarios.ToString();
			



			dateTimePicker1->Value = DateTime::Parse(user->membresia->fechaFinalizacion);
		}
	}
	else {
		textBox2->Text = "";
		textBox3->Text = "";
		textBox4->Text = "";
		
		PuntoTotalesText->Text = "";
		PuntosDiarioText->Text = "";



		comboBox1->SelectedIndex = 0;
		dateTimePicker1->Value = DateTime::Today;
		Id = 0;
	}
	
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) { //update

	String^ Name = textBox2->Text;
	String^ Password = textBox3->Text;
	String^ Email = textBox4->Text;
	String^ PTString = PuntoTotalesText->Text;
	String^ PDString = PuntosDiarioText->Text;


	if (Name != "" && Password != "" && Email != "" && PTString != "" && PDString != "") {
		int PuntoTotales;
		int PuntoDiarios;

		bool PTbool = Int32::TryParse(PTString, PuntoTotales);
		bool PDbool = Int32::TryParse(PDString, PuntoDiarios);

		if (PTbool && PDbool) {
			if (PuntoTotales>=0 && PuntoDiarios >=0) {
				if (dateTimePicker1->Value > DateTime::Today) {
					String^ TipoMembresia = comboBox1->SelectedItem->ToString();
					String^ FechaFinalizacion = dateTimePicker1->Value.ToString("yyyy-MM-dd");

					User^ user = gcnew User();
					user->Id = Id;
					user->Name = Name;
					user->Password = Password;
					user->Email = Email;


					Membresia^ membresia = gcnew Membresia(TipoMembresia, DateTime::Today.ToString("yyyy-MM-dd"), FechaFinalizacion);
					Ajustes^ ajustes = gcnew Ajustes("°C", "Formato de 12 horas", "dd/mm/yyyy");

					user->membresia = membresia;
					user->ajustes = ajustes;



					user->PuntosTotales = PuntoTotales;
					user->PuntosDiarios = PuntoDiarios;
					user->fechaUltimaActualizacion = DateTime::Today.ToString("yyyy-MM-dd");






					Controller::Controller::UpdateUser(user);

					textBox2->Text = "";
					textBox3->Text = "";
					textBox4->Text = "";

					PuntoTotalesText->Text = "";
					PuntosDiarioText->Text = "";



					comboBox1->SelectedIndex = 0;
					dateTimePicker1->Value = DateTime::Today;
					Id = 0;

					ShowUserData();
				}
				else {
					MessageBox::Show("La fecha de finalización debe ser mayor que la fecha de inicio.");
				}
			}
			else {
				MessageBox::Show("Los datos ingresados deben ser números positivos");
			}
		}
		else {
			MessageBox::Show("Los datos ingresados deben ser números");
		}
	}
	else {
		MessageBox::Show("Por favor complete los datos antes de modificar.");
	}
}

};
}
