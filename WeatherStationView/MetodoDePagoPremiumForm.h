#pragma once

#include "UserPremiumForm.h"
namespace WeatherStationView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MetodoDePagoPremiumForm
	/// </summary>
	public ref class MetodoDePagoPremiumForm : public System::Windows::Forms::Form
	{
	public:
		MetodoDePagoPremiumForm(void)
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
		~MetodoDePagoPremiumForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(210, 197);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Aceptar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MetodoDePagoPremiumForm::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(242, 79);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 8;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(75, 79);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(34, 16);
			this->label2->TabIndex = 7;
			this->label2->Text = L"CCV";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(75, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(117, 16);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Numero de cuenta";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(242, 49);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 5;
			// 
			// MetodoDePagoPremiumForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Info;
			this->ClientSize = System::Drawing::Size(416, 269);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MetodoDePagoPremiumForm";
			this->Text = L"MetodoDePagoPremiumForm";
			this->Load += gcnew System::EventHandler(this, &MetodoDePagoPremiumForm::MetodoDePagoPremiumForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		UserPremiumForm obj;
		obj.ShowDialog();
	}
private: System::Void MetodoDePagoPremiumForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
