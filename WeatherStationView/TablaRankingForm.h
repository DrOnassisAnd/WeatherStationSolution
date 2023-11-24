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
		TablaRankingForm(User^ U)
		{
			InitializeComponent();
			this->user = U;
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

	private: User^ user;
	private: Color sombreado1 = Color::Gold;
	private: Color sombreado2 = Color::DarkGray;
	private: Color sombreado3 = Color::Goldenrod;
	private: Color sombreadoUserNormal = Color::LightBlue;
	private: Color sombreadoUser1 = BlanquearColores(sombreado1);
	private: Color sombreadoUser2 = BlanquearColores(sombreado2);
	private: Color sombreadoUser3 = BlanquearColores(sombreado3);
	private: System::Windows::Forms::Panel^ panel1;

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Control;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(127, 9);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(236, 37);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ranking Global";
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Posición,
					this->Usuario, this->PuntosConseguidos
			});
			this->dataGridView1->Location = System::Drawing::Point(33, 66);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(431, 212);
			this->dataGridView1->TabIndex = 1;
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
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Control;
			this->panel1->Controls->Add(this->dataGridView1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(493, 302);
			this->panel1->TabIndex = 2;
			// 
			// TablaRankingForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(493, 302);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"TablaRankingForm";
			this->Text = L"TablaRankingForm";
			this->Load += gcnew System::EventHandler(this, &TablaRankingForm::TablaRankingForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void TablaRankingForm_Load(System::Object^ sender, System::EventArgs^ e) {

	MostrarRanking();

	String^ Name = user->Name;

	for (int i = 0; i < (dataGridView1->Rows->Count-1); i++)
	{
		if (i == 0) // Sombrear las tres primeras filas
		{
			dataGridView1->Rows[i]->DefaultCellStyle->BackColor = sombreado1;
		}
		else if (i == 1) 
		{
			dataGridView1->Rows[i]->DefaultCellStyle->BackColor = sombreado2;
		}
		if (i == 2) 
		{
			dataGridView1->Rows[i]->DefaultCellStyle->BackColor = sombreado3;
		}

		// Obtener el nombre de la persona en la fila actual
		String^ nombredgv = (dataGridView1->Rows[i]->Cells["Usuario"]->Value)->ToString();

		if (nombredgv == Name) // Sombrear la fila del usuario actual
		{	
			if (i == 0) // Sombrear las tres primeras filas
			{
				dataGridView1->Rows[i]->DefaultCellStyle->BackColor = sombreadoUser1;
			}
			else if (i == 1)
			{
				dataGridView1->Rows[i]->DefaultCellStyle->BackColor = sombreadoUser2;
			}
			if (i == 2)
			{
				dataGridView1->Rows[i]->DefaultCellStyle->BackColor = sombreadoUser3;
			}
			else if (i >= 3) // Si no está entre las tres primeras filas ni es el usuario actual
			{
				dataGridView1->Rows[i]->DefaultCellStyle->BackColor = sombreadoUserNormal;
			}
		}
		
	}
	




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

	   Color BlanquearColores(Color color) {

		   // Obtener los componentes RGB del color dorado
		   int red = color.R;
		   int green = color.G;
		   int blue = color.B;

		   // Aumentar el brillo del color dorado (haciendo el color más claro)
		   red = Math::Min(255, (int)(red * 2)); // Aumentar el valor de rojo
		   green = Math::Min(255, (int)(green * 2)); // Aumentar el valor de verde
		   blue = Math::Min(255, (int)(blue * 2)); // Aumentar el valor de azul

		   // Crear un nuevo color con los valores ajustados
		   Color colorClaro = Color::FromArgb(red, green, blue);

		   return colorClaro;

	   }
};
}
