#pragma once
#include "TriviaForm.h"
#include "PaymentMethodForm.h"
namespace WeatherStationView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace Model;
	//hola mundo AHHHHHHHHHHHHHHHHHHHHHHHHHh

	/// <summary>
	/// Resumen de InstruccionesMembresias
	/// </summary>
	public ref class InstruccionesMembresias : public System::Windows::Forms::Form
	{
	public:
		InstruccionesMembresias(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~InstruccionesMembresias()
		{
			if (components)
			{
				delete components;
			}
		}




	private: int isRegisterDone;
	private: int pointsperDay = 0;

	private: int ecocoins;
	private: double dollars;
	private: const double factor = 0.05; //1 ecocoin vale (factor) dollars


























	private: System::Windows::Forms::Button^ CerrarBtn;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(InstruccionesMembresias::typeid));
			this->CerrarBtn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// CerrarBtn
			// 
			this->CerrarBtn->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			resources->ApplyResources(this->CerrarBtn, L"CerrarBtn");
			this->CerrarBtn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->CerrarBtn->Name = L"CerrarBtn";
			this->CerrarBtn->UseVisualStyleBackColor = false;
			this->CerrarBtn->Click += gcnew System::EventHandler(this, &InstruccionesMembresias::CerrarBtn_Click);
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->BackColor = System::Drawing::SystemColors::Control;
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Name = L"label1";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Control;
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->CerrarBtn);
			this->panel1->Controls->Add(this->label3);
			resources->ApplyResources(this->panel1, L"panel1");
			this->panel1->ForeColor = System::Drawing::SystemColors::Control;
			this->panel1->Name = L"panel1";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::Control;
			resources->ApplyResources(this->pictureBox1, L"pictureBox1");
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->TabStop = false;
			// 
			// label3
			// 
			resources->ApplyResources(this->label3, L"label3");
			this->label3->BackColor = System::Drawing::SystemColors::Control;
			this->label3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Name = L"label3";
			this->label3->Click += gcnew System::EventHandler(this, &InstruccionesMembresias::label3_Click);
			// 
			// InstruccionesMembresias
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->Controls->Add(this->panel1);
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Name = L"InstruccionesMembresias";
			this->Load += gcnew System::EventHandler(this, &InstruccionesMembresias::InstruccionesMembresias_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox1_LoadCompleted(System::Object^ sender, System::ComponentModel::AsyncCompletedEventArgs^ e) {
		//pictureBox1->Image = Image::FromFile("ECOCOIN.png");
	}

	private: System::Void InstruccionesMembresias_Load(System::Object^ sender, System::EventArgs^ e) {
		//pictureBox1->Image = Image::FromFile("ECOCOIN.png");

	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		/*PaymentMethodForm^ payform = gcnew PaymentMethodForm(isRegisterDone);
		payform->ControlBox = true;
		payform->ShowDialog();	
		isRegisterDone = 1;
		*/
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		/*TriviaForm^ triviaForm = gcnew TriviaForm(pointsperDay);
		triviaForm->ShowDialog();
		pointsperDay = triviaForm->GetPoints
		*/
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void CerrarBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}


};
}
