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
	/// Resumen de RegisterForm
	/// </summary>
	public ref class RegisterForm : public System::Windows::Forms::Form
	{
	public:
		RegisterForm(int isRegisterDone, User^ usuario)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->isRegisterDone = isRegisterDone;
			this->user = usuario;
		}
		int GetBool() {
			return isRegisterDone;
		}
		RegisterForm::User^ GetUser() {
			return user;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~RegisterForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	protected:
	private: User^ user;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TextBox^ txtName;


	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ txtEmail;
	private: int isRegisterDone=0;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ txtPassword;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::CheckBox^ checkBox1;














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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RegisterForm::typeid));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Black;
			this->button2->FlatAppearance->BorderSize = 0;
			resources->ApplyResources(this->button2, L"button2");
			this->button2->Name = L"button2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &RegisterForm::button2_Click);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel4->Controls->Add(this->txtName);
			resources->ApplyResources(this->panel4, L"panel4");
			this->panel4->Name = L"panel4";
			// 
			// txtName
			// 
			this->txtName->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			resources->ApplyResources(this->txtName, L"txtName");
			this->txtName->Name = L"txtName";
			this->txtName->TextChanged += gcnew System::EventHandler(this, &RegisterForm::textBox2_TextChanged);
			this->txtName->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &RegisterForm::txtName_KeyDown);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel3->Controls->Add(this->txtEmail);
			resources->ApplyResources(this->panel3, L"panel3");
			this->panel3->Name = L"panel3";
			// 
			// txtEmail
			// 
			this->txtEmail->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			resources->ApplyResources(this->txtEmail, L"txtEmail");
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->TextChanged += gcnew System::EventHandler(this, &RegisterForm::textBox1_TextChanged);
			this->txtEmail->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &RegisterForm::txtEmail_KeyDown);
			// 
			// label4
			// 
			resources->ApplyResources(this->label4, L"label4");
			this->label4->BackColor = System::Drawing::Color::Snow;
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Name = L"label4";
			this->label4->Click += gcnew System::EventHandler(this, &RegisterForm::label4_Click);
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::Snow;
			resources->ApplyResources(this->label5, L"label5");
			this->label5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label5->Name = L"label5";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel1->Controls->Add(this->txtPassword);
			resources->ApplyResources(this->panel1, L"panel1");
			this->panel1->Name = L"panel1";
			// 
			// txtPassword
			// 
			this->txtPassword->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			resources->ApplyResources(this->txtPassword, L"txtPassword");
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->UseSystemPasswordChar = true;
			this->txtPassword->TextChanged += gcnew System::EventHandler(this, &RegisterForm::textBox3_TextChanged);
			this->txtPassword->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &RegisterForm::txtPassword_KeyDown);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel2->Controls->Add(this->checkBox1);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->panel1);
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label4);
			resources->ApplyResources(this->panel2, L"panel2");
			this->panel2->ForeColor = System::Drawing::SystemColors::Control;
			this->panel2->Name = L"panel2";
			// 
			// checkBox1
			// 
			resources->ApplyResources(this->checkBox1, L"checkBox1");
			this->checkBox1->ForeColor = System::Drawing::Color::Black;
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &RegisterForm::checkBox1_KeyDown);
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			resources->ApplyResources(this->label3, L"label3");
			this->label3->ForeColor = System::Drawing::SystemColors::MenuText;
			this->label3->Name = L"label3";
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			resources->ApplyResources(this->label2, L"label2");
			this->label2->ForeColor = System::Drawing::SystemColors::MenuText;
			this->label2->Name = L"label2";
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			resources->ApplyResources(this->label1, L"label1");
			this->label1->ForeColor = System::Drawing::SystemColors::MenuText;
			this->label1->Name = L"label1";
			// 
			// RegisterForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Controls->Add(this->panel2);
			this->Name = L"RegisterForm";
			this->Load += gcnew System::EventHandler(this, &RegisterForm::RegisterForm_Load);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {


}

private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Register();

}
	void Register() {
		if ((txtEmail->Text != "") && (txtPassword->Text != "") && (txtName->Text != "")) {

			if (checkBox1->Checked) {
				String^ Name = txtName->Text;
				User^ usercheck = Controller::Controller::QueryUserbyName(Name);
				if (usercheck == nullptr) {
					String^ Password = txtPassword->Text;
					String^ Email = txtEmail->Text;
					List<User^>^ users = Controller::Controller::QueryAllUser();
					int lastIdIndex = users->Count;

					User^ usuario = gcnew User();

					if (lastIdIndex == 0) {
						usuario->Id = 1;
					}
					else {
						User^ userLastId = users[lastIdIndex - 1];
						usuario->Id = (userLastId->Id) + 1;
					}

					usuario->Name = Name;
					usuario->Password = Password;
					usuario->Email = Email;

					//Sistema de Puntos
					usuario->PuntosTotales = 0;
					usuario->PuntosDiarios = 0;
					usuario->fechaUltimaActualizacion = DateTime::Today.ToString("yyyy-MM-dd");
					usuario->IdTarjeta = -1; //aun sin tarjeta

					List<int>^ preguntas = gcnew List<int>();
					preguntas->Add(0);
					preguntas->Add(0);
					preguntas->Add(0);
					preguntas->Add(0);
					preguntas->Add(0); //añade las 5 preguntas
					usuario->PreguntasporDia = preguntas;
					//usuario->NumeroDeCuentaUser = 11111;
					//usuario->CCVUSER = 11111;

					Membresia^ membresia = gcnew Membresia("Basic", DateTime::Today.ToString("yyyy-MM-dd"), "2099-12-12");
					Ajustes^ ajustes = gcnew Ajustes("°C", "Formato de 12 horas", "dd/mm/yyyy");
					ajustes->UnidadTemp = Convert::ToChar(176) + "C"; //había un problema si colocaba °, por eso use su ascii
					usuario->membresia = membresia;
					//protección con membresia, parece que en algunos casos no entra (primer bug? :D)
					int i = 0;
					while (usuario->membresia == nullptr) {
						Membresia^ membresia = gcnew Membresia("Basic", DateTime::Today.ToString("yyyy-MM-dd"), "2099-12-12");
						usuario->membresia = membresia;
						i++;
						if (i == 100) {
							MessageBox::Show("Catastrophic Error");
							Application::Exit();
						}
					}
					usuario->ajustes = ajustes;

					Controller::Controller::AddUser(usuario);
					List<int>^ preguntaspordia = gcnew List<int>();
					preguntaspordia->Add(usuario->Id);
					preguntaspordia->AddRange(preguntas);
					Controller::Controller::AddPreguntasporDia(preguntaspordia);
					user = usuario;

					MessageBox::Show("Credenciales registradas. Bienvenido, " + user->Name);
					isRegisterDone = 1;
					this->Close();
				}
				else {
					MessageBox::Show("Ya existe un usuario con este nombre. Intente de nuevo.");
					txtName->Text = "";
					txtEmail->Text = "";
					txtPassword->Text = "";
					checkBox1->Checked = false;
				}


			}
			else {
				MessageBox::Show("Acepte los terminos y condiciones para registrarse");
			}
		}

		else {
			MessageBox::Show("Por Favor complete los datos");
		}
	 }

private: System::Void txtPassword_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyCode == Keys::Enter)
	{
		Register();
	}
}
private: System::Void txtName_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyCode == Keys::Enter)
	{
		Register();
	}
}
private: System::Void txtEmail_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyCode == Keys::Enter)
	{
		Register();
	}
}
private: System::Void checkBox1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyCode == Keys::Enter)
	{
		Register();
	}
}
private: System::Void RegisterForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
