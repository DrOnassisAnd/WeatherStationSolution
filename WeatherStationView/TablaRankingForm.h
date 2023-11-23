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
	/// Resumen de TablaRankingForm
	/// </summary>
	public ref class TablaRankingForm : public System::Windows::Forms::Form
	{
	public:
		TablaRankingForm(void)
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
		~TablaRankingForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Posición;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Usuario;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PuntosConseguidos;
	protected:

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Posición = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Usuario = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PuntosConseguidos = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(96, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(293, 46);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ranking Global";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Posición,
					this->Usuario, this->PuntosConseguidos
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 118);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(719, 347);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &TablaRankingForm::dataGridView1_CellContentClick);
			// 
			// Posición
			// 
			this->Posición->HeaderText = L"Posición";
			this->Posición->MinimumWidth = 6;
			this->Posición->Name = L"Posición";
			this->Posición->Width = 125;
			// 
			// Usuario
			// 
			this->Usuario->HeaderText = L"Usuario";
			this->Usuario->MinimumWidth = 6;
			this->Usuario->Name = L"Usuario";
			this->Usuario->Width = 125;
			// 
			// PuntosConseguidos
			// 
			this->PuntosConseguidos->HeaderText = L"PuntosConseguidos";
			this->PuntosConseguidos->MinimumWidth = 6;
			this->PuntosConseguidos->Name = L"PuntosConseguidos";
			this->PuntosConseguidos->Width = 125;
			// 
			// TablaRankingForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(785, 513);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Name = L"TablaRankingForm";
			this->Text = L"TablaRankingForm";
			this->Load += gcnew System::EventHandler(this, &TablaRankingForm::TablaRankingForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
private: System::Void TablaRankingForm_Load(System::Object^ sender, System::EventArgs^ e) {

	MostrarRanking();



}
	   
	   // Definir una función de comparación para ordenar Users por PuntosTotales
	   int CompareUsersByPuntosTotales(User^ u1, User^ u2)
	   {
		   return u2->PuntosTotales.CompareTo(u1->PuntosTotales);
	   }

	   void MostrarRanking()
	   {
		   // Obtener la lista de usuarios (suponiendo que tienes una lista de usuarios)
		   List<User^>^ users = Controller::Controller::QueryAllUser();

		   // Ordenar la lista de usuarios usando la función de comparación
		   users->Sort(gcnew Comparison<User^>(User::CompareByPuntosTotales));

		   // Limpiar las filas existentes en el dataGridView1
		   dataGridView1->Rows->Clear();

		   // Mostrar los datos ordenados en el dataGridView1
		   for (int i = 0; i < users->Count; i++)
		   {
			   User^ user = users[i];

			   // Agregar la información al dataGridView1
			   dataGridView1->Rows->Add(gcnew array<String^> {
				   (i + 1).ToString(),  // Posición en el ranking
					   user->Name,
					   "" + user->PuntosTotales
			   });
		   }
	   }










};
}
