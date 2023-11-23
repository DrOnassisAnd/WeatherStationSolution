



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
			this->panel1->BackColor = System::Drawing::SystemColors::Control;
			resources->ApplyResources(this->panel1, L"panel1");
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->ForeColor = System::Drawing::Color::AntiqueWhite;
			this->panel1->Name = L"panel1";
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &WeatherStationForm::panel1_Paint);
			// 
			// label9
			// 
			resources->ApplyResources(this->label9, L"label9");
			this->label9->BackColor = System::Drawing::SystemColors::Control;
			this->label9->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label9->Name = L"label9";
			// 
			// label6
			// 
			resources->ApplyResources(this->label6, L"label6");
			this->label6->BackColor = System::Drawing::SystemColors::Control;
			this->label6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label6->Name = L"label6";
			// 
			// label7
			// 
			resources->ApplyResources(this->label7, L"label7");
			this->label7->BackColor = System::Drawing::SystemColors::Control;
			this->label7->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label7->Name = L"label7";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button3->FlatAppearance->BorderSize = 0;
			resources->ApplyResources(this->button3, L"button3");
			this->button3->ForeColor = System::Drawing::SystemColors::Control;
			this->button3->Name = L"button3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &WeatherStationForm::button3_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Black;
			resources->ApplyResources(this->textBox1, L"textBox1");
			this->textBox1->ForeColor = System::Drawing::SystemColors::Control;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Click += gcnew System::EventHandler(this, &WeatherStationForm::textBox1_Click);
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &WeatherStationForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::Black;
			resources->ApplyResources(this->textBox2, L"textBox2");
			this->textBox2->ForeColor = System::Drawing::SystemColors::Control;
			this->textBox2->Name = L"textBox2";
			this->textBox2->UseSystemPasswordChar = true;
			this->textBox2->Click += gcnew System::EventHandler(this, &WeatherStationForm::textBox2_Click);
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &WeatherStationForm::textBox2_TextChanged);
			this->textBox2->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &WeatherStationForm::TextBox_KeyDown);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Black;
			this->button2->FlatAppearance->BorderSize = 0;
			resources->ApplyResources(this->button2, L"button2");
			this->button2->ForeColor = System::Drawing::SystemColors::Control;
			this->button2->Name = L"button2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &WeatherStationForm::otherclick);
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::SystemColors::Control;
			resources->ApplyResources(this->label5, L"label5");
			this->label5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label5->Name = L"label5";
			// 
			// label4
			// 
			resources->ApplyResources(this->label4, L"label4");
			this->label4->BackColor = System::Drawing::SystemColors::Control;
			this->label4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Name = L"label4";
			this->label4->Click += gcnew System::EventHandler(this, &WeatherStationForm::label4_Click_1);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::Desktop;
			resources->ApplyResources(this->panel2, L"panel2");
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label1);
			this->panel2->ForeColor = System::Drawing::Color::Violet;
			this->panel2->Name = L"panel2";
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &WeatherStationForm::panel2_Paint);
			// 
			// label8
			// 
			resources->ApplyResources(this->label8, L"label8");
			this->label8->ForeColor = System::Drawing::SystemColors::Control;
			this->label8->Name = L"label8";
			this->label8->Click += gcnew System::EventHandler(this, &WeatherStationForm::label8_Click);
			// 
			// pictureBox1
			// 
			resources->ApplyResources(this->pictureBox1, L"pictureBox1");
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->FlatAppearance->BorderSize = 0;
			resources->ApplyResources(this->button1, L"button1");
			this->button1->ForeColor = System::Drawing::SystemColors::Control;
			this->button1->Name = L"button1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &WeatherStationForm::registerbtn);
			// 
			// label3
			// 
			resources->ApplyResources(this->label3, L"label3");
			this->label3->BackColor = System::Drawing::Color::Black;
			this->label3->ForeColor = System::Drawing::SystemColors::Control;
			this->label3->Name = L"label3";
			// 
			// label2
			// 
			resources->ApplyResources(this->label2, L"label2");
			this->label2->BackColor = System::Drawing::Color::Black;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label2->ForeColor = System::Drawing::SystemColors::Control;
			this->label2->Name = L"label2";
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->BackColor = System::Drawing::Color::Black;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Name = L"label1";
			// 
			// WeatherStationForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->ForeColor = System::Drawing::Color::White;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"WeatherStationForm";
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
