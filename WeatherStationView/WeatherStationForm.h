



#pragma once
#include "RegisterForm.h"
//#include "Config.h"
//#include "MembresiaForm.h"
#include "WeatherStationFormAdmin.h"
//#include "UserMaintenance.h"
//
//#include "BasicForm.h"
namespace WeatherStationView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Model;
	//using namespace Controller;

	/// <summary>
	/// Resumen de WeatherStationForm
	/// </summary>
	public ref class WeatherStationForm : public System::Windows::Forms::Form
	{
	public:

		WeatherStationForm(User^ usuario)
		{
			InitializeComponent();
			this->user = usuario;
		}

		WeatherStationForm::User^ GetUser() {
			return user;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~WeatherStationForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: User^ user;
	private: int isRegisterDone;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::TextBox^ textBox1;


	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;








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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(WeatherStationForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::PowderBlue;
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel1->ForeColor = System::Drawing::Color::AntiqueWhite;
			this->panel1->Location = System::Drawing::Point(387, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(641, 555);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &WeatherStationForm::panel1_Paint);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::PowderBlue;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label9->Location = System::Drawing::Point(40, 23);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(579, 25);
			this->label9->TabIndex = 9;
			this->label9->Text = L"\"La estación meteorológica que conecta tu mundo con el entorno\"";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::PowderBlue;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label6->Location = System::Drawing::Point(276, 262);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(103, 29);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Usuario";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::PowderBlue;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label7->Location = System::Drawing::Point(265, 354);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(124, 25);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Contrasena";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::PowderBlue;
			this->button3->Location = System::Drawing::Point(517, 510);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(112, 33);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Exit";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &WeatherStationForm::button3_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Black;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::PowderBlue;
			this->textBox1->Location = System::Drawing::Point(256, 294);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(153, 34);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"Username";
			this->textBox1->Click += gcnew System::EventHandler(this, &WeatherStationForm::textBox1_Click);
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &WeatherStationForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::Black;
			this->textBox2->ForeColor = System::Drawing::Color::PowderBlue;
			this->textBox2->Location = System::Drawing::Point(257, 382);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(141, 34);
			this->textBox2->TabIndex = 1;
			this->textBox2->Text = L"Password";
			this->textBox2->UseSystemPasswordChar = true;
			this->textBox2->Click += gcnew System::EventHandler(this, &WeatherStationForm::textBox2_Click);
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &WeatherStationForm::textBox2_TextChanged);
			this->textBox2->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &WeatherStationForm::TextBox_KeyDown);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Black;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::PowderBlue;
			this->button2->Location = System::Drawing::Point(200, 454);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(246, 49);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Sign In";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &WeatherStationForm::otherclick);
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::PowderBlue;
			this->label5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label5->Location = System::Drawing::Point(104, 180);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(515, 64);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Inicia sesión en tu cuenta para que puedas \r\ntener acceso a los datos meteorológi"
				L"cos";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Black;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::PowderBlue;
			this->label4->Location = System::Drawing::Point(206, 105);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(260, 46);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Inicia Sesion";
			this->label4->Click += gcnew System::EventHandler(this, &WeatherStationForm::label4_Click_1);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->ForeColor = System::Drawing::Color::Violet;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(387, 555);
			this->panel2->TabIndex = 1;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &WeatherStationForm::panel2_Paint);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::PowderBlue;
			this->label8->Location = System::Drawing::Point(21, 387);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(350, 50);
			this->label8->TabIndex = 8;
			this->label8->Text = L"\"Tu ventana al clima: precision y datos \r\n            en la palma de tu mano.\"\r\n";
			this->label8->Click += gcnew System::EventHandler(this, &WeatherStationForm::label8_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(57, 124);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(276, 245);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::PowderBlue;
			this->button1->Location = System::Drawing::Point(111, 499);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(149, 44);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Register";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &WeatherStationForm::registerbtn);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Black;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::PowderBlue;
			this->label3->Location = System::Drawing::Point(123, 454);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(116, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"No Account\?";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Black;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::PowderBlue;
			this->label2->Location = System::Drawing::Point(179, 62);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(154, 48);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Station";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Black;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::PowderBlue;
			this->label1->Location = System::Drawing::Point(26, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(179, 48);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Weather";
			// 
			// WeatherStationForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1028, 555);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::White;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"WeatherStationForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Sign In to WeatherStation";
			this->Load += gcnew System::EventHandler(this, &WeatherStationForm::WeatherStationForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "Username") {
		textBox1->Text = "";
	}
	if (textBox2->Text == "") {
		textBox2->Text = "Password";
	}
	
}
private: System::Void textBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox2->Text == "Password") {
		textBox2->Text = "";
	}
	if (textBox1->Text == "") {
		textBox1->Text = "Username";
	}
}

private: System::Void otherclick(System::Object^ sender, System::EventArgs^ e) { //log in
	

	SignIn();
	
}


private: System::Void registerbtn(System::Object^ sender, System::EventArgs^ e) {

	
	RegisterForm^ regform = gcnew RegisterForm(isRegisterDone, user);
	regform->ShowDialog();

	isRegisterDone = regform->GetBool();

	//isRegisterDone: si el registro no fue exitoso (p.e. se salió de la ventana, vuelve a popear WeatherStationForm
	//caso contrario, ya abre el BasicForm
	if (!isRegisterDone) {	
		this->Show();
	}
	else {
		user = regform->GetUser();
		this->Hide();
	}


}
private: System::Void WeatherStationForm_Load(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}


private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}

private:System::Void TextBox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyCode == Keys::Enter)
	{
		SignIn();
	}
	else if (e->KeyCode == Keys::Escape) {
		Application::Exit();
		MessageBox::Show("Gracias por utilizar WeatherStation");
	}
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Gracias por utilizar WeatherStation");
	Application::Exit();
}

	   void SignIn() {
		   User^ usercheck = Controller::Controller::QueryUserbyName(textBox1->Text);

		   if ((textBox1->Text == "admin") && (textBox2->Text == "admin")) {
			   this->Hide();
			   WeatherStationFormAdmin^ obj = gcnew WeatherStationFormAdmin();
			   obj->ShowDialog();
			  


			   this->Show();

		   }

		   //
		   else if (usercheck != nullptr) {
			   if (textBox2->Text == usercheck->Password) {
				   MessageBox::Show("Bienvenido " + usercheck->Name);
				   user = usercheck;
				   this->Hide();
			   }
			   else {
				   MessageBox::Show("Contraseña incorrecta para " + usercheck->Name + ". Ingrese los datos de nuevo.");
				   this->textBox1->Text = L"Username";
				   this->textBox2->Text = L"Password";
			   }
		   }
		   else {
			   MessageBox::Show("Usuario o contraseña incorrectos. Ingrese los datos de nuevo.");
			   this->textBox1->Text = L"Username";
			   this->textBox2->Text = L"Password";

		   }
	   }
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
