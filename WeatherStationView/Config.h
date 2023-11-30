#pragma once
#include <string>

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
	/// Resumen de Config
	/// </summary>
	public ref class Config : public System::Windows::Forms::Form
	{
	public:
		Config(Ajustes^ Config)
		{
			InitializeComponent();
			this->config = Config;
		}

		Config::Ajustes^ GetConfig() {
			return config;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Config()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: Ajustes^ config;
	private: System::Windows::Forms::Label^ label2;




	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ComboBox^ comboBox1;




	private: System::Windows::Forms::ComboBox^ comboBox6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(21, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(41, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ajustes";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(34, 59);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(119, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Unidad de Temperatura";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(36, 93);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(89, 13);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Formato de horas";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"°C", L"°F" });
			this->comboBox1->Location = System::Drawing::Point(192, 56);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 7;
			// 
			// comboBox6
			// 
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Formato de 12 horas", L"Formato de 24 horas" });
			this->comboBox6->Location = System::Drawing::Point(192, 93);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(121, 21);
			this->comboBox6->TabIndex = 11;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(365, 56);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Aceptar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Config::Aceptar_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(365, 93);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Cerrar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Config::Cerrar_Click);
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(36, 133);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(182, 13);
			this->linkLabel1->TabIndex = 15;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Restablecer valores predeterminados";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Config::linkLabel1_LinkClicked);
			// 
			// Config
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(452, 164);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox6);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Config";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Config";
			this->Load += gcnew System::EventHandler(this, &Config::Config_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void Aceptar_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ UnidadTemp = comboBox1->Text;
		String^ FormatoHoras = comboBox6->Text;
		String^ FormatoFecha = comboBox5->Text;
		
		//user->Id = Id;
		config->UnidadTemp = UnidadTemp;
		config->FormatoHoras = FormatoHoras;
		config->FormatoFecha = FormatoFecha;

		//Controller::Controller::AddAjustes(config);
		MessageBox::Show("Cambios Aplicados");
		this->Hide();

	}
	private: System::Void Cerrar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
	}
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->comboBox1->SelectedIndex = 0;
		this->comboBox5->SelectedIndex = 0;
		this->comboBox6->SelectedIndex = 0;
	}
	private: System::Void Config_Load(System::Object^ sender, System::EventArgs^ e) {
		
		if ((String^)(config->UnidadTemp) == (String^)"°F") { this->comboBox1->SelectedIndex = 1; }
		else { this->comboBox1->SelectedIndex = 0; }
		

		if ((config->FormatoHoras) == "Formato de 24 horas") { this->comboBox6->SelectedIndex = 1; }
		else { this->comboBox6->SelectedIndex = 0; }

		if ((config->FormatoFecha) == "mm/dd/yyyy") { this->comboBox5->SelectedIndex = 1; }
		else if ((config->FormatoFecha) == "yyyy/mm/dd") { this->comboBox5->SelectedIndex = 2; }
		else { this->comboBox5->SelectedIndex = 0; }
		
	}
	private: System::Void comboBox5_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};
}