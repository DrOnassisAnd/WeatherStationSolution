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

	private: System::Windows::Forms::BindingNavigator^ bindingNavigator1;
	private: System::Windows::Forms::ToolStripButton^ bindingNavigatorAddNewItem;
	private: System::Windows::Forms::ToolStripLabel^ bindingNavigatorCountItem;
	private: System::Windows::Forms::ToolStripButton^ bindingNavigatorDeleteItem;
	private: System::Windows::Forms::ToolStripButton^ bindingNavigatorMoveFirstItem;
	private: System::Windows::Forms::ToolStripButton^ bindingNavigatorMovePreviousItem;
	private: System::Windows::Forms::ToolStripSeparator^ bindingNavigatorSeparator;
	private: System::Windows::Forms::ToolStripTextBox^ bindingNavigatorPositionItem;
	private: System::Windows::Forms::ToolStripSeparator^ bindingNavigatorSeparator1;
	private: System::Windows::Forms::ToolStripButton^ bindingNavigatorMoveNextItem;
	private: System::Windows::Forms::ToolStripButton^ bindingNavigatorMoveLastItem;
	private: System::Windows::Forms::ToolStripSeparator^ bindingNavigatorSeparator2;
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
			this->components = (gcnew System::ComponentModel::Container());
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
			this->bindingNavigator1 = (gcnew System::Windows::Forms::BindingNavigator(this->components));
			this->bindingNavigatorAddNewItem = (gcnew System::Windows::Forms::ToolStripButton());
			this->bindingNavigatorCountItem = (gcnew System::Windows::Forms::ToolStripLabel());
			this->bindingNavigatorDeleteItem = (gcnew System::Windows::Forms::ToolStripButton());
			this->bindingNavigatorMoveFirstItem = (gcnew System::Windows::Forms::ToolStripButton());
			this->bindingNavigatorMovePreviousItem = (gcnew System::Windows::Forms::ToolStripButton());
			this->bindingNavigatorSeparator = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->bindingNavigatorPositionItem = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->bindingNavigatorSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->bindingNavigatorMoveNextItem = (gcnew System::Windows::Forms::ToolStripButton());
			this->bindingNavigatorMoveLastItem = (gcnew System::Windows::Forms::ToolStripButton());
			this->bindingNavigatorSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingNavigator1))->BeginInit();
			this->bindingNavigator1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Black;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(69, 366);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(291, 38);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Create Account";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &RegisterForm::button2_Click);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Linen;
			this->panel4->Controls->Add(this->txtName);
			this->panel4->Location = System::Drawing::Point(70, 209);
			this->panel4->Margin = System::Windows::Forms::Padding(2);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(290, 38);
			this->panel4->TabIndex = 11;
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(16, 11);
			this->txtName->Margin = System::Windows::Forms::Padding(2);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(258, 20);
			this->txtName->TabIndex = 1;
			this->txtName->TextChanged += gcnew System::EventHandler(this, &RegisterForm::textBox2_TextChanged);
			this->txtName->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &RegisterForm::txtName_KeyDown);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Linen;
			this->panel3->Controls->Add(this->txtEmail);
			this->panel3->Location = System::Drawing::Point(70, 130);
			this->panel3->Margin = System::Windows::Forms::Padding(2);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(290, 38);
			this->panel3->TabIndex = 10;
			// 
			// txtEmail
			// 
			this->txtEmail->Location = System::Drawing::Point(15, 9);
			this->txtEmail->Margin = System::Windows::Forms::Padding(2);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(258, 20);
			this->txtEmail->TabIndex = 0;
			this->txtEmail->TextChanged += gcnew System::EventHandler(this, &RegisterForm::textBox1_TextChanged);
			this->txtEmail->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &RegisterForm::txtEmail_KeyDown);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(149, 29);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(142, 37);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Register";
			this->label4->Click += gcnew System::EventHandler(this, &RegisterForm::label4_Click);
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(67, 71);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(307, 41);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Register your information so that you can create an account and have access to in"
				L"credible meteorological data.";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Linen;
			this->panel1->Controls->Add(this->txtPassword);
			this->panel1->Location = System::Drawing::Point(70, 294);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(290, 38);
			this->panel1->TabIndex = 12;
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(16, 11);
			this->txtPassword->Margin = System::Windows::Forms::Padding(2);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(258, 20);
			this->txtPassword->TabIndex = 1;
			this->txtPassword->UseSystemPasswordChar = true;
			this->txtPassword->TextChanged += gcnew System::EventHandler(this, &RegisterForm::textBox3_TextChanged);
			this->txtPassword->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &RegisterForm::txtPassword_KeyDown);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::Info;
			this->panel2->Controls->Add(this->bindingNavigator1);
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
			this->panel2->ForeColor = System::Drawing::SystemColors::Control;
			this->panel2->Location = System::Drawing::Point(1, -22);
			this->panel2->Margin = System::Windows::Forms::Padding(2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(476, 451);
			this->panel2->TabIndex = 13;
			// 
			// bindingNavigator1
			// 
			this->bindingNavigator1->AddNewItem = this->bindingNavigatorAddNewItem;
			this->bindingNavigator1->CountItem = this->bindingNavigatorCountItem;
			this->bindingNavigator1->DeleteItem = this->bindingNavigatorDeleteItem;
			this->bindingNavigator1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->bindingNavigator1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(11) {
				this->bindingNavigatorMoveFirstItem,
					this->bindingNavigatorMovePreviousItem, this->bindingNavigatorSeparator, this->bindingNavigatorPositionItem, this->bindingNavigatorCountItem,
					this->bindingNavigatorSeparator1, this->bindingNavigatorMoveNextItem, this->bindingNavigatorMoveLastItem, this->bindingNavigatorSeparator2,
					this->bindingNavigatorAddNewItem, this->bindingNavigatorDeleteItem
			});
			this->bindingNavigator1->Location = System::Drawing::Point(0, 0);
			this->bindingNavigator1->MoveFirstItem = this->bindingNavigatorMoveFirstItem;
			this->bindingNavigator1->MoveLastItem = this->bindingNavigatorMoveLastItem;
			this->bindingNavigator1->MoveNextItem = this->bindingNavigatorMoveNextItem;
			this->bindingNavigator1->MovePreviousItem = this->bindingNavigatorMovePreviousItem;
			this->bindingNavigator1->Name = L"bindingNavigator1";
			this->bindingNavigator1->PositionItem = this->bindingNavigatorPositionItem;
			this->bindingNavigator1->Size = System::Drawing::Size(476, 27);
			this->bindingNavigator1->TabIndex = 17;
			this->bindingNavigator1->Text = L"bindingNavigator1";
			// 
			// bindingNavigatorAddNewItem
			// 
			this->bindingNavigatorAddNewItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->bindingNavigatorAddNewItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bindingNavigatorAddNewItem.Image")));
			this->bindingNavigatorAddNewItem->Name = L"bindingNavigatorAddNewItem";
			this->bindingNavigatorAddNewItem->RightToLeftAutoMirrorImage = true;
			this->bindingNavigatorAddNewItem->Size = System::Drawing::Size(24, 24);
			this->bindingNavigatorAddNewItem->Text = L"Agregar nuevo";
			// 
			// bindingNavigatorCountItem
			// 
			this->bindingNavigatorCountItem->Name = L"bindingNavigatorCountItem";
			this->bindingNavigatorCountItem->Size = System::Drawing::Size(37, 24);
			this->bindingNavigatorCountItem->Text = L"de {0}";
			this->bindingNavigatorCountItem->ToolTipText = L"Número total de elementos";
			// 
			// bindingNavigatorDeleteItem
			// 
			this->bindingNavigatorDeleteItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->bindingNavigatorDeleteItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bindingNavigatorDeleteItem.Image")));
			this->bindingNavigatorDeleteItem->Name = L"bindingNavigatorDeleteItem";
			this->bindingNavigatorDeleteItem->RightToLeftAutoMirrorImage = true;
			this->bindingNavigatorDeleteItem->Size = System::Drawing::Size(24, 24);
			this->bindingNavigatorDeleteItem->Text = L"Eliminar";
			// 
			// bindingNavigatorMoveFirstItem
			// 
			this->bindingNavigatorMoveFirstItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->bindingNavigatorMoveFirstItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bindingNavigatorMoveFirstItem.Image")));
			this->bindingNavigatorMoveFirstItem->Name = L"bindingNavigatorMoveFirstItem";
			this->bindingNavigatorMoveFirstItem->RightToLeftAutoMirrorImage = true;
			this->bindingNavigatorMoveFirstItem->Size = System::Drawing::Size(24, 24);
			this->bindingNavigatorMoveFirstItem->Text = L"Mover primero";
			// 
			// bindingNavigatorMovePreviousItem
			// 
			this->bindingNavigatorMovePreviousItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->bindingNavigatorMovePreviousItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bindingNavigatorMovePreviousItem.Image")));
			this->bindingNavigatorMovePreviousItem->Name = L"bindingNavigatorMovePreviousItem";
			this->bindingNavigatorMovePreviousItem->RightToLeftAutoMirrorImage = true;
			this->bindingNavigatorMovePreviousItem->Size = System::Drawing::Size(24, 24);
			this->bindingNavigatorMovePreviousItem->Text = L"Mover anterior";
			// 
			// bindingNavigatorSeparator
			// 
			this->bindingNavigatorSeparator->Name = L"bindingNavigatorSeparator";
			this->bindingNavigatorSeparator->Size = System::Drawing::Size(6, 27);
			// 
			// bindingNavigatorPositionItem
			// 
			this->bindingNavigatorPositionItem->AccessibleName = L"Posición";
			this->bindingNavigatorPositionItem->AutoSize = false;
			this->bindingNavigatorPositionItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->bindingNavigatorPositionItem->Name = L"bindingNavigatorPositionItem";
			this->bindingNavigatorPositionItem->Size = System::Drawing::Size(38, 23);
			this->bindingNavigatorPositionItem->Text = L"0";
			this->bindingNavigatorPositionItem->ToolTipText = L"Posición actual";
			// 
			// bindingNavigatorSeparator1
			// 
			this->bindingNavigatorSeparator1->Name = L"bindingNavigatorSeparator1";
			this->bindingNavigatorSeparator1->Size = System::Drawing::Size(6, 27);
			// 
			// bindingNavigatorMoveNextItem
			// 
			this->bindingNavigatorMoveNextItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->bindingNavigatorMoveNextItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bindingNavigatorMoveNextItem.Image")));
			this->bindingNavigatorMoveNextItem->Name = L"bindingNavigatorMoveNextItem";
			this->bindingNavigatorMoveNextItem->RightToLeftAutoMirrorImage = true;
			this->bindingNavigatorMoveNextItem->Size = System::Drawing::Size(24, 24);
			this->bindingNavigatorMoveNextItem->Text = L"Mover siguiente";
			// 
			// bindingNavigatorMoveLastItem
			// 
			this->bindingNavigatorMoveLastItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->bindingNavigatorMoveLastItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bindingNavigatorMoveLastItem.Image")));
			this->bindingNavigatorMoveLastItem->Name = L"bindingNavigatorMoveLastItem";
			this->bindingNavigatorMoveLastItem->RightToLeftAutoMirrorImage = true;
			this->bindingNavigatorMoveLastItem->Size = System::Drawing::Size(24, 24);
			this->bindingNavigatorMoveLastItem->Text = L"Mover último";
			// 
			// bindingNavigatorSeparator2
			// 
			this->bindingNavigatorSeparator2->Name = L"bindingNavigatorSeparator2";
			this->bindingNavigatorSeparator2->Size = System::Drawing::Size(6, 27);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->ForeColor = System::Drawing::Color::Black;
			this->checkBox1->Location = System::Drawing::Point(75, 346);
			this->checkBox1->Margin = System::Windows::Forms::Padding(2);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(171, 17);
			this->checkBox1->TabIndex = 16;
			this->checkBox1->Text = L"Agree to Terms and Conditions";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &RegisterForm::checkBox1_KeyDown);
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(72, 106);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(197, 23);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Insert an Email:";
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(68, 270);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(197, 23);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Create a Password:";
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(67, 184);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(197, 23);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Create a Username:";
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(470, 425);
			this->Controls->Add(this->panel2);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"RegisterForm";
			this->Text = L"RegisterForm";
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingNavigator1))->EndInit();
			this->bindingNavigator1->ResumeLayout(false);
			this->bindingNavigator1->PerformLayout();
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
};
}
