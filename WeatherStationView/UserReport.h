#pragma once

namespace WeatherStationView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Button^ GraficosBtn;
	private: System::Windows::Forms::Button^ CerrarBtn;
	private: System::Windows::Forms::Button^ RestablecerBtn;
	protected:

	protected:

	private: System::Windows::Forms::Label^ MinLabel;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ CriterioBox;
	private: System::Windows::Forms::TextBox^ FilterBox;


	private: System::Windows::Forms::Button^ CerrarBtn;
	private: System::Windows::Forms::Button^ BuscarBtn;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ FechaFindgv;
	private: System::Windows::Forms::Button^ GraficosBtn;











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
			this->GraficosBtn = (gcnew System::Windows::Forms::Button());
			this->RestablecerBtn = (gcnew System::Windows::Forms::Button());
			this->MinLabel = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->CriterioBox = (gcnew System::Windows::Forms::ComboBox());
			this->FilterBox = (gcnew System::Windows::Forms::TextBox());
			this->CerrarBtn = (gcnew System::Windows::Forms::Button());
			this->BuscarBtn = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->FechaFindgv = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// GraficosBtn
			// 
			this->GraficosBtn->Location = System::Drawing::Point(18, 320);
			this->GraficosBtn->Name = L"GraficosBtn";
			this->GraficosBtn->Size = System::Drawing::Size(121, 23);
			this->GraficosBtn->TabIndex = 62;
			this->GraficosBtn->Text = L"Mostrar Graficos";
			this->GraficosBtn->UseVisualStyleBackColor = true;
			this->GraficosBtn->Click += gcnew System::EventHandler(this, &UserReport::GraficosClick);
			// 
			// RestablecerBtn
			// 
			this->RestablecerBtn->Location = System::Drawing::Point(558, 320);
			this->RestablecerBtn->Name = L"RestablecerBtn";
			this->RestablecerBtn->Size = System::Drawing::Size(75, 23);
			this->RestablecerBtn->TabIndex = 49;
			this->RestablecerBtn->Text = L"Restablecer";
			this->RestablecerBtn->UseVisualStyleBackColor = true;
			this->RestablecerBtn->Click += gcnew System::EventHandler(this, &UserReport::RestablecerClick);
			// 
			// MinLabel
			// 
			this->MinLabel->AutoSize = true;
			this->MinLabel->Location = System::Drawing::Point(210, 44);
			this->MinLabel->Name = L"MinLabel";
			this->MinLabel->Size = System::Drawing::Size(35, 13);
			this->MinLabel->TabIndex = 47;
			this->MinLabel->Text = L"label2";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(15, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(105, 13);
			this->label1->TabIndex = 45;
			this->label1->Text = L"Criterio de Búsqueda";
			// 
			// CriterioBox
			// 
			this->CriterioBox->FormattingEnabled = true;
			this->CriterioBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Nombre", L"Tipo Membresia" });
			this->CriterioBox->Location = System::Drawing::Point(18, 69);
			this->CriterioBox->Name = L"CriterioBox";
			this->CriterioBox->Size = System::Drawing::Size(121, 21);
			this->CriterioBox->TabIndex = 44;
			// 
			// FilterBox
			// 
			this->FilterBox->Location = System::Drawing::Point(210, 69);
			this->FilterBox->Name = L"FilterBox";
			this->FilterBox->Size = System::Drawing::Size(112, 20);
			this->FilterBox->TabIndex = 43;
			// 
			// CerrarBtn
			// 
			this->CerrarBtn->Location = System::Drawing::Point(664, 320);
			this->CerrarBtn->Name = L"CerrarBtn";
			this->CerrarBtn->Size = System::Drawing::Size(75, 23);
			this->CerrarBtn->TabIndex = 42;
			this->CerrarBtn->Text = L"Cerrar";
			this->CerrarBtn->UseVisualStyleBackColor = true;
			this->CerrarBtn->Click += gcnew System::EventHandler(this, &UserReport::CerrarClick);
			// 
			// BuscarBtn
			// 
			this->BuscarBtn->Location = System::Drawing::Point(664, 69);
			this->BuscarBtn->Name = L"BuscarBtn";
			this->BuscarBtn->Size = System::Drawing::Size(75, 23);
			this->BuscarBtn->TabIndex = 41;
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
			this->dataGridView1->Location = System::Drawing::Point(7, 131);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(743, 174);
			this->dataGridView1->TabIndex = 63;
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
			// UserReport
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(757, 352);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->GraficosBtn);
			this->Controls->Add(this->RestablecerBtn);
			this->Controls->Add(this->MinLabel);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->CriterioBox);
			this->Controls->Add(this->FilterBox);
			this->Controls->Add(this->CerrarBtn);
			this->Controls->Add(this->BuscarBtn);
			this->Name = L"UserReport";
			this->Text = L"UserReport";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BuscarClick(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void GraficosBtn(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void GraficosBtn(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void RestablecerBtn(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void GraficosBtn(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void RestablecerBtn(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void CerrarBtn(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void GraficosBtn(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void RestablecerBtn(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void CerrarClick(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void GraficosBtn(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void RestablecerClick(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void GraficosClick(System::Object^ sender, System::EventArgs^ e) {
}
};
}
