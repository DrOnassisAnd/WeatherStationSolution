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

		PaymentMethodForm(int isRegisterDone, double D, User^ user)
		{
			InitializeComponent();
			this->isRegisterDone = isRegisterDone;
			this->soles = D;
			this->user = user;
		}
		PaymentMethodForm::Membresia^ GetMembresia() {
			return membresia;
		}

		int GetBool() {
			return isRegisterDone;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
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
	private: double soles;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ NumeroCuentaText;
	private: System::Windows::Forms::TextBox^ CCVtext;


	private: System::Windows::Forms::Button^ button1;





	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label3;












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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->CCVtext = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->NumeroCuentaText = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Info;
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->CCVtext);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->NumeroCuentaText);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(404, 245);
			this->panel1->TabIndex = 0;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(33, 26);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(286, 13);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Ingresa tu número de cuenta y CCV para completar el pago";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(201, 158);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(124, 25);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &PaymentMethodForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(41, 156);
			this->button1->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(135, 28);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Aceptar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &PaymentMethodForm::button1_Click);
			// 
			// CCVtext
			// 
			this->CCVtext->Location = System::Drawing::Point(153, 104);
			this->CCVtext->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->CCVtext->Name = L"CCVtext";
			this->CCVtext->Size = System::Drawing::Size(146, 20);
			this->CCVtext->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(85, 112);
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
			this->label1->Location = System::Drawing::Point(30, 68);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(95, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Numero de cuenta";
			// 
			// NumeroCuentaText
			// 
			this->NumeroCuentaText->Location = System::Drawing::Point(153, 68);
			this->NumeroCuentaText->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->NumeroCuentaText->Name = L"NumeroCuentaText";
			this->NumeroCuentaText->Size = System::Drawing::Size(146, 20);
			this->NumeroCuentaText->TabIndex = 0;
			// 
			// PaymentMethodForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(352, 211);
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

		//logica de login

		if (!String::IsNullOrEmpty(NumeroCuentaText->Text) && !String::IsNullOrEmpty(CCVtext->Text)) {
			// Ambos campos contienen texto válido

			// Asignar los valores de los campos a las propiedades de usuario si es necesario
			// user->numerodecuentauser = 
			// user->ccvuser = int32::parse(->text);

				int numerodecuenta= Int32::Parse(NumeroCuentaText->Text);
				List<Tarjetas^>^ listatarjeta = Controller::Controller::QueryTarjetasData();
				Tarjetas^ TarjetasCheck = Controller::Controller::QueryTarjetaByNumeroCuenta(numerodecuenta);

				if (CCVtext->Text == (TarjetasCheck->CCVTarjeta).ToString()) {
					if (TarjetasCheck->Disponible == 1) {
						

						if((TarjetasCheck->Saldo - soles)>0){

							user->IdTarjeta = TarjetasCheck->id;
							TarjetasCheck->Saldo -= soles;
							TarjetasCheck->Disponible = 0;
							isRegisterDone = 1;
						}
						else {
							MessageBox::Show("Saldo Insuficiente");
						}

					}
					else if (TarjetasCheck->id == user->IdTarjeta) {

						if ((TarjetasCheck->Saldo - soles) > 0) {

							TarjetasCheck->Saldo -= soles;
							isRegisterDone = 1;
				
						}
						else {
							MessageBox::Show("Saldo Insuficiente");
						}
						
					}
					else {
						MessageBox::Show("Tarjeta No disponible");
					}
				}
				else {
					MessageBox::Show("Numero de cuenta incorrecta ingrese los datos de nuevo.");
				}

			
			Controller::Controller::UpdateUser(user);
			Controller::Controller::UpdateTarjetas(TarjetasCheck);
			this->Close();
		}
		else {
			MessageBox::Show("Por favor, ingrese datos válidos en ambos campos.");
		}

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};
}