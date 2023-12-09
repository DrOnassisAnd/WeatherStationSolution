#pragma once

#include "PaymentMethodForm.h"

namespace WeatherStationView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de TiendaPuntos
	/// </summary>
	public ref class TiendaPuntos : public System::Windows::Forms::Form
	{
	public:
		TiendaPuntos(User^ User)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->user = User;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~TiendaPuntos()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ DollarsTextBox;
	protected:
	private: System::Windows::Forms::TextBox^ ECtextBox;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Button^ button3;
	private: User^ user;

	private: int ecocoins;
	private: double soles;
	private: const double factor = 0.2; //1 ecocoin vale (factor) soles
	private: int isRegisterDone;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;



	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton4;


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
			this->DollarsTextBox = (gcnew System::Windows::Forms::TextBox());
			this->ECtextBox = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->SuspendLayout();
			// 
			// DollarsTextBox
			// 
			this->DollarsTextBox->Enabled = false;
			this->DollarsTextBox->Location = System::Drawing::Point(295, 95);
			this->DollarsTextBox->Name = L"DollarsTextBox";
			this->DollarsTextBox->Size = System::Drawing::Size(36, 20);
			this->DollarsTextBox->TabIndex = 55;
			// 
			// ECtextBox
			// 
			this->ECtextBox->Location = System::Drawing::Point(132, 95);
			this->ECtextBox->Name = L"ECtextBox";
			this->ECtextBox->Size = System::Drawing::Size(46, 20);
			this->ECtextBox->TabIndex = 54;
			this->ECtextBox->TextChanged += gcnew System::EventHandler(this, &TiendaPuntos::ECtextBox_TextChanged);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(337, 98);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(31, 13);
			this->label18->TabIndex = 53;
			this->label18->Text = L"soles";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(184, 98);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(108, 13);
			this->label17->TabIndex = 52;
			this->label17->Text = L"ecocoins equivalen a";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(54, 98);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(72, 13);
			this->label16->TabIndex = 51;
			this->label16->Text = L"La compra de";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(126, 58);
			this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(195, 34);
			this->label15->TabIndex = 50;
			this->label15->Text = L"COMPRA ECOCOINS";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Location = System::Drawing::Point(57, 230);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(121, 41);
			this->button3->TabIndex = 56;
			this->button3->Text = L"Comprar";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &TiendaPuntos::button3_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(265, 230);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(121, 41);
			this->button1->TabIndex = 57;
			this->button1->Text = L"Salir";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &TiendaPuntos::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label3->Location = System::Drawing::Point(11, 19);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(468, 34);
			this->label3->TabIndex = 58;
			this->label3->Text = L"Adquiere ecocoins para acelerar tu progreso y adquirir membresías.\r\n ¡20 ecocoins"
				L" equivalen a 4 soles! Tu contribución cuenta. ¡Comencemos!";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(39, 161);
			this->radioButton3->Margin = System::Windows::Forms::Padding(2);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(129, 17);
			this->radioButton3->TabIndex = 61;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"100 puntos a 18 soles";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(39, 129);
			this->radioButton2->Margin = System::Windows::Forms::Padding(2);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(123, 17);
			this->radioButton2->TabIndex = 60;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"60 puntos a 11 soles";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(39, 98);
			this->radioButton1->Margin = System::Windows::Forms::Padding(2);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(14, 13);
			this->radioButton1->TabIndex = 59;
			this->radioButton1->TabStop = true;
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(39, 191);
			this->radioButton4->Margin = System::Windows::Forms::Padding(2);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(129, 17);
			this->radioButton4->TabIndex = 65;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"300 puntos a 54 soles";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// TiendaPuntos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(485, 282);
			this->Controls->Add(this->radioButton4);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->DollarsTextBox);
			this->Controls->Add(this->ECtextBox);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Name = L"TiendaPuntos";
			this->Text = L"TiendaPuntos";
			this->Load += gcnew System::EventHandler(this, &TiendaPuntos::TiendaPuntos_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void TiendaPuntos_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ECtextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (ValidateECTextBox()) DollarsTextBox->Text = (Double::Parse(ECtextBox->Text) * factor).ToString();
	}
		   int ValidateECTextBox() {
			   double ec;
			   if (Double::TryParse(ECtextBox->Text, ec)) {
				   if ((ec > 0) && (ec < 1000)) {
					   return 1;
				   }
			   }
			   return 0;
		   }
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (radioButton1->Checked == true) {
		if (ValidateECTextBox()) {
			double soles = Double::Parse(DollarsTextBox->Text);
			PaymentMethodForm^ pymform = gcnew PaymentMethodForm(isRegisterDone, soles,user); //isRegisterDone
			pymform->ControlBox = false;
			pymform->ShowDialog();
			isRegisterDone = pymform->GetBool();
			if (!isRegisterDone) {
				this->Show();
			}
			else {
				
				user->PuntosTotales += Int32::Parse(ECtextBox->Text);
				Controller::Controller::UpdateUser(user);
				this->Close();
			}
		}
		else {
			MessageBox::Show("Por favor seleccione un valor correcto");
		}
	}
	else if (radioButton2->Checked) {
		soles = 11;
		PaymentMethodForm^ pymform = gcnew PaymentMethodForm(isRegisterDone, soles, user); //isRegisterDone
		pymform->ControlBox = false;
		pymform->ShowDialog();
		isRegisterDone = pymform->GetBool();
		if (!isRegisterDone) {
			this->Show();
		}
		else {
			user->PuntosTotales += 60;
			Controller::Controller::UpdateUser(user);
			this->Close();
		}
	}
	else if (radioButton3->Checked){
		soles = 18;
		PaymentMethodForm^ pymform = gcnew PaymentMethodForm(isRegisterDone, soles, user); //isRegisterDone
		pymform->ControlBox = false;
		pymform->ShowDialog();
		isRegisterDone = pymform->GetBool();
		if (!isRegisterDone) {
			this->Show();
		}
		else {
			user->PuntosTotales += 100;
			Controller::Controller::UpdateUser(user);
			this->Close();
		}
	}
	else if (radioButton4->Checked) {
		soles = 54;
		PaymentMethodForm^ pymform = gcnew PaymentMethodForm(isRegisterDone, soles, user); //isRegisterDone
		pymform->ControlBox = false;
		pymform->ShowDialog();
		isRegisterDone = pymform->GetBool();
		if (!isRegisterDone) {
			this->Show();
		}
		else {
			user->PuntosTotales += 300;
			Controller::Controller::UpdateUser(user);
			this->Close();
		}
	}
	else {
		MessageBox::Show("Por favor seleccione una opción.");
	}


	
}
};
}
