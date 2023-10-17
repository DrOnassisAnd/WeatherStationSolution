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
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ textBox1;


	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button3;








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
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Info;
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel1->Location = System::Drawing::Point(350, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(560, 555);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &WeatherStationForm::panel1_Paint);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(439, 515);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(109, 28);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Exit";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &WeatherStationForm::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Black;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(50, 421);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(437, 59);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Sign In";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &WeatherStationForm::otherclick);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Linen;
			this->panel4->Controls->Add(this->label7);
			this->panel4->Controls->Add(this->textBox2);
			this->panel4->Location = System::Drawing::Point(50, 320);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(435, 79);
			this->panel4->TabIndex = 6;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(13, 16);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(53, 13);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Password";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(48, 36);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(369, 20);
			this->textBox2->TabIndex = 1;
			this->textBox2->Text = L"Password";
			this->textBox2->UseSystemPasswordChar = true;
			this->textBox2->Click += gcnew System::EventHandler(this, &WeatherStationForm::textBox2_Click);
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &WeatherStationForm::textBox2_TextChanged);
			this->textBox2->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &WeatherStationForm::TextBox_KeyDown);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Linen;
			this->panel3->Controls->Add(this->label6);
			this->panel3->Controls->Add(this->textBox1);
			this->panel3->Location = System::Drawing::Point(50, 224);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(435, 74);
			this->panel3->TabIndex = 5;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(13, 8);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(68, 13);
			this->label6->TabIndex = 1;
			this->label6->Text = L"USERNAME";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(48, 39);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(369, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"Username";
			this->textBox1->Click += gcnew System::EventHandler(this, &WeatherStationForm::textBox1_Click);
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &WeatherStationForm::textBox1_TextChanged);
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(37, 169);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(515, 64);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Sign in to your account so you can have access to the meteorological data";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(184, 101);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(123, 37);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Sign In";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::Info;
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(350, 555);
			this->panel2->TabIndex = 1;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &WeatherStationForm::panel2_Paint);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(26, 169);
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
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(94, 483);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(133, 44);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Register";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &WeatherStationForm::registerbtn);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(102, 437);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"No Account\?";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(132, 101);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(124, 37);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Station";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(27, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(145, 37);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Weather";
			// 
			// WeatherStationForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(910, 555);
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
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
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
	}
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
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
};
}
