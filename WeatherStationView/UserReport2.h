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
	/// Resumen de UserReport
	/// </summary>
	public ref class UserReport : public System::Windows::Forms::Form
	{
	public:
		UserReport(void)
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
		~UserReport()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: List<User^>^ sensorData;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ CriterioBox;
	private: System::Windows::Forms::TextBox^ MinBox;
	private: System::Windows::Forms::Button^ BuscarBtn;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ FechaFindgv;

	private: System::Windows::Forms::Button^ RestablecerBtn;
	private: System::Windows::Forms::Button^ CerrarBtn;

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
			this->CriterioBox = (gcnew System::Windows::Forms::ComboBox());
			this->MinBox = (gcnew System::Windows::Forms::TextBox());
			this->BuscarBtn = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->FechaFindgv = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->RestablecerBtn = (gcnew System::Windows::Forms::Button());
			this->CerrarBtn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(20, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(105, 13);
			this->label1->TabIndex = 42;
			this->label1->Text = L"Criterio de Búsqueda";
			// 
			// CriterioBox
			// 
			this->CriterioBox->FormattingEnabled = true;
			this->CriterioBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Nombre", L"Membresia" });
			this->CriterioBox->Location = System::Drawing::Point(23, 37);
			this->CriterioBox->Name = L"CriterioBox";
			this->CriterioBox->Size = System::Drawing::Size(121, 21);
			this->CriterioBox->TabIndex = 41;
			// 
			// MinBox
			// 
			this->MinBox->Location = System::Drawing::Point(215, 39);
			this->MinBox->Name = L"MinBox";
			this->MinBox->Size = System::Drawing::Size(112, 20);
			this->MinBox->TabIndex = 40;
			// 
			// BuscarBtn
			// 
			this->BuscarBtn->Location = System::Drawing::Point(669, 37);
			this->BuscarBtn->Name = L"BuscarBtn";
			this->BuscarBtn->Size = System::Drawing::Size(75, 23);
			this->BuscarBtn->TabIndex = 39;
			this->BuscarBtn->Text = L"Buscar";
			this->BuscarBtn->UseVisualStyleBackColor = true;
			this->BuscarBtn->Click += gcnew System::EventHandler(this, &UserReport::BuscarClick);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column1,
					this->Column4, this->Column2, this->Column3, this->Column5, this->FechaFindgv
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 93);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(748, 173);
			this->dataGridView1->TabIndex = 58;
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
			// FechaFindgv
			// 
			this->FechaFindgv->HeaderText = L"FechaFin";
			this->FechaFindgv->Name = L"FechaFindgv";
			// 
			// RestablecerBtn
			// 
			this->RestablecerBtn->Location = System::Drawing::Point(23, 277);
			this->RestablecerBtn->Name = L"RestablecerBtn";
			this->RestablecerBtn->Size = System::Drawing::Size(75, 23);
			this->RestablecerBtn->TabIndex = 60;
			this->RestablecerBtn->Text = L"Restablecer";
			this->RestablecerBtn->UseVisualStyleBackColor = true;
			this->RestablecerBtn->Click += gcnew System::EventHandler(this, &UserReport::RestablecerClick);
			// 
			// CerrarBtn
			// 
			this->CerrarBtn->Location = System::Drawing::Point(673, 277);
			this->CerrarBtn->Name = L"CerrarBtn";
			this->CerrarBtn->Size = System::Drawing::Size(75, 23);
			this->CerrarBtn->TabIndex = 59;
			this->CerrarBtn->Text = L"Cerrar";
			this->CerrarBtn->UseVisualStyleBackColor = true;
			this->CerrarBtn->Click += gcnew System::EventHandler(this, &UserReport::CerrarClick);
			// 
			// UserReport
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(773, 308);
			this->Controls->Add(this->RestablecerBtn);
			this->Controls->Add(this->CerrarBtn);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->CriterioBox);
			this->Controls->Add(this->MinBox);
			this->Controls->Add(this->BuscarBtn);
			this->Name = L"UserReport";
			this->Text = L"UserReport";
			this->Load += gcnew System::EventHandler(this, &UserReport::UserReportLoad);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void GraficosClick(System::Object^ sender, System::EventArgs^ e) {

	}
private: System::Void RestablecerClick(System::Object^ sender, System::EventArgs^ e) {
	List<User^>^ users = Controller::Controller::QueryAllUser();
	ShowUserData(users);
}
private: System::Void CerrarClick(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void BuscarClick(System::Object^ sender, System::EventArgs^ e) {
	List<User^>^ user_aux = gcnew List<User^>(); //lista a ser filtrada
	if (CriterioBox->SelectedItem->ToString() == "Nombre") {
		for each (User^ dato in sensorData) {
			String^ nombre = dato->Name;
			if (nombre == MinBox->Text) {
				// El valor de Temperatura está dentro del rango, agrega el dato filtrado a la nueva lista.
				user_aux->Add(dato);
			}
		}
	}
	else if (CriterioBox->SelectedItem->ToString() == "Membresia") {
		for each (User^ dato in sensorData) {
			String^ membresia = dato->membresia->TipoMembresia;
			if (membresia == MinBox->Text) {
				// El valor de Temperatura está dentro del rango, agrega el dato filtrado a la nueva lista.
				user_aux->Add(dato);
			}
		}
	}
	ShowUserData(user_aux);

}
private: System::Void UserReportLoad(System::Object^ sender, System::EventArgs^ e) {
	sensorData = Controller::Controller::QueryAllUser();
	ShowUserData(sensorData);
}
	   void ShowUserData(List<User^>^ users) {	   
		   dataGridView1->Rows->Clear();
		   for (int i = 0; i < users->Count; i++) {
			   User^ user = users[i];
			   dataGridView1->Rows->Add(gcnew array<String^> {
				   "" + user->Id,
					   user->Name,
					   user->Password,
					   user->Email,
					   user->membresia->TipoMembresia,
					   user->membresia->fechaFinalizacion
			   });
		   }
	   }
};
}
