#pragma once

#include "Config.h"
#include "WeatherStationForm.h"
#include "MembresiaForm.h"
#include "SensorsReport.h"

namespace WeatherStationView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace System::IO::Ports;
	using namespace Model;
	/// <summary>
	/// Resumen de BasicForm
	/// </summary>
	public ref class BasicForm : public System::Windows::Forms::Form
	{
	public:
		BasicForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			this->StringDateTime;
			this->selectedDateTime;
			this->basicForm;
			this->IdSensor="1";
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~BasicForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: User^ user;
	private: Ajustes^ config;
	private: Membresia^ membresiaGlobal;
	private: BasicForm^ basicForm;
	private: String^ IdSensor;

	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::DateTimePicker^ dtpWeatherStationBasic;
	private: String^ StringDateTime = "";
	private: DateTime selectedDateTime = DateTime(2020, 11, 20, 16, 52, 0);

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::TextBox^ textBox1;




	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;



	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Timer^ timer2;
	private: System::Windows::Forms::Label^ label10;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dtpWeatherStationBasic = (gcnew System::Windows::Forms::DateTimePicker());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Info;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(31, 127);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Lugar";
			this->label1->Click += gcnew System::EventHandler(this, &BasicForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::Info;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(602, 285);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Temperatura";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::Info;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(602, 361);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(79, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Humedad";
			this->label3->Click += gcnew System::EventHandler(this, &BasicForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::Info;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(602, 436);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(119, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Calidad del Aire";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(1015, 19);
			this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(212, 69);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Ajustes";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &BasicForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(1030, 651);
			this->button2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(174, 52);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Log Out";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &BasicForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Location = System::Drawing::Point(1015, 135);
			this->button3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(212, 61);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Membresía";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &BasicForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button4->Location = System::Drawing::Point(1015, 251);
			this->button4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(212, 62);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Estadística";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &BasicForm::button4_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Info;
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->textBox5);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->textBox4);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->dtpWeatherStationBasic);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->comboBox1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1240, 717);
			this->panel1->TabIndex = 8;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(668, 24);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(177, 64);
			this->label10->TabIndex = 23;
			this->label10->Text = L"label10";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(781, 512);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(110, 26);
			this->textBox5->TabIndex = 22;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &BasicForm::textBox5_TextChanged);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::SystemColors::Info;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(602, 511);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(139, 20);
			this->label12->TabIndex = 21;
			this->label12->Text = L"Concentracion CO";
			this->label12->Click += gcnew System::EventHandler(this, &BasicForm::label12_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(106, 20);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(51, 20);
			this->label9->TabIndex = 17;
			this->label9->Text = L"label9";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(46, 20);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(51, 20);
			this->label8->TabIndex = 16;
			this->label8->Text = L"label8";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(781, 458);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(110, 26);
			this->textBox4->TabIndex = 14;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(781, 392);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(110, 26);
			this->textBox3->TabIndex = 13;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(781, 295);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(110, 26);
			this->textBox2->TabIndex = 12;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(781, 211);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(110, 26);
			this->textBox1->TabIndex = 10;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(602, 211);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(44, 20);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Hora";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(313, 19);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(365, 64);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Weather Station";
			this->label6->Click += gcnew System::EventHandler(this, &BasicForm::label6_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(434, 122);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(54, 20);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Fecha";
			// 
			// dtpWeatherStationBasic
			// 
			this->dtpWeatherStationBasic->CalendarFont = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dtpWeatherStationBasic->Location = System::Drawing::Point(542, 122);
			this->dtpWeatherStationBasic->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->dtpWeatherStationBasic->Name = L"dtpWeatherStationBasic";
			this->dtpWeatherStationBasic->Size = System::Drawing::Size(349, 26);
			this->dtpWeatherStationBasic->TabIndex = 4;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(13, 187);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(516, 361);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &BasicForm::pictureBox1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"FACI", L"CIA", L"BIBLIOTECA CENTRAL", L"TINKUY" });
			this->comboBox1->Location = System::Drawing::Point(177, 127);
			this->comboBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(180, 30);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &BasicForm::comboBox1_SelectedIndexChanged);
			// 
			// timer1
			// 
			this->timer1->Interval = 60000;
			this->timer1->Tick += gcnew System::EventHandler(this, &BasicForm::timer_tick);
			// 
			// timer2
			// 
			this->timer2->Interval = 1000;
			this->timer2->Tick += gcnew System::EventHandler(this, &BasicForm::Timer2_Tick);
			// 
			// BasicForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1240, 717);
			this->ControlBox = false;
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"BasicForm";
			this->Text = L"BasicForm";
			this->Load += gcnew System::EventHandler(this, &BasicForm::BasicForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void BasicForm_Load(System::Object^ sender, System::EventArgs^ e) {
		//INICIO 
		IdSensor == "1";	

		
		//se abre el formulario de registro
		WeatherStationForm^ wcform = gcnew WeatherStationForm(user);
		wcform->ControlBox = false;
		wcform->ShowDialog();

		//se obtiene la clase user
		user = wcform->GetUser();
		config = user->ajustes;

		
		
		//Bienvenida al usuario
		this->label8->Text = "Usuario";
		this->label9->Text = user->Name;
		this->label10->Text = user->membresia->TipoMembresia;

		membresiaGlobal = user->membresia;
		//
		this->comboBox1->SelectedIndex = 1; //CIA

		
		if (user->ajustes->FormatoHoras == "Formato de 12 horas") {
			textBox1->Text = DateTime::Now.ToString("hh:mm:ss tt");
		}
		else if (user->ajustes->FormatoHoras == "Formato de 24 horas") {
			textBox1->Text = DateTime::Now.ToString("HH:mm:ss");
		}
		else {
			MessageBox::Show("Al otro ciclo sera");
		}
		//Ajustes
		//Dato Prueba
		//TransmisionDataArduino();
		//timer
		timer1->Start();
		timer2->Start();

		//SerialPort^ serialPort = gcnew SerialPort("COM3", 9600, Parity::None, 8, StopBits::One); // Reemplaza "COMX" con el puerto COM al que está conectado tu Arduino
		//serialPort->Open(); // Abre el puerto serie

		
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

		if (user->membresia->TipoMembresia == "Basic") {
			MessageBox::Show("Suscribete a una Membresia para poder usar esta opción");
			MembresiaForm^ membform = gcnew MembresiaForm(membresiaGlobal, user);
			membform->ControlBox = false;
			membform->ShowDialog();
			membresiaGlobal = membform->GetMembresia();
			RefreshMembresia();
		}
		else{
			SensorsReport^ obj = gcnew SensorsReport(user);
			obj->ControlBox = false;
			obj->ShowDialog();
		}
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	MembresiaForm^ membform = gcnew MembresiaForm(membresiaGlobal, user);
	membform->ControlBox = false;
	membform->ShowDialog();

	membresiaGlobal = membform->GetMembresia();

	RefreshMembresia();

}

	   void RefreshMembresia() {
		   user->membresia = membresiaGlobal;
		   this->label10->Text = user->membresia->TipoMembresia;
		   Controller::Controller::UpdateUser(user);
		}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) { //log out
	timer1->Stop();
	timer2->Stop();
	this->Hide();
	
	basicForm = gcnew BasicForm();
	basicForm->Show();
	
}

