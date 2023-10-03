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
	using namespace System::Globalization;

	/// <summary>
	/// Resumen de WeatherWarningForm
	/// </summary>
	public ref class WeatherWarningMaintenanceForm : public System::Windows::Forms::Form
	{
	public:
		WeatherWarningMaintenanceForm(void)
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
		~WeatherWarningMaintenanceForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txt_FechaHora;
	private: System::Windows::Forms::TextBox^ txt_ValorRef;

	protected:

	protected:

	private: System::Windows::Forms::TextBox^ txt_IdAlerta;
	private: System::Windows::Forms::Label^ lbl_FechaHora;
	private: System::Windows::Forms::Label^ lbl_ValorRef;
	private: System::Windows::Forms::Label^ lbl_IdAlerta;
	private: System::Windows::Forms::Button^ btn_Add;
	private: System::Windows::Forms::Button^ btn_Update;

	private: System::Windows::Forms::Button^ btn_Delete;
	private: System::Windows::Forms::DataGridView^ dgv_WeatherWarning;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ FechaHora1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ IdAlerta1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ValorReferencia1;




	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->txt_FechaHora = (gcnew System::Windows::Forms::TextBox());
			this->txt_ValorRef = (gcnew System::Windows::Forms::TextBox());
			this->txt_IdAlerta = (gcnew System::Windows::Forms::TextBox());
			this->lbl_FechaHora = (gcnew System::Windows::Forms::Label());
			this->lbl_ValorRef = (gcnew System::Windows::Forms::Label());
			this->lbl_IdAlerta = (gcnew System::Windows::Forms::Label());
			this->btn_Add = (gcnew System::Windows::Forms::Button());
			this->btn_Update = (gcnew System::Windows::Forms::Button());
			this->btn_Delete = (gcnew System::Windows::Forms::Button());
			this->dgv_WeatherWarning = (gcnew System::Windows::Forms::DataGridView());
			this->FechaHora1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->IdAlerta1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ValorReferencia1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_WeatherWarning))->BeginInit();
			this->SuspendLayout();
			// 
			// txt_FechaHora
			// 
			this->txt_FechaHora->Location = System::Drawing::Point(115, 26);
			this->txt_FechaHora->Name = L"txt_FechaHora";
			this->txt_FechaHora->Size = System::Drawing::Size(100, 20);
			this->txt_FechaHora->TabIndex = 0;
			// 
			// txt_ValorRef
			// 
			this->txt_ValorRef->Location = System::Drawing::Point(115, 107);
			this->txt_ValorRef->Name = L"txt_ValorRef";
			this->txt_ValorRef->Size = System::Drawing::Size(100, 20);
			this->txt_ValorRef->TabIndex = 1;
			// 
			// txt_IdAlerta
			// 
			this->txt_IdAlerta->Location = System::Drawing::Point(115, 64);
			this->txt_IdAlerta->Name = L"txt_IdAlerta";
			this->txt_IdAlerta->Size = System::Drawing::Size(100, 20);
			this->txt_IdAlerta->TabIndex = 2;
			// 
			// lbl_FechaHora
			// 
			this->lbl_FechaHora->AutoSize = true;
			this->lbl_FechaHora->Location = System::Drawing::Point(13, 32);
			this->lbl_FechaHora->Name = L"lbl_FechaHora";
			this->lbl_FechaHora->Size = System::Drawing::Size(60, 13);
			this->lbl_FechaHora->TabIndex = 3;
			this->lbl_FechaHora->Text = L"FechaHora";
			this->lbl_FechaHora->Click += gcnew System::EventHandler(this, &WeatherWarningMaintenanceForm::label1_Click);
			// 
			// lbl_ValorRef
			// 
			this->lbl_ValorRef->AutoSize = true;
			this->lbl_ValorRef->Location = System::Drawing::Point(13, 114);
			this->lbl_ValorRef->Name = L"lbl_ValorRef";
			this->lbl_ValorRef->Size = System::Drawing::Size(83, 13);
			this->lbl_ValorRef->TabIndex = 4;
			this->lbl_ValorRef->Text = L"ValorReferencia";
			// 
			// lbl_IdAlerta
			// 
			this->lbl_IdAlerta->AutoSize = true;
			this->lbl_IdAlerta->Location = System::Drawing::Point(13, 71);
			this->lbl_IdAlerta->Name = L"lbl_IdAlerta";
			this->lbl_IdAlerta->Size = System::Drawing::Size(43, 13);
			this->lbl_IdAlerta->TabIndex = 5;
			this->lbl_IdAlerta->Text = L"IdAlerta";
			// 
			// btn_Add
			// 
			this->btn_Add->Location = System::Drawing::Point(13, 164);
			this->btn_Add->Name = L"btn_Add";
			this->btn_Add->Size = System::Drawing::Size(75, 23);
			this->btn_Add->TabIndex = 6;
			this->btn_Add->Text = L"Add";
			this->btn_Add->UseVisualStyleBackColor = true;
			this->btn_Add->Click += gcnew System::EventHandler(this, &WeatherWarningMaintenanceForm::btn_Add_Click);
			// 
			// btn_Update
			// 
			this->btn_Update->Location = System::Drawing::Point(115, 164);
			this->btn_Update->Name = L"btn_Update";
			this->btn_Update->Size = System::Drawing::Size(75, 23);
			this->btn_Update->TabIndex = 7;
			this->btn_Update->Text = L"Update";
			this->btn_Update->UseVisualStyleBackColor = true;
			// 
			// btn_Delete
			// 
			this->btn_Delete->Location = System::Drawing::Point(220, 164);
			this->btn_Delete->Name = L"btn_Delete";
			this->btn_Delete->Size = System::Drawing::Size(75, 23);
			this->btn_Delete->TabIndex = 8;
			this->btn_Delete->Text = L"Delete";
			this->btn_Delete->UseVisualStyleBackColor = true;
			this->btn_Delete->Click += gcnew System::EventHandler(this, &WeatherWarningMaintenanceForm::btn_Delete_Click);
			// 
			// dgv_WeatherWarning
			// 
			this->dgv_WeatherWarning->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_WeatherWarning->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->FechaHora1,
					this->IdAlerta1, this->ValorReferencia1
			});
			this->dgv_WeatherWarning->Location = System::Drawing::Point(13, 193);
			this->dgv_WeatherWarning->Name = L"dgv_WeatherWarning";
			this->dgv_WeatherWarning->Size = System::Drawing::Size(344, 86);
			this->dgv_WeatherWarning->TabIndex = 9;
			this->dgv_WeatherWarning->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &WeatherWarningMaintenanceForm::dataGridView1_CellContentClick);
			// 
			// FechaHora1
			// 
			this->FechaHora1->HeaderText = L"FechaHora";
			this->FechaHora1->Name = L"FechaHora1";
			// 
			// IdAlerta1
			// 
			this->IdAlerta1->HeaderText = L"IdAlerta";
			this->IdAlerta1->Name = L"IdAlerta1";
			// 
			// ValorReferencia1
			// 
			this->ValorReferencia1->HeaderText = L"ValorReferencia";
			this->ValorReferencia1->Name = L"ValorReferencia1";
			// 
			// WeatherWarningForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(380, 291);
			this->Controls->Add(this->dgv_WeatherWarning);
			this->Controls->Add(this->btn_Delete);
			this->Controls->Add(this->btn_Update);
			this->Controls->Add(this->btn_Add);
			this->Controls->Add(this->lbl_IdAlerta);
			this->Controls->Add(this->lbl_ValorRef);
			this->Controls->Add(this->lbl_FechaHora);
			this->Controls->Add(this->txt_IdAlerta);
			this->Controls->Add(this->txt_ValorRef);
			this->Controls->Add(this->txt_FechaHora);
			this->Name = L"WeatherWarningForm";
			this->Text = L"WeatherWarningForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_WeatherWarning))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btn_Delete_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btn_Add_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ FechaHora = txt_FechaHora->Text;
		String^ IdAlerta = txt_IdAlerta->Text;
		String^ ValorRef = txt_ValorRef->Text;

		// Parsing de la fecha y valor
		DateTime FechaHoraParsed;
		double ValorRefParsed;

		if (DateTime::TryParse(FechaHora, FechaHoraParsed) && Double::TryParse(ValorRef, ValorRefParsed)) {
			// Los datos se pudieron parsear correctamente

			AlertaMeteorologica^ alertaMeteorologica = gcnew AlertaMeteorologica();
			alertaMeteorologica->FechaHora = FechaHoraParsed;
			alertaMeteorologica->IdAlerta = IdAlerta;
			alertaMeteorologica->ValorRef = ValorRefParsed;

			dgv_WeatherWarning->Rows->Add(gcnew array<String^> {
				FechaHora,
					IdAlerta,
					ValorRef,
			});
			Controller::Controller::AlertaMeteorologica(alertaMeteorologica);
			//ShowUser();
			MessageBox::Show("Alerta Meteorologica guardada");

		}
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	};
}
