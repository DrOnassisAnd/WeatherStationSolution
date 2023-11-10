#pragma once
// #include "UserStandarForm.h"


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
	/// Resumen de PaymentMethodForm
	/// </summary>
	public ref class PaymentMethodForm : public System::Windows::Forms::Form
	{
	public:

		PaymentMethodForm(int isRegisterDone)
		{
			InitializeComponent();
			this->isRegisterDone = isRegisterDone;
		}
		PaymentMethodForm::Membresia^ GetMembresia() {
			return membresia;
		}

		int GetBool() {
			return isRegisterDone;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~PaymentMethodForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: Membresia^ membresia;
	private: User^ user;
	private: Membresia^ membresiaGlobal;
	private: int isRegisterDone;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;





	private: System::Windows::Forms::Button^ button2;


	protected:

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Info;
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(434, 199);
			this->panel1->TabIndex = 0;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(221, 130);
			this->button2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(124, 25);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &PaymentMethodForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(62, 128);
			this->button1->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(135, 28);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Aceptar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &PaymentMethodForm::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(182, 77);
			this->textBox2->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(146, 20);
			this->textBox2->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(114, 84);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(28, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"CCV";
			this->label2->Click += gcnew System::EventHandler(this, &PaymentMethodForm::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(59, 32);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(95, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Numero de cuenta";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(182, 32);
			this->textBox1->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(146, 20);
			this->textBox1->TabIndex = 0;
			// 
			// PaymentMethodForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(429, 198);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->Name = L"PaymentMethodForm";
			this->Text = L"PaymentMethodForm";
			this->Load += gcnew System::EventHandler(this, &PaymentMethodForm::PaymentMethodForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void PaymentMethodForm_Load(System::Object^ sender, System::EventArgs^ e) {


	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {


		if ((textBox1->Text == "1234") && (textBox2->Text == "1234")) {

			isRegisterDone = 1;
			this->Close();


		}

		else {
			MessageBox::Show("DATOS incorrectos. Ingrese los datos de nuevo.");
			this->textBox1->Text = "Numero";
			this->textBox2->Text = "CCV";

		}


		/*
			if (flag == 0) {
				MessageBox::Show("Hola Mundo");


			}
			else {
				MessageBox::Show("Adios Mundo");
			}
			*/

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	};
}