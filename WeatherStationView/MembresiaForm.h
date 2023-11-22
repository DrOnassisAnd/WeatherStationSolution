
#include "PaymentMethodForm.h"



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
	/// Resumen de MembresiaForm
	/// </summary>
	public ref class MembresiaForm : public System::Windows::Forms::Form
	{
	public:
		MembresiaForm(Membresia^ memb, User^ User)
		{
			InitializeComponent();
			this->membresia = memb;
			this->user = User;
		}
		MembresiaForm::Membresia^ GetMembresia() {
			return membresia;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MembresiaForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: Membresia^ membresia;
	private: User^ user;
	private: Membresia^ membresiaGlobal;
	private: int isRegisterDone;


	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label13;



	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;

















	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(122, 335);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(164, 63);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Empezar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MembresiaForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(684, 488);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(166, 63);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Adquirir Ecocoins";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MembresiaForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Location = System::Drawing::Point(1163, 578);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(147, 63);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Empezar";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MembresiaForm::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FloralWhite;
			this->label1->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(554, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(264, 71);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Elige tu plan\r\n";
			this->label1->Click += gcnew System::EventHandler(this, &MembresiaForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(64, 178);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(92, 29);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Basico";
			this->label2->Click += gcnew System::EventHandler(this, &MembresiaForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(946, 178);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(117, 29);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Premium";
			this->label3->Click += gcnew System::EventHandler(this, &MembresiaForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(519, 178);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(116, 29);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Estandar";
			this->label4->Click += gcnew System::EventHandler(this, &MembresiaForm::label4_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->pictureBox1->Location = System::Drawing::Point(52, 172);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(386, 271);
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->pictureBox2->Location = System::Drawing::Point(492, 172);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(380, 397);
			this->pictureBox2->TabIndex = 8;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->pictureBox3->Location = System::Drawing::Point(924, 172);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(413, 468);
			this->pictureBox3->TabIndex = 9;
			this->pictureBox3->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FloralWhite;
			this->panel1->Controls->Add(this->label15);
			this->panel1->Controls->Add(this->label14);
			this->panel1->Controls->Add(this->label13);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->pictureBox3);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1419, 748);
			this->panel1->TabIndex = 10;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MembresiaForm::panel1_Paint);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(165, 101);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(121, 50);
			this->label15->TabIndex = 24;
			this->label15->Text = L"GRATIS";
			this->label15->Click += gcnew System::EventHandler(this, &MembresiaForm::label15_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(1012, 101);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(216, 50);
			this->label14->TabIndex = 23;
			this->label14->Text = L"300 ECOCOINS";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(574, 101);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(216, 50);
			this->label13->TabIndex = 19;
			this->label13->Text = L"100 ECOCOINS";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button4->Location = System::Drawing::Point(1220, 647);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(132, 47);
			this->button4->TabIndex = 18;
			this->button4->Text = L"Salir";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MembresiaForm::Salir_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(972, 406);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(338, 26);
			this->label12->TabIndex = 17;
			this->label12->Text = L"Se tendra un Pronóstico del clima";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(972, 323);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(319, 52);
			this->label11->TabIndex = 16;
			this->label11->Text = L"Visualiza una Tabla Estadistica \r\nde los datos más relavantes.\r\n";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(964, 225);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(362, 52);
			this->label10->TabIndex = 15;
			this->label10->Text = L"Visualiza los Datos de Temperatura,\r\nHumedad, Calidad de Aire y CO.\r\n";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(499, 225);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(362, 52);
			this->label9->TabIndex = 14;
			this->label9->Text = L"Visualiza los Datos de Temperatura,\r\nHumedad, Calidad de Aire y CO.\r\n";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(499, 372);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(338, 26);
			this->label8->TabIndex = 13;
			this->label8->Text = L"Se tendra un Pronóstico del clima";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(499, 298);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(319, 52);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Visualiza una Tabla Estadistica \r\nde los datos más relavantes.\r\n";
			this->label7->Click += gcnew System::EventHandler(this, &MembresiaForm::label7_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(66, 243);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(359, 50);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Visualiza los Datos de Temperatura,\r\nHumedad, Calidad de Aire y CO.\r\n";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(970, 488);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(276, 52);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Descarga la base de datos \r\ncompleta en formato .csv.\r\n";
			this->label5->Click += gcnew System::EventHandler(this, &MembresiaForm::label5_Click);
			// 
			// MembresiaForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1392, 706);
			this->Controls->Add(this->panel1);
			this->Name = L"MembresiaForm";
			this->Text = L"MembresiaForm";
			this->Load += gcnew System::EventHandler(this, &MembresiaForm::MembresiaForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MembresiaForm_Load(System::Object^ sender, System::EventArgs^ e) {
		//pictureBox->Image = Image::FromFile("ECOCOIN.png");


	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		if (user->membresia->TipoMembresia == "Basic") {
			MessageBox::Show("Ya eres un usuario " + user->membresia->TipoMembresia);
		}
		else {
			System::Windows::Forms::DialogResult result = MessageBox::Show("¿Estás seguro que deseas continuar?", "Confirmación", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

			if (result == System::Windows::Forms::DialogResult::Yes) {
				membresia = gcnew Membresia("Basic", DateTime::Today.ToString("yyyy-MM-dd"), DateTime::Today.AddYears(90).ToString("yyyy-MM-dd"));
				MessageBox::Show("Ahora eres un usuario Basic");
				this->Close();
			}
		}


		//WeatherStationForm^ mainform = gcnew WeatherStationForm();
		//mainform->Close();



	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		if (user->membresia->TipoMembresia == "Estandar") {
			MessageBox::Show("Ya eres un usuario " + user->membresia->TipoMembresia);
		}
		else {
			if (user->membresia->TipoMembresia == "Premium") {
				System::Windows::Forms::DialogResult result = MessageBox::Show("¿Estás seguro que deseas continuar?", "Confirmación", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
				if (result == System::Windows::Forms::DialogResult::Yes) {
					membresia = gcnew Membresia("Estandar", DateTime::Today.ToString("yyyy-MM-dd"), DateTime::Today.AddYears(1).ToString("yyyy-MM-dd"));
					PaymentMethodForm^ payform = gcnew PaymentMethodForm(isRegisterDone);
					payform->ControlBox = true;
					payform->ShowDialog();
					isRegisterDone = payform->GetBool();
					if (!isRegisterDone) {
						this->Show();
					}
					else {
						membresia = gcnew Membresia("Estandar", DateTime::Today.ToString("yyyy-MM-dd"), DateTime::Today.AddYears(1).ToString("yyyy-MM-dd"));//Parametros de prueba
						MessageBox::Show("Ahora eres un usuario Estandar");
						this->Close();
					}
				}
			}
			else {
				membresia = gcnew Membresia("Estandar", DateTime::Today.ToString("yyyy-MM-dd"), DateTime::Today.AddYears(1).ToString("yyyy-MM-dd"));
				PaymentMethodForm^ payform = gcnew PaymentMethodForm(isRegisterDone);
				payform->ControlBox = true;
				payform->ShowDialog();
				isRegisterDone = payform->GetBool();
				if (!isRegisterDone) {
					this->Show();
				}
				else {
					membresia = gcnew Membresia("Estandar", DateTime::Today.ToString("yyyy-MM-dd"), DateTime::Today.AddYears(1).ToString("yyyy-MM-dd"));//Parametros de prueba
					MessageBox::Show("Ahora eres un usuario Estandar");
					this->Close();
				}
			}
		}


	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {


		if (user->membresia->TipoMembresia == "Premium") {
			MessageBox::Show("Ya eres un usuario " + user->membresia->TipoMembresia);
		}
		else {
			PaymentMethodForm^ payform = gcnew PaymentMethodForm(isRegisterDone);
			payform->ControlBox = true;
			payform->ShowDialog();

			isRegisterDone = payform->GetBool();

			//isRegisterDone: si el registro no fue exitoso (p.e. se salió de la ventana, vuelve a popear WeatherStationForm
			//caso contrario, ya abre el BasicForm
			if (!isRegisterDone) {
				this->Show();
			}
			else {
				membresia = gcnew Membresia("Premium", DateTime::Today.ToString("yyyy-MM-dd"), DateTime::Today.AddYears(1).ToString("yyyy-MM-dd"));//Parametros de prueba
				MessageBox::Show("Ahora eres un usuario Premium");
				this->Close();
			}


		}
	}

	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Salir_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void pictureBox4_LoadCompleted(System::Object^ sender, System::ComponentModel::AsyncCompletedEventArgs^ e) {
		pictureBox1->Image = Image::FromFile("ECOCOIN.png");
	}
private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label15_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