private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if ((comboBox1->Text == "CIA")) {
		pictureBox1->Image = Image::FromFile("CIA.jpeg");
		IdSensor = "1";
		
	}
	else if ((comboBox1->Text == "FACI")) {

		pictureBox1->Image = Image::FromFile("FACI.jpg");
		IdSensor = "2";
	}
	else if ((comboBox1->Text == "TINKUY")) {

		pictureBox1->Image = Image::FromFile("TINKUY.jpg");
		IdSensor = "3";
	}
	else if ((comboBox1->Text == "BIBLIOTECA CENTRAL")) {

		pictureBox1->Image = Image::FromFile("BIBLIOTECA CENTRAL.jpg");
		IdSensor = "4";
	}
	else if ((comboBox1->Text == "")) {
		pictureBox1->Image = Image::FromFile("LogoPrueba.jpg");
	}
	

}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) { //Ajustes
	
	Config^ confform = gcnew Config(config);
	confform->ControlBox = false;
	confform->ShowDialog();

	config = confform->GetConfig();

	ReloadConfig();
}
	   void ReloadConfig() {
		   user->ajustes = config;
		   Controller::Controller::UpdateUser(user);
	   }


private: System::Void Mostrar_Click(System::Object^ sender, System::EventArgs^ e) {
	//int IdMedicion = 0;
	//String^ IdSensor = "";
	//int day   = selectedDateTime.Day;
	//int month = selectedDateTime.Month;
	//int year  = selectedDateTime.Year;
	//
	//if ((day==5)&&(month==10)&&(year==2023)) {
	//	IdMedicion = 1;
	//	IdSensor = "1";
	//}
	//else if ((day == 4) && (month == 10) && (year == 2023)) {
	//	IdMedicion = 2;
	//	IdSensor = "1";
	//}
	//else if ((day == 3) && (month == 10) && (year == 2023)) {
	//	IdMedicion = 3;
	//	IdSensor = "1";
	//}
	//else if ((day == 2) && (month == 10) && (year == 2023)) {
	//	IdMedicion = 4;
	//	IdSensor = "2";
	//}
	//else if ((day == 1) && (month == 10) && (year == 2023)) {
	//	IdMedicion = 5;
	//	IdSensor = "2";
	//}
	//else if ((day == 30) && (month == 9) && (year == 2023)) {
	//	IdMedicion = 6;
	//	IdSensor = "2";
	//}
	//else if ((day == 29) && (month == 9) && (year == 2023)) {
	//	IdMedicion = 7;
	//	IdSensor = "3";
	//}
	//else if ((day == 28) && (month == 9) && (year == 2023)) {
	//	IdMedicion = 8;
	//	IdSensor = "3";
	//}
	//else if ((day == 27) && (month == 9) && (year == 2023)) {
	//	IdMedicion = 9;
	//	IdSensor = "3";
	//}
	//else if ((day == 26) && (month == 9) && (year == 2023)) {
	//	IdMedicion = 10;
	//	IdSensor = "3";
	//}
	//else if ((day == 25) && (month == 9) && (year == 2023)) {
	//	IdMedicion = 11;
	//	IdSensor = "3";
	//}
	//else {
	//	IdMedicion = 10;
	//	IdSensor = "3";
	//}
	//SensorTemperaturaHumedad^ sTempHum = Controller::Controller::QueryTHbyIds(IdMedicion, IdSensor);
	////Se muestra el valor de temperatura
	//Double DoubleTemp = sTempHum->Temperatura;
	//textBox2->Text = DoubleTemp.ToString();
	////Se muestra el valor de  humedad
	//int IntHum = sTempHum->Humedad;
	//textBox3->Text = IntHum.ToString();
	//SensorCO^ sCO = Controller::Controller::QueryCObyIds(IdMedicion, IdSensor);
	////Se muestra el nivel de CO 
	//int nivelCO = sCO->NivelCO;
	//textBox4->Text = "" + nivelCO;

	//double maxTemp    = 30;
	//int    maxNivelCO = 450;
	//int    maxHum     = 90;

	//if ((DoubleTemp>=maxTemp)&&(IntHum<maxHum)&&(nivelCO<maxNivelCO)) {
	//	MessageBox::Show("La temperatura es alta");
	//}
	//else if ((DoubleTemp >= maxTemp) && (IntHum>=maxHum) && (nivelCO < maxNivelCO)) {
	//	MessageBox::Show("Hay temperatura y humedades altas ");
	//}
	//else if ((DoubleTemp >= maxTemp) && (IntHum<maxHum) && (nivelCO>=maxNivelCO)) {
	//	MessageBox::Show("Hay temperatura y niveles de CO altos ");
	//}
	//else if ((DoubleTemp >= maxTemp) && (IntHum>=maxHum) && (nivelCO >= maxNivelCO)) {
	//	MessageBox::Show("La temperatura, la humedad y el Nivel de CO son altos");
	//}
	//else if ((DoubleTemp < maxTemp) && (IntHum <maxHum) && (nivelCO >= maxNivelCO)) {
	//	MessageBox::Show("Presencia de niveles altos de CO");
	//}
	//else if ((DoubleTemp < maxTemp) && (IntHum >= maxHum) && (nivelCO >= maxNivelCO)) {
	//	MessageBox::Show("Presencia de niveles altos de CO y humedad altos");
	//}
}


	   void TransmisionDataArduino(){

		   /* 
		   8-11 23:44 intentando explicar posible implementacion a datos simultaneos para cuatro ubi geos
		   */

		   //Recopilacion de datos de ARDUINO 1 ("CIA")

		   //Recopilando informacion de Sensado del  ARDUINO 1 CIA
		   Controller::Controller::SendFlag();
		   String^ data = Controller::Controller::SendSensorsData();
		   /////Asignacion de Valores de los sensados DESERIALIZACION
		   IdSensor = data->Substring(0, 1);

		   String^ temperatura_cia = data->Substring(2, 2);
		   int temperaturaint = Int32::Parse(temperatura_cia);

		   String^ humedad_cia = data->Substring(4, 3);
		   int humedadint = Int32::Parse(humedad_cia);

		   String^ co_cia = data->Substring(7, 3);
		   int coint = Int32::Parse(co_cia);

		   String^ calidadAire_cia = data->Substring(10, 3);
		   int calidadAireint = Int32::Parse(calidadAire_cia);

		   Ambiente^ ambiente = gcnew Ambiente();
		   SensorTemperaturaHumedad^ TH = gcnew SensorTemperaturaHumedad(1, temperaturaint, "°C", humedadint);
		   SensorCO^ CO = gcnew SensorCO(1, coint);
		   SensorCalidadAire^ airq = gcnew SensorCalidadAire(1, calidadAireint);

		   List<Sensor^>^ sensorList = gcnew List<Sensor^>();
		   sensorList->Add(TH);
		   sensorList->Add(CO);
		   sensorList->Add(airq);

		   ambiente->DataBase = sensorList;

		   // CAMBIO DE UBICACION GEOGRAFICA

		   if ((IdSensor == "1")) {
			   ambiente->UbicacionGeografica = "CIA";
		   }
		   else if (((IdSensor == "2"))) {
			   ambiente->UbicacionGeografica = "FACI";
		   }
		   else if (((IdSensor == "3"))) {
			   ambiente->UbicacionGeografica = "TINKUY";
		   }
		   else if (((IdSensor == "4"))) {
			   ambiente->UbicacionGeografica = "BIBLIOTECA CENTRAL";
		   }


		   ambiente->TiempoMedicion = DateTime::Now.ToString("HH:mm:ss");
		   ambiente->FechaMedicion = DateTime::Now.ToString("yyyy-MM-dd");
		   List<Ambiente^>^ sensorData = Controller::Controller::QueryAmbienteData();
		   int lastIdIndex = sensorData->Count;

		   if (lastIdIndex == 0) {
			   ambiente->IdMedicion = 1;
		   }
		   else {
			   Ambiente^ ambientelastId = sensorData[lastIdIndex - 1];
			   ambiente->IdMedicion = (ambientelastId->IdMedicion) + 1;
		   }

		   Controller::Controller::AddAmbienteData(ambiente);

		   //Luego seguiría la recopilacion de datos del sensor 2, 3 y 4 (claro está, esos valores deben
		   //ser generados)
	   
		   //por lo tanto, Ambiente ha recibido cuatro listas y las ha enviado a la database

		   //sin embargo, solo se puede mostrar una de las 4 datos Ambiente^. La elección dependerá del
		   // valor del comboBox
		   
		   if ((comboBox1->SelectedItem->ToString()) == "CIA") {
			   textBox2->Text = temperatura_cia;
			   textBox3->Text = humedad_cia;
			   textBox4->Text = calidadAire_cia;
			   textBox5->Text = co_cia;
		   }
		   
		   
	   
	   
	   }
private: System::Void timer_tick(System::Object^ sender, System::EventArgs^ e) {
	
	TransmisionDataArduino();

}
private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (user->ajustes->FormatoHoras == "Formato de 12 horas") {
		textBox1->Text = DateTime::Now.ToString("hh:mm:ss tt");
	}
	else if (user->ajustes->FormatoHoras == "Formato de 24 horas") {
		textBox1->Text = DateTime::Now.ToString("HH:mm:ss");
	}
	else {
		MessageBox::Show("Al otro ciclo sera");
	}
}
};
}
