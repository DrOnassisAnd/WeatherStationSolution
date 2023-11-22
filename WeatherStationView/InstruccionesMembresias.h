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



	private: System::Windows::Forms::Label^ label3;
	private: int isRegisterDone;
	private: int pointsperDay = 0;

	private: int ecocoins;
	private: double dollars;
	private: const double factor = 0.05; //1 ecocoin vale (factor) dollars


























	private: System::Windows::Forms::Button^ CerrarBtn;

	private: System::Windows::Forms::Label^ label1;









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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->CerrarBtn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label3->Location = System::Drawing::Point(14, 48);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(373, 39);
			this->label3->TabIndex = 3;
			this->label3->Text = resources->GetString(L"label3.Text");
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label3->Click += gcnew System::EventHandler(this, &InstruccionesMembresias::label3_Click);
			// 
			// CerrarBtn
			// 
			this->CerrarBtn->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->CerrarBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CerrarBtn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->CerrarBtn->Location = System::Drawing::Point(276, 99);
			this->CerrarBtn->Margin = System::Windows::Forms::Padding(2);
			this->CerrarBtn->Name = L"CerrarBtn";
			this->CerrarBtn->Size = System::Drawing::Size(111, 41);
			this->CerrarBtn->TabIndex = 50;
			this->CerrarBtn->Text = L"Salir";
			this->CerrarBtn->UseVisualStyleBackColor = false;
			this->CerrarBtn->Click += gcnew System::EventHandler(this, &InstruccionesMembresias::CerrarBtn_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(40, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(123, 13);
			this->label1->TabIndex = 52;
			this->label1->Text = L"¿Qué son los EcoCoins\?";
			// 
			// InstruccionesMembresias
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(395, 147);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->CerrarBtn);
			this->Controls->Add(this->label3);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"InstruccionesMembresias";
			this->Text = L"InstruccionesMembresias";
			this->Load += gcnew System::EventHandler(this, &InstruccionesMembresias::InstruccionesMembresias_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

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
