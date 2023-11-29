
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
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button1;

















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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MembresiaForm::typeid));
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
			this->panel2 = (gcnew System::Windows::Forms::Panel());
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			resources->ApplyResources(this->button2, L"button2");
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Name = L"button2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MembresiaForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			resources->ApplyResources(this->button3, L"button3");
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Name = L"button3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MembresiaForm::button3_Click);
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Name = L"label1";
			this->label1->Click += gcnew System::EventHandler(this, &MembresiaForm::label1_Click);
			// 
			// label2
			// 
			resources->ApplyResources(this->label2, L"label2");
			this->label2->BackColor = System::Drawing::SystemColors::Window;
			this->label2->Name = L"label2";
			this->label2->Click += gcnew System::EventHandler(this, &MembresiaForm::label2_Click);
			// 
			// label3
			// 
			resources->ApplyResources(this->label3, L"label3");
			this->label3->BackColor = System::Drawing::SystemColors::Window;
			this->label3->Name = L"label3";
			this->label3->Click += gcnew System::EventHandler(this, &MembresiaForm::label3_Click);
			// 
			// label4
			// 
			resources->ApplyResources(this->label4, L"label4");
			this->label4->BackColor = System::Drawing::SystemColors::Window;
			this->label4->Name = L"label4";
			this->label4->Click += gcnew System::EventHandler(this, &MembresiaForm::label4_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			resources->ApplyResources(this->pictureBox1, L"pictureBox1");
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			resources->ApplyResources(this->pictureBox2, L"pictureBox2");
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::SystemColors::ControlLightLight;
			resources->ApplyResources(this->pictureBox3, L"pictureBox3");
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Control;
			this->panel1->Controls->Add(this->panel2);
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
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->pictureBox3);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->pictureBox2);
			resources->ApplyResources(this->panel1, L"panel1");
			this->panel1->Name = L"panel1";
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MembresiaForm::panel1_Paint);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel2->Controls->Add(this->label1);
			resources->ApplyResources(this->panel2, L"panel2");
			this->panel2->Name = L"panel2";
			// 
			// label15
			// 
			resources->ApplyResources(this->label15, L"label15");
			this->label15->Name = L"label15";
			this->label15->Click += gcnew System::EventHandler(this, &MembresiaForm::label15_Click);
			// 
			// label14
			// 
			resources->ApplyResources(this->label14, L"label14");
			this->label14->Name = L"label14";
			// 
			// label13
			// 
			resources->ApplyResources(this->label13, L"label13");
			this->label13->Name = L"label13";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			resources->ApplyResources(this->button4, L"button4");
			this->button4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button4->Name = L"button4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MembresiaForm::Salir_Click);
			// 
			// label12
			// 
			resources->ApplyResources(this->label12, L"label12");
			this->label12->BackColor = System::Drawing::SystemColors::Window;
			this->label12->Name = L"label12";
			// 
			// label11
			// 
			resources->ApplyResources(this->label11, L"label11");
			this->label11->BackColor = System::Drawing::SystemColors::Window;
			this->label11->Name = L"label11";
			// 
			// label10
			// 
			resources->ApplyResources(this->label10, L"label10");
			this->label10->BackColor = System::Drawing::SystemColors::Window;
			this->label10->Name = L"label10";
			// 
			// label9
			// 
			resources->ApplyResources(this->label9, L"label9");
			this->label9->BackColor = System::Drawing::SystemColors::Window;
			this->label9->Name = L"label9";
			// 
			// label8
			// 
			resources->ApplyResources(this->label8, L"label8");
			this->label8->BackColor = System::Drawing::SystemColors::Window;
			this->label8->Name = L"label8";
			// 
			// label7
			// 
			resources->ApplyResources(this->label7, L"label7");
			this->label7->BackColor = System::Drawing::SystemColors::Window;
			this->label7->Name = L"label7";
			this->label7->Click += gcnew System::EventHandler(this, &MembresiaForm::label7_Click);
			// 
			// label6
			// 
			resources->ApplyResources(this->label6, L"label6");
			this->label6->BackColor = System::Drawing::SystemColors::Window;
			this->label6->Name = L"label6";
			// 
			// label5
			// 
			resources->ApplyResources(this->label5, L"label5");
			this->label5->BackColor = System::Drawing::SystemColors::Window;
			this->label5->Name = L"label5";
			this->label5->Click += gcnew System::EventHandler(this, &MembresiaForm::label5_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			resources->ApplyResources(this->button1, L"button1");
			this->button1->Name = L"button1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MembresiaForm::button1_Click);
			// 
			// MembresiaForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->panel1);
			this->Name = L"MembresiaForm";
			this->Load += gcnew System::EventHandler(this, &MembresiaForm::MembresiaForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MembresiaForm_Load(System::Object^ sender, System::EventArgs^ e) {
		//pictureBox->Image = Image::FromFile("ECOCOIN.png");
		if (user->membresia->TipoMembresia == "Basic") {
			
			label15->Text = "Membresia Actual";
			label13->Text = "100 Ecocoins";
			label14->Text = "300 Ecocoins";

		}
		else if (user->membresia->TipoMembresia == "Estandar") {

			label13->Text = "Membresia Actual";
			label14->Text = "200 Ecocoins";
		}
		else if (user->membresia->TipoMembresia == "Premium") {

			label14->Text = "Membresia Actual";

		}


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
					//PaymentMethodForm^ payform = gcnew PaymentMethodForm(isRegisterDone, 1);
					//payform->ControlBox = true;
					//payform->ShowDialog();
					//isRegisterDone = payform->GetBool();
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
				//membresia = gcnew Membresia("Estandar", DateTime::Today.ToString("yyyy-MM-dd"), DateTime::Today.AddYears(1).ToString("yyyy-MM-dd"));
				//PaymentMethodForm^ payform = gcnew PaymentMethodForm(isRegisterDone, 1);
				//payform->ControlBox = true;
				//payform->ShowDialog();
				//isRegisterDone = payform->GetBool();
				

				if (user->PuntosTotales < 100) {
					MessageBox::Show("No tienes los Ecocoins Necesarios");
					isRegisterDone = 0;
				}
				else {
					isRegisterDone = 1;
					System::Windows::Forms::DialogResult result = MessageBox::Show("¿Estás seguro que deseas continuar?", "Confirmación", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
					if (!isRegisterDone) {
						this->Show();
					}
					else {

						membresia = gcnew Membresia("Estandar", DateTime::Today.ToString("yyyy-MM-dd"), DateTime::Today.AddYears(1).ToString("yyyy-MM-dd"));//Parametros de prueba

						user->PuntosTotales = user->PuntosTotales - 100;
						MessageBox::Show("Ahora eres un usuario Estandar");
						this->Close();
					}



				}

			}
		}


	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {


		if (user->membresia->TipoMembresia == "Premium") {
			MessageBox::Show("Ya eres un usuario " + user->membresia->TipoMembresia);
		}
		else {
			//PaymentMethodForm^ payform = gcnew PaymentMethodForm(isRegisterDone, 1);
			//payform->ControlBox = true;
			//payform->ShowDialog();


			if (user->PuntosTotales < 300) {
				MessageBox::Show("No tienes los Ecocoins Necesarios");
				isRegisterDone = 0;
			}
			else {
				isRegisterDone = 1;
				System::Windows::Forms::DialogResult result = MessageBox::Show("¿Estás seguro que deseas continuar?", "Confirmación", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
				if (!isRegisterDone) {
					this->Show();
				}
				else {

					membresia = gcnew Membresia("Premium", DateTime::Today.ToString("yyyy-MM-dd"), DateTime::Today.AddYears(1).ToString("yyyy-MM-dd"));//Parametros de prueba

					if (user->membresia->TipoMembresia == "Estandar") {
					
						user->PuntosTotales = user->PuntosTotales - 200;
					
					}
					else {
					
						user->PuntosTotales = user->PuntosTotales - 300;
					}
					
					MessageBox::Show("Ahora eres un usuario Premium");
					this->Close();
				}



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
