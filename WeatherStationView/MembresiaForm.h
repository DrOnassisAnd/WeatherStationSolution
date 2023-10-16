
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
		MembresiaForm(Membresia^ memb)
		{
			InitializeComponent();
			this->membresia = memb;
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
			this->button1->Location = System::Drawing::Point(108, 268);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(145, 51);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Empezar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MembresiaForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(510, 379);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(142, 51);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Empezar";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MembresiaForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Location = System::Drawing::Point(946, 447);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(130, 51);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Empezar";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MembresiaForm::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FloralWhite;
			this->label1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(429, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(344, 45);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Elige tu plan Premium\r\n";
			this->label1->Click += gcnew System::EventHandler(this, &MembresiaForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label2->Location = System::Drawing::Point(57, 143);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 25);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Basico";
			this->label2->Click += gcnew System::EventHandler(this, &MembresiaForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label3->Location = System::Drawing::Point(841, 143);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(89, 25);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Premium";
			this->label3->Click += gcnew System::EventHandler(this, &MembresiaForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label4->Location = System::Drawing::Point(461, 143);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(90, 25);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Estandar";
			this->label4->Click += gcnew System::EventHandler(this, &MembresiaForm::label4_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->pictureBox1->Location = System::Drawing::Point(47, 138);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(308, 216);
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->pictureBox2->Location = System::Drawing::Point(437, 138);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(328, 317);
			this->pictureBox2->TabIndex = 8;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->pictureBox3->Location = System::Drawing::Point(822, 138);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(357, 374);
			this->pictureBox3->TabIndex = 9;
			this->pictureBox3->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FloralWhite;
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
			this->panel1->Size = System::Drawing::Size(1245, 579);
			this->panel1->TabIndex = 10;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MembresiaForm::panel1_Paint);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(864, 325);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(278, 22);
			this->label12->TabIndex = 17;
			this->label12->Text = L"Se tendra un Pronóstico del clima";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(864, 259);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(264, 44);
			this->label11->TabIndex = 16;
			this->label11->Text = L"Visualiza una Tabla Estadistica \r\nde los datos más relavantes.\r\n";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(864, 193);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(299, 44);
			this->label10->TabIndex = 15;
			this->label10->Text = L"Visualiza los Datos de Temperatura,\r\nHumedad, Calidad de Aire y CO.\r\n";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(462, 193);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(299, 44);
			this->label9->TabIndex = 14;
			this->label9->Text = L"Visualiza los Datos de Temperatura,\r\nHumedad, Calidad de Aire y CO.\r\n";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(462, 332);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(278, 22);
			this->label8->TabIndex = 13;
			this->label8->Text = L"Se tendra un Pronóstico del clima";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(462, 259);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(264, 44);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Visualiza una Tabla Estadistica \r\nde los datos más relavantes.\r\n";
			this->label7->Click += gcnew System::EventHandler(this, &MembresiaForm::label7_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(58, 195);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(281, 40);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Visualiza los Datos de Temperatura,\r\nHumedad, Calidad de Aire y CO.\r\n";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(863, 390);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(229, 44);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Descarga la base de datos \r\ncompleta en formato .csv.\r\n";
			this->label5->Click += gcnew System::EventHandler(this, &MembresiaForm::label5_Click);
			// 
			// MembresiaForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1237, 617);
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
		
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
    private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
 
	/* String^ Membresia = "Basico";
	user->Membresia = Membresia;
	Controller::Controller::AddUser(user);
	*/
	MessageBox::Show("Ya eres un USUARIO BASIC :)");

	//WeatherStationForm^ mainform = gcnew WeatherStationForm();
	//mainform->Close();
	


}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	//PaymentMethodForm^ pymform = gcnew PaymentMethodForm();
	//pymform->ShowDialog();

	membresia = gcnew Membresia(1, "Estandar", DateTime::Today, DateTime::Today);

	this->Close();

	
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	
	//PaymentMethodForm^ pymform = gcnew PaymentMethodForm();
	//pymform->ShowDialog();

	membresia = gcnew Membresia(1, "Premium", DateTime::Today, DateTime::Today);

	this->Close();

	

}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
