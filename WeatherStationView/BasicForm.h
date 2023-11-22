#pragma once

#include "Config.h"
#include "WeatherStationForm.h"
#include "MembresiaForm.h"
#include "SensorsReport.h"
#include "InstruccionesMembresias.h"
#include "NewPie.h"
#include "TiendaPuntos.h"
#include "TriviaForm.h"

#include "TablaRankingForm.h"



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
			this->IdSensor = "1";
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
	private: Random^ rand = gcnew Random();

	private: int minTemp = 17;
	private: int maxTemp = 28;
	private: int minHum = 60;
	private: int maxHum = 99;
	private: int minCO = 75;
	private: int maxCO = 200;
	private: int minAQ = 100;
	private: int maxAQ = 175;

	private: int deltaTemp = 2; //20
	private: int deltaHum = 2; //70
	private: int deltaCO = 10; //125
	private: int deltaAirQ = 10; //120

	private: int temp_faci = 20;
	private: int hum_faci = 70;
	private: int co_faci = 125;
	private: int aq_faci = 120;

	private: int temp_bc = 20;
	private: int hum_bc = 75;
	private: int co_bc = 125;
	private: int aq_bc = 120;

	private: int temp_tinkuy = 20;
	private: int hum_tinkuy = 70;
	private: int co_tinkuy = 125;
	private: int aq_tinkuy = 120;

	private: int delta;

	private: double gaussian;

	private: int TotalPoints = 0;
	private: int pointsperDay = 0;
	private: const int maxpoints = 30; //discutir
	private: int counter = 0;
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
	private: System::Windows::Forms::Label^ UnidadTemplbl;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ TriviaBtn;

	private: System::Windows::Forms::Label^ ptslabel;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Label^ PuntosDiariosLabel;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Button^ button6;
private: System::Windows::Forms::CheckBox^ checkBox1;

private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Panel^ panel2;

private: System::Windows::Forms::Button^ button7;
private: System::Windows::Forms::LinkLabel^ linkLabel2;
private: System::Windows::Forms::LinkLabel^ linkLabel1;






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

			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());

			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->PuntosDiariosLabel = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());

			this->label11 = (gcnew System::Windows::Forms::Label());
			this->ptslabel = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->PuntosDiariosLabel = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->TriviaBtn = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->UnidadTemplbl = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
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
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::PowderBlue;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(31, 135);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";

			this->label1->Size = System::Drawing::Size(87, 32);

			this->label1->TabIndex = 0;
			this->label1->Text = L"Lugar";
			this->label1->Click += gcnew System::EventHandler(this, &BasicForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::PowderBlue;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(558, 285);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Temperatura";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::PowderBlue;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(558, 361);
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
			this->label4->BackColor = System::Drawing::Color::PowderBlue;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(558, 436);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(119, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Calidad del Aire";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Navy;
			this->button1->FlatAppearance->BorderSize = 3;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Navy;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Navy;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::DarkBlue;
			this->button1->Location = System::Drawing::Point(1098, 19);
			this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(144, 47);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Ajustes";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &BasicForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::DarkBlue;
			this->button2->Location = System::Drawing::Point(1068, 621);
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
			this->button3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::DarkBlue;
			this->button3->Location = System::Drawing::Point(1098, 89);
			this->button3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(144, 56);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Membresía";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &BasicForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::DarkBlue;
			this->button4->Location = System::Drawing::Point(1011, 329);
			this->button4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(163, 57);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Estadística";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &BasicForm::button4_Click);
			// 
			// panel1
			// 

			this->panel1->BackColor = System::Drawing::Color::PowderBlue;
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->label16);
			this->panel1->Controls->Add(this->label15);
			this->panel1->Controls->Add(this->label14);

			this->panel1->Controls->Add(this->checkBox1);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->TriviaBtn);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->UnidadTemplbl);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->textBox5);
			this->panel1->Controls->Add(this->label12);
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
			this->panel1->ForeColor = System::Drawing::Color::White;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1255, 687);
			this->panel1->TabIndex = 8;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &BasicForm::panel1_Paint);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::LightCyan;
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->label11);
			this->panel2->Controls->Add(this->ptslabel);
			this->panel2->Controls->Add(this->label13);
			this->panel2->Controls->Add(this->PuntosDiariosLabel);
			this->panel2->Location = System::Drawing::Point(632, 12);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(433, 131);
			this->panel2->TabIndex = 38;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::LightCyan;
			this->label8->ForeColor = System::Drawing::Color::DarkBlue;
			this->label8->Location = System::Drawing::Point(69, 11);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(64, 25);
			this->label8->TabIndex = 16;
			this->label8->Text = L"label8";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::LightCyan;
			this->label9->ForeColor = System::Drawing::Color::DarkBlue;
			this->label9->Location = System::Drawing::Point(195, 11);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(64, 25);
			this->label9->TabIndex = 17;
			this->label9->Text = L"label9";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::LightCyan;
			this->label11->ForeColor = System::Drawing::Color::DarkBlue;
			this->label11->Location = System::Drawing::Point(8, 49);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(173, 25);
			this->label11->TabIndex = 30;
			this->label11->Text = L"EcoCoins Totales:";
			// 
			// ptslabel
			// 
			this->ptslabel->AutoSize = true;
			this->ptslabel->BackColor = System::Drawing::Color::LightCyan;
			this->ptslabel->ForeColor = System::Drawing::Color::DarkBlue;
			this->ptslabel->Location = System::Drawing::Point(184, 49);
			this->ptslabel->Name = L"ptslabel";
			this->ptslabel->Size = System::Drawing::Size(75, 25);
			this->ptslabel->TabIndex = 29;
			this->ptslabel->Text = L"label14";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::LightCyan;
			this->label13->ForeColor = System::Drawing::Color::DarkBlue;
			this->label13->Location = System::Drawing::Point(8, 86);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(168, 25);
			this->label13->TabIndex = 31;
			this->label13->Text = L"EcoCoins Diarios:";
			// 
			// PuntosDiariosLabel
			// 
			this->PuntosDiariosLabel->AutoSize = true;
			this->PuntosDiariosLabel->BackColor = System::Drawing::Color::LightCyan;
			this->PuntosDiariosLabel->ForeColor = System::Drawing::Color::DarkBlue;
			this->PuntosDiariosLabel->Location = System::Drawing::Point(184, 86);
			this->PuntosDiariosLabel->Name = L"PuntosDiariosLabel";
			this->PuntosDiariosLabel->Size = System::Drawing::Size(84, 25);
			this->PuntosDiariosLabel->TabIndex = 32;
			this->PuntosDiariosLabel->Text = L"PdLabel";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->ForeColor = System::Drawing::Color::Black;
			this->label16->Location = System::Drawing::Point(949, 245);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(272, 50);
			this->label16->TabIndex = 37;
			this->label16->Text = L"Visualiza Gráficas del clima \r\nde los ambientes de la PUCP:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->ForeColor = System::Drawing::Color::Black;
			this->label15->Location = System::Drawing::Point(857, 576);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(182, 25);
			this->label15->TabIndex = 36;
			this->label15->Text = L"Ranking de Puntos:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->ForeColor = System::Drawing::Color::Black;
			this->label14->Location = System::Drawing::Point(424, 576);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(356, 25);
			this->label14->TabIndex = 35;
			this->label14->Text = L"Juega en la Trivia Diaria y Gana Puntos";

			// linkLabel2
			// 
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->Location = System::Drawing::Point(732, 121);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(183, 20);
			this->linkLabel2->TabIndex = 36;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"¿Qué son los EcoCoins\?";
			this->linkLabel2->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &BasicForm::linkLabel2_LinkClicked);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button7->Location = System::Drawing::Point(1066, 498);
			this->button7->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(165, 55);
			this->button7->TabIndex = 35;
			this->button7->Text = L"Compra Puntos";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &BasicForm::button7_Click);

			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->ForeColor = System::Drawing::SystemColors::InfoText;
			this->checkBox1->Location = System::Drawing::Point(410, 101);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(123, 24);
			this->checkBox1->TabIndex = 34;
			this->checkBox1->Text = L"Modo Oscuro";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &BasicForm::checkBox1_CheckedChanged);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::DarkBlue;
			this->button6->Location = System::Drawing::Point(855, 616);
			this->button6->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(184, 62);
			this->button6->TabIndex = 33;
			this->button6->Text = L"Ranking";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &BasicForm::button6_Click);
			
			// PuntosDiariosLabel
			// 
			this->PuntosDiariosLabel->AutoSize = true;
			this->PuntosDiariosLabel->ForeColor = System::Drawing::Color::Black;
			this->PuntosDiariosLabel->Location = System::Drawing::Point(866, 101);
			this->PuntosDiariosLabel->Name = L"PuntosDiariosLabel";
			this->PuntosDiariosLabel->Size = System::Drawing::Size(67, 20);
			this->PuntosDiariosLabel->TabIndex = 32;
			this->PuntosDiariosLabel->Text = L"PdLabel";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(717, 101);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(130, 20);
			this->label13->TabIndex = 31;
			this->label13->Text = L"EcoCoins Diarios";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(717, 61);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(133, 20);
			this->label11->TabIndex = 30;
			this->label11->Text = L"EcoCoins Totales";
			// 
			// ptslabel
			// 
			this->ptslabel->AutoSize = true;
			this->ptslabel->Location = System::Drawing::Point(866, 61);
			this->ptslabel->Name = L"ptslabel";
			this->ptslabel->Size = System::Drawing::Size(60, 20);
			this->ptslabel->TabIndex = 29;
			this->ptslabel->Text = L"label14";
			// 
			// TriviaBtn
			// 
			this->TriviaBtn->BackColor = System::Drawing::SystemColors::ControlLight;
			this->TriviaBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->TriviaBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TriviaBtn->ForeColor = System::Drawing::Color::DarkBlue;
			this->TriviaBtn->Location = System::Drawing::Point(521, 616);
			this->TriviaBtn->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->TriviaBtn->Name = L"TriviaBtn";
			this->TriviaBtn->Size = System::Drawing::Size(212, 62);
			this->TriviaBtn->TabIndex = 26;
			this->TriviaBtn->Text = L"Trivia";
			this->TriviaBtn->UseVisualStyleBackColor = false;
			this->TriviaBtn->Click += gcnew System::EventHandler(this, &BasicForm::TriviaBtn_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::DarkBlue;
			this->button5->Location = System::Drawing::Point(1011, 423);
			this->button5->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(165, 55);
			this->button5->TabIndex = 25;
			this->button5->Text = L"Más Graficos";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &BasicForm::button5_Click);
			// 
			// UnidadTemplbl
			// 
			this->UnidadTemplbl->AutoSize = true;
			this->UnidadTemplbl->BackColor = System::Drawing::Color::PowderBlue;
			this->UnidadTemplbl->ForeColor = System::Drawing::Color::Black;
			this->UnidadTemplbl->Location = System::Drawing::Point(786, 285);
			this->UnidadTemplbl->Name = L"UnidadTemplbl";
			this->UnidadTemplbl->Size = System::Drawing::Size(60, 20);
			this->UnidadTemplbl->TabIndex = 24;
			this->UnidadTemplbl->Text = L"label11";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::PowderBlue;
			this->label10->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::DarkBlue;
			this->label10->Location = System::Drawing::Point(383, 4);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(177, 64);
			this->label10->TabIndex = 23;
			this->label10->Text = L"label10";
			// 
			// textBox5
			// 
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox5->Location = System::Drawing::Point(737, 512);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(43, 26);
			this->textBox5->TabIndex = 22;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::PowderBlue;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::Black;
			this->label12->Location = System::Drawing::Point(558, 511);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(139, 20);
			this->label12->TabIndex = 21;
			this->label12->Text = L"Concentracion CO";
			// 

			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(792, 19);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(51, 20);
			this->label9->TabIndex = 17;
			this->label9->Text = L"label9";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(732, 19);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(51, 20);
			this->label8->TabIndex = 16;
			this->label8->Text = L"label8";
			// 

			// textBox4
			// 
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox4->Location = System::Drawing::Point(737, 436);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(43, 26);
			this->textBox4->TabIndex = 14;
			// 
			// textBox3
			// 
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox3->Location = System::Drawing::Point(737, 361);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(43, 26);
			this->textBox3->TabIndex = 13;
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Location = System::Drawing::Point(737, 282);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(43, 26);
			this->textBox2->TabIndex = 12;
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Location = System::Drawing::Point(737, 211);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(110, 26);
			this->textBox1->TabIndex = 10;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::PowderBlue;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(558, 211);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(44, 20);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Hora";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::PowderBlue;
			this->label6->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::DarkBlue;
			this->label6->Location = System::Drawing::Point(9, 4);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(365, 64);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Weather Station";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::PowderBlue;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(558, 158);
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
			this->dtpWeatherStationBasic->CalendarMonthBackground = System::Drawing::SystemColors::Info;
			this->dtpWeatherStationBasic->Enabled = false;
			this->dtpWeatherStationBasic->Location = System::Drawing::Point(666, 158);
			this->dtpWeatherStationBasic->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->dtpWeatherStationBasic->Name = L"dtpWeatherStationBasic";
			this->dtpWeatherStationBasic->RightToLeft = System::Windows::Forms::RightToLeft::No;
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
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"CIA", L"FACI", L"BIBLIOTECA CENTRAL", L"TINKUY" });
			this->comboBox1->Location = System::Drawing::Point(177, 135);
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
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(0, 0);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(80, 20);
			this->linkLabel1->TabIndex = 9;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"linkLabel1";
			// 
			// BasicForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1255, 687);
			this->ControlBox = false;
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"BasicForm";
			this->Text = L"BasicForm";
			this->Load += gcnew System::EventHandler(this, &BasicForm::BasicForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BasicForm_Load(System::Object^ sender, System::EventArgs^ e) {
		//INICIO 
		IdSensor = "1";

		
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

		this->ptslabel->Text = user->PuntosTotales.ToString();
		this->PuntosDiariosLabel->Text = user->PuntosDiarios.ToString();

		membresiaGlobal = user->membresia;

		this->comboBox1->SelectedIndex = 0; //CIA

		

		DateTime fechaUltimaAct1 = DateTime::ParseExact(user->fechaUltimaActualizacion, "yyyy-MM-dd", nullptr);

		DateTime fechaRef = DateTime::Today;

		//fechaRef = fechaRef.Date.AddHours(0).AddMinutes(0).AddSeconds(40);


		if (fechaUltimaAct1 < fechaRef) {
			
				user->PuntosDiarios = 0;
				PuntosDiariosLabel->Text = (user->PuntosDiarios).ToString();
				Controller::Controller::UpdateUser(user);				
			}
		else {
			PuntosDiariosLabel->Text = (user->PuntosDiarios).ToString();
		}


		if (user->ajustes->FormatoHoras == "Formato de 12 horas") {
			textBox1->Text = DateTime::Now.ToString("hh:mm:ss tt");
		}
		else if (user->ajustes->FormatoHoras == "Formato de 24 horas") {
			textBox1->Text = DateTime::Now.ToString("HH:mm:ss");
		}
		else {
			MessageBox::Show("ARREGLEN LA BASE DE DATOS");
			Application::Exit();
		}

		//timer
		timer1->Start();
		timer2->Start();
		//TransmisionDataArduino();
		

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
		else {
			SensorsReport^ obj = gcnew SensorsReport(user);
			obj->ControlBox = false;
			obj->ShowDialog();
		}
	}
	/*
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

		MembresiaForm^ membform = gcnew MembresiaForm(membresiaGlobal, user);
		membform->ControlBox = false;
		membform->ShowDialog();

		membresiaGlobal = membform->GetMembresia();
	*/	
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	InstruccionesMembresias^ membform = gcnew InstruccionesMembresias();
	membform->ControlBox = false;
	membform->ShowDialog();

	//RefreshMembresia();
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
			Ambiente^ CIA = Controller::Controller::QueryLastUbiGeoData("CIA");
			textBox2->Text = (dynamic_cast<SensorTemperaturaHumedad^>(CIA->DataBase[0])->Temperatura).ToString();
			textBox3->Text = (dynamic_cast<SensorTemperaturaHumedad^>(CIA->DataBase[0])->Humedad).ToString();
			textBox4->Text = (dynamic_cast<SensorCO^>(CIA->DataBase[1])->NivelCO).ToString();
			textBox5->Text = (dynamic_cast<SensorCalidadAire^>(CIA->DataBase[2])->CalidadAire).ToString();
		}
		else if ((comboBox1->Text == "FACI")) {

			pictureBox1->Image = Image::FromFile("FACI.jpg");
			IdSensor = "2";
			Ambiente^ FACI = Controller::Controller::QueryLastUbiGeoData("FACI");
			textBox2->Text = (dynamic_cast<SensorTemperaturaHumedad^>(FACI->DataBase[0])->Temperatura).ToString();
			textBox3->Text = (dynamic_cast<SensorTemperaturaHumedad^>(FACI->DataBase[0])->Humedad).ToString();
			textBox4->Text = (dynamic_cast<SensorCO^>(FACI->DataBase[1])->NivelCO).ToString();
			textBox5->Text = (dynamic_cast<SensorCalidadAire^>(FACI->DataBase[2])->CalidadAire).ToString();
		}
		else if ((comboBox1->Text == "TINKUY")) {

			pictureBox1->Image = Image::FromFile("TINKUY.jpg");
			IdSensor = "3";
			Ambiente^ TINKUY = Controller::Controller::QueryLastUbiGeoData("TINKUY");
			textBox2->Text = (dynamic_cast<SensorTemperaturaHumedad^>(TINKUY->DataBase[0])->Temperatura).ToString();
			textBox3->Text = (dynamic_cast<SensorTemperaturaHumedad^>(TINKUY->DataBase[0])->Humedad).ToString();
			textBox4->Text = (dynamic_cast<SensorCO^>(TINKUY->DataBase[1])->NivelCO).ToString();
			textBox5->Text = (dynamic_cast<SensorCalidadAire^>(TINKUY->DataBase[2])->CalidadAire).ToString();
		}
		else if ((comboBox1->Text == "BIBLIOTECA CENTRAL")) {

			pictureBox1->Image = Image::FromFile("BIBLIOTECA CENTRAL.jpg");
			IdSensor = "4";
			Ambiente^ BIBLIO = Controller::Controller::QueryLastUbiGeoData("BIBLIOTECA CENTRAL");
			textBox2->Text = (dynamic_cast<SensorTemperaturaHumedad^>(BIBLIO->DataBase[0])->Temperatura).ToString();
			textBox3->Text = (dynamic_cast<SensorTemperaturaHumedad^>(BIBLIO->DataBase[0])->Humedad).ToString();
			textBox4->Text = (dynamic_cast<SensorCO^>(BIBLIO->DataBase[1])->NivelCO).ToString();
			textBox5->Text = (dynamic_cast<SensorCalidadAire^>(BIBLIO->DataBase[2])->CalidadAire).ToString();
		}
		else if ((comboBox1->Text == "")) {
			pictureBox1->Image = Image::FromFile("LogoPrueba.jpg");
		}


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

			   TransmisionDataArduino();

			   //String^ c = (textBox2->Text);
			   //int f = Int32::Parse(textBox2->Text) * 1.8 + 32;
			   //textBox2->Text = user->ajustes->UnidadTemp == "°C" ? c : f.ToString();
			   //UnidadTemplbl->Text = user->ajustes->UnidadTemp == Convert::ToChar(176) + "C" ? Convert::ToChar(176) + "C" : Convert::ToChar(176) + "F";
		   }

		   void TransmisionDataArduino() {

			   //Recopilacion de datos de ARDUINO 1 ("CIA")

			   //Recopilando informacion de Sensado del  ARDUINO 1 CIA
			   Controller::Controller::SendFlag();
			   String^ data = Controller::Controller::SendSensorsData();
			   /////Asignacion de Valores de los sensados DESERIALIZACION
			   IdSensor = data->Substring(0, 1);

			   String^ temperatura_cia = data->Substring(2, 2);
			   int temperatura_cia_int = Int32::Parse(temperatura_cia);

			   String^ humedad_cia = data->Substring(4, 3);
			   int humedad_cia_int = Int32::Parse(humedad_cia);

			   String^ co_cia = data->Substring(7, 3);
			   int co_cia_int = Int32::Parse(co_cia);

			   String^ calidadAire_cia = data->Substring(10, 3);
			   int calidadAire_cia_int = Int32::Parse(calidadAire_cia);

			   Ambiente^ ambiente = gcnew Ambiente();
			   SensorTemperaturaHumedad^ TH = gcnew SensorTemperaturaHumedad(1, temperatura_cia_int, Convert::ToChar(176) + "C", humedad_cia_int);
			   SensorCO^ CO = gcnew SensorCO(1, co_cia_int);
			   SensorCalidadAire^ airq = gcnew SensorCalidadAire(1, calidadAire_cia_int);

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
			   //ser generados (random))

			   //Sensor 2 (FACI)

			   delta = (rand->Next(deltaTemp * 2 + 1) - deltaTemp);
			   temp_faci = temp_faci + delta;
			   if ((temp_faci < minTemp) || (temp_faci > maxTemp)) {
				   temp_faci = 20;
			   }

			   delta = (rand->Next(deltaHum * 2 + 1) - deltaHum);
			   hum_faci += delta;
			   if ((hum_faci < minHum) || (hum_faci > maxHum)) {
				   hum_faci = 70;
			   }

			   delta = (rand->Next(deltaCO * 2 + 1) - deltaCO);
			   co_faci += delta;
			   if ((co_faci < minCO) || (co_faci > maxCO)) {
				   co_faci = 125;
			   }

			   delta = (rand->Next(deltaAirQ * 2 + 1) - deltaAirQ);
			   aq_faci += delta;
			   if ((aq_faci < minAQ) || (aq_faci > maxAQ)) {
				   aq_faci = 120;
			   }

			   ambiente = gcnew Ambiente();
			   TH = gcnew SensorTemperaturaHumedad(2, temp_faci, Convert::ToChar(176) + "C", hum_faci);
			   CO = gcnew SensorCO(2, co_faci);
			   airq = gcnew SensorCalidadAire(2, aq_faci);

			   sensorList = gcnew List<Sensor^>();
			   sensorList->Add(TH);
			   sensorList->Add(CO);
			   sensorList->Add(airq);

			   ambiente->DataBase = sensorList;
			   ambiente->TiempoMedicion = DateTime::Now.ToString("HH:mm:ss");
			   ambiente->FechaMedicion = DateTime::Now.ToString("yyyy-MM-dd");
			   ambiente->UbicacionGeografica = "FACI";

			   sensorData = Controller::Controller::QueryAmbienteData();
			   lastIdIndex = sensorData->Count;

			   if (lastIdIndex == 0) {
				   ambiente->IdMedicion = 1;
			   }
			   else {
				   Ambiente^ ambientelastId = sensorData[lastIdIndex - 1];
				   ambiente->IdMedicion = (ambientelastId->IdMedicion) + 1;
			   }

			   Controller::Controller::AddAmbienteData(ambiente);

			   //Sensor 3 (BIBLIOTECA CENTRAL)

			   delta = (rand->Next(deltaTemp * 2 + 1) - deltaTemp);
			   temp_bc = temp_faci + delta;
			   if ((temp_bc < minTemp) || (temp_bc > maxTemp)) {
				   temp_bc = 20;
			   }

			   delta = (rand->Next(deltaHum * 2 + 1) - deltaHum);
			   hum_bc += delta;
			   if ((hum_bc < minHum) || (hum_bc > maxHum)) {
				   hum_bc = 70;
			   }

			   delta = (rand->Next(deltaCO * 2 + 1) - deltaCO);
			   co_bc += delta;
			   if ((co_bc < minCO) || (co_bc > maxCO)) {
				   co_bc = 125;
			   }

			   delta = (rand->Next(deltaAirQ * 2 + 1) - deltaAirQ);
			   aq_bc += delta;
			   if ((aq_bc < minAQ) || (aq_bc > maxAQ)) {
				   aq_bc = 120;
			   }

			   ambiente = gcnew Ambiente();
			   TH = gcnew SensorTemperaturaHumedad(3, temp_bc, Convert::ToChar(176) + "C", hum_bc);
			   CO = gcnew SensorCO(3, co_bc);
			   airq = gcnew SensorCalidadAire(3, aq_bc);

			   sensorList = gcnew List<Sensor^>();
			   sensorList->Add(TH);
			   sensorList->Add(CO);
			   sensorList->Add(airq);

			   ambiente->DataBase = sensorList;
			   ambiente->TiempoMedicion = DateTime::Now.ToString("HH:mm:ss");
			   ambiente->FechaMedicion = DateTime::Now.ToString("yyyy-MM-dd");
			   ambiente->UbicacionGeografica = "BIBLIOTECA CENTRAL";

			   sensorData = Controller::Controller::QueryAmbienteData();
			   lastIdIndex = sensorData->Count;

			   if (lastIdIndex == 0) {
				   ambiente->IdMedicion = 1;
			   }
			   else {
				   Ambiente^ ambientelastId = sensorData[lastIdIndex - 1];
				   ambiente->IdMedicion = (ambientelastId->IdMedicion) + 1;
			   }

			   Controller::Controller::AddAmbienteData(ambiente);

			   //Sensor 4 (TINKUY)

			   delta = (rand->Next(deltaTemp * 2 + 1) - deltaTemp);
			   temp_tinkuy = temp_faci + delta;
			   if ((temp_tinkuy < minTemp) || (temp_tinkuy > maxTemp)) {
				   temp_tinkuy = 20;
			   }

			   delta = (rand->Next(deltaHum * 2 + 1) - deltaHum);
			   hum_tinkuy += delta;
			   if ((hum_tinkuy < minHum) || (hum_tinkuy > maxHum)) {
				   hum_tinkuy = 70;
			   }

			   delta = (rand->Next(deltaCO * 2 + 1) - deltaCO);
			   co_tinkuy += delta;
			   if ((co_tinkuy < minCO) || (co_tinkuy > maxCO)) {
				   co_tinkuy = 125;
			   }

			   delta = (rand->Next(deltaAirQ * 2 + 1) - deltaAirQ);
			   aq_tinkuy += delta;
			   if ((aq_tinkuy < minAQ) || (aq_tinkuy > maxAQ)) {
				   aq_tinkuy = 120;
			   }

			   ambiente = gcnew Ambiente();
			   TH = gcnew SensorTemperaturaHumedad(4, temp_tinkuy, Convert::ToChar(176) + "C", hum_bc);
			   CO = gcnew SensorCO(4, co_tinkuy);
			   airq = gcnew SensorCalidadAire(4, aq_tinkuy);

			   sensorList = gcnew List<Sensor^>();
			   sensorList->Add(TH);
			   sensorList->Add(CO);
			   sensorList->Add(airq);

			   ambiente->DataBase = sensorList;
			   ambiente->TiempoMedicion = DateTime::Now.ToString("HH:mm:ss");
			   ambiente->FechaMedicion = DateTime::Now.ToString("yyyy-MM-dd");
			   ambiente->UbicacionGeografica = "TINKUY";

			   sensorData = Controller::Controller::QueryAmbienteData();
			   lastIdIndex = sensorData->Count;

			   if (lastIdIndex == 0) {
				   ambiente->IdMedicion = 1;
			   }
			   else {
				   Ambiente^ ambientelastId = sensorData[lastIdIndex - 1];
				   ambiente->IdMedicion = (ambientelastId->IdMedicion) + 1;
			   }

			   Controller::Controller::AddAmbienteData(ambiente);

			   //por lo tanto, Ambiente ha recibido cuatro listas y las ha enviado a la database

			   //sin embargo, solo se puede mostrar una de las 4 datos Ambiente^. La elección dependerá del
			   // valor del comboBox

			   if ((comboBox1->SelectedItem->ToString()) == "CIA") {
				   textBox3->Text = humedad_cia_int.ToString();
				   int temperatura_cia_f = temperatura_cia_int * 1.8 + 32;
				   textBox2->Text = user->ajustes->UnidadTemp == "°C" ? (temperatura_cia_int).ToString() : temperatura_cia_f.ToString();
				   UnidadTemplbl->Text = user->ajustes->UnidadTemp == Convert::ToChar(176) + "C" ? Convert::ToChar(176) + "C" : Convert::ToChar(176) + "F";
				   textBox4->Text = calidadAire_cia_int.ToString();
				   textBox5->Text = co_cia_int.ToString();
			   }
			   else if ((comboBox1->SelectedItem->ToString()) == "FACI") {
				   textBox3->Text = hum_faci.ToString();
				   int temp_faci_f = temp_faci * 1.8 + 32;
				   textBox2->Text = user->ajustes->UnidadTemp == "°C" ? (temp_faci).ToString() : temp_faci_f.ToString();
				   UnidadTemplbl->Text = user->ajustes->UnidadTemp == Convert::ToChar(176) + "C" ? Convert::ToChar(176) + "C" : Convert::ToChar(176) + "F";
				   textBox4->Text = aq_faci.ToString();
				   textBox5->Text = co_faci.ToString();
			   }
			   else if ((comboBox1->SelectedItem->ToString()) == "BIBLIOTECA CENTRAL") {
				   textBox3->Text = hum_bc.ToString();
				   int temp_bc_f = temp_bc * 1.8 + 32;
				   textBox2->Text = user->ajustes->UnidadTemp == "°C" ? (temp_bc).ToString() : temp_bc_f.ToString();
				   UnidadTemplbl->Text = user->ajustes->UnidadTemp == Convert::ToChar(176) + "C" ? Convert::ToChar(176) + "C" : Convert::ToChar(176) + "F";
				   textBox4->Text = aq_bc.ToString();
				   textBox5->Text = co_bc.ToString();
			   }
			   else if ((comboBox1->SelectedItem->ToString()) == "TINKUY") {
				   textBox3->Text = hum_tinkuy.ToString();
				   int temp_tinkuy_f = temp_tinkuy * 1.8 + 32;
				   textBox2->Text = user->ajustes->UnidadTemp == "°C" ? (temp_tinkuy).ToString() : temp_tinkuy_f.ToString();
				   UnidadTemplbl->Text = user->ajustes->UnidadTemp == Convert::ToChar(176) + "C" ? Convert::ToChar(176) + "C" : Convert::ToChar(176) + "F";
				   textBox4->Text = aq_tinkuy.ToString();
				   textBox5->Text = co_tinkuy.ToString();
			   }
		   }
	private: System::Void timer_tick(System::Object^ sender, System::EventArgs^ e) { //cada minuto

		TransmisionDataArduino();
		counter++;
		if (counter == 5) {
			if ((user->PuntosDiarios) < maxpoints) {
				user->PuntosTotales += 2;
				user->PuntosDiarios += 2;

				if (user->PuntosDiarios >= maxpoints) {
					user->PuntosDiarios = maxpoints;
				}

				Controller::Controller::UpdateUser(user);
				ptslabel->Text = (user->PuntosTotales).ToString();
				counter == 0;
			}

		}


	}

	private: System::Void Timer2_Tick(System::Object^ sender, System::EventArgs^ e) { //cada segundo
		if (user->ajustes->FormatoHoras == "Formato de 12 horas") {
			textBox1->Text = DateTime::Now.ToString("hh:mm:ss tt");
		}
		else if (user->ajustes->FormatoHoras == "Formato de 24 horas") {
			textBox1->Text = DateTime::Now.ToString("HH:mm:ss");
		}
		else {
			MessageBox::Show("NO TOQUEN LA BASE DE DATOS. BUCLE INFINITO AHHHHHHHHHHHHHHHHHH");
			Application::Exit();
		}
	}

	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

		if (user->membresia->TipoMembresia == "Basic") {
			MessageBox::Show("Suscribete a una Membresia para poder usar esta opción");
			MembresiaForm^ membform = gcnew MembresiaForm(membresiaGlobal, user);
			membform->ControlBox = false;
			membform->ShowDialog();
			membresiaGlobal = membform->GetMembresia();
			RefreshMembresia();
		}
		else {
			NewPie^ pieform = gcnew NewPie();
			pieform->ControlBox = false;
			pieform->ShowDialog();
		}

	}
	private: System::Void TriviaBtn_Click(System::Object^ sender, System::EventArgs^ e) {

		if (user->PuntosDiarios < maxpoints) {
			//Paso de Parametros
			TriviaForm^ triviaForm = gcnew TriviaForm(user);
			triviaForm->ControlBox = false;
			triviaForm->ShowDialog();
			user = triviaForm->GetUser();
			Controller::Controller::UpdateUser(user);
			ptslabel->Text = (user->PuntosTotales).ToString();
			PuntosDiariosLabel->Text = user->PuntosDiarios.ToString();

		}
		else {
			MessageBox::Show("Has alcanzado el máximos de puntos por hoy. Vuelve mañana para obtener más puntos.");
		}
	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	TablaRankingForm^ rankingform = gcnew TablaRankingForm(user);
	rankingform->ShowDialog();

}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {


	//cambio de modo oscuro a claro y viceserva
	//Claro

	if (checkBox1->Checked == true) {

		this->panel1->BackColor = System::Drawing::Color::SlateGray;

		this->PuntosDiariosLabel->ForeColor = System::Drawing::Color::White;

		this->button1->ForeColor = System::Drawing::SystemColors::Desktop;
		this->button1->BackColor = System::Drawing::SystemColors::ActiveCaption;


		this->button2->ForeColor = System::Drawing::SystemColors::Desktop;
		this->button2->BackColor = System::Drawing::SystemColors::ActiveCaption;

		this->button3->ForeColor = System::Drawing::SystemColors::Desktop;
		this->button3->BackColor = System::Drawing::SystemColors::ActiveCaption;

		this->button4->ForeColor = System::Drawing::SystemColors::Desktop;
		this->button4->BackColor = System::Drawing::SystemColors::ActiveCaption;

		this->button5->ForeColor = System::Drawing::SystemColors::Desktop;
		this->button5->BackColor = System::Drawing::SystemColors::ActiveCaption;

		this->button6->ForeColor = System::Drawing::SystemColors::Desktop;
		this->button6->BackColor = System::Drawing::SystemColors::ActiveCaption;

		this->TriviaBtn->ForeColor = System::Drawing::SystemColors::Desktop;
		this->TriviaBtn->BackColor = System::Drawing::SystemColors::ActiveCaption;


		//labels

		this->label1->BackColor = System::Drawing::Color::Black;
		this->label1->ForeColor = System::Drawing::Color::White;

		this->label2->BackColor = System::Drawing::Color::Black;
		this->label2->ForeColor = System::Drawing::Color::White;

		this->label3->BackColor = System::Drawing::Color::Black;
		this->label3->ForeColor = System::Drawing::Color::White;

		this->label4->BackColor = System::Drawing::Color::Black;
		this->label4->ForeColor = System::Drawing::Color::White;


		this->label5->BackColor = System::Drawing::Color::Black;
		this->label5->ForeColor = System::Drawing::Color::White;

		this->label6->BackColor = System::Drawing::Color::Black;
		this->label6->ForeColor = System::Drawing::Color::White;

		this->label7->BackColor = System::Drawing::Color::Black;
		this->label7->ForeColor = System::Drawing::Color::White;

		this->label8->BackColor = System::Drawing::Color::Black;
		this->label8->ForeColor = System::Drawing::Color::White;

		this->label9->BackColor = System::Drawing::Color::Black;
		this->label9->ForeColor = System::Drawing::Color::White;


		this->label10->BackColor = System::Drawing::Color::Black;
		this->label10->ForeColor = System::Drawing::Color::White;


		this->label11->BackColor = System::Drawing::Color::Black;
		this->label11->ForeColor = System::Drawing::Color::White;


		this->label12->BackColor = System::Drawing::Color::Black;
		this->label12->ForeColor = System::Drawing::Color::White;


		this->label13->BackColor = System::Drawing::Color::Black;
		this->label13->ForeColor = System::Drawing::Color::White;


		this->label14->BackColor = System::Drawing::Color::Black;
		this->label14->ForeColor = System::Drawing::Color::White;

		this->label15->BackColor = System::Drawing::Color::Black;
		this->label15->ForeColor = System::Drawing::Color::White;

		this->label16->BackColor = System::Drawing::Color::Black;
		this->label16->ForeColor = System::Drawing::Color::White;


	}
	//Oscuro
	else {
	

		this->panel1->BackColor = System::Drawing::Color::PowderBlue;


		this->PuntosDiariosLabel->ForeColor = System::Drawing::Color::DarkBlue;

		//buttons
		
		this->button1->ForeColor = System::Drawing::SystemColors::Desktop;
		this->button1->BackColor = System::Drawing::SystemColors::ControlLight;

		this->button2->ForeColor = System::Drawing::SystemColors::Desktop;
		this->button2->BackColor = System::Drawing::SystemColors::ControlLight;

		this->button3->ForeColor = System::Drawing::SystemColors::Desktop;
		this->button3->BackColor = System::Drawing::SystemColors::ControlLight;

		this->button4->ForeColor = System::Drawing::SystemColors::Desktop;
		this->button4->BackColor = System::Drawing::SystemColors::ControlLight;

		this->button5->ForeColor = System::Drawing::SystemColors::Desktop;
		this->button5->BackColor = System::Drawing::SystemColors::ControlLight;

		this->button6->ForeColor = System::Drawing::SystemColors::Desktop;
		this->button6->BackColor = System::Drawing::SystemColors::ControlLight;

		this->TriviaBtn->ForeColor = System::Drawing::SystemColors::Desktop;
		this->TriviaBtn->BackColor = System::Drawing::SystemColors::ControlLight;

		//labels

				//labels

		this->label1->BackColor = System::Drawing::Color::PowderBlue;
		this->label1->ForeColor = System::Drawing::Color::DarkBlue;

		this->label2->BackColor = System::Drawing::Color::PowderBlue;
		this->label2->ForeColor = System::Drawing::Color::DarkBlue;

		this->label3->BackColor = System::Drawing::Color::PowderBlue;
		this->label3->ForeColor = System::Drawing::Color::DarkBlue;

		this->label4->BackColor = System::Drawing::Color::PowderBlue;
		this->label4->ForeColor = System::Drawing::Color::DarkBlue;


		this->label5->BackColor = System::Drawing::Color::PowderBlue;
		this->label5->ForeColor = System::Drawing::Color::DarkBlue;

		this->label6->BackColor = System::Drawing::Color::PowderBlue;
		this->label6->ForeColor = System::Drawing::Color::DarkBlue;

		this->label7->BackColor = System::Drawing::Color::PowderBlue;
		this->label7->ForeColor = System::Drawing::Color::DarkBlue;

		this->label8->BackColor = System::Drawing::Color::PowderBlue;
		this->label8->ForeColor = System::Drawing::Color::DarkBlue;

		this->label9->BackColor = System::Drawing::Color::PowderBlue;
		this->label9->ForeColor = System::Drawing::Color::DarkBlue;


		this->label10->BackColor = System::Drawing::Color::PowderBlue;
		this->label10->ForeColor = System::Drawing::Color::DarkBlue;


		this->label11->BackColor = System::Drawing::Color::PowderBlue;
		this->label11->ForeColor = System::Drawing::Color::DarkBlue;


		this->label12->BackColor = System::Drawing::Color::PowderBlue;
		this->label12->ForeColor = System::Drawing::Color::DarkBlue;


		this->label13->BackColor = System::Drawing::Color::PowderBlue;
		this->label13->ForeColor = System::Drawing::Color::DarkBlue;


		this->label14->BackColor = System::Drawing::Color::PowderBlue;
		this->label14->ForeColor = System::Drawing::Color::DarkBlue;

		this->label15->BackColor = System::Drawing::Color::PowderBlue;
		this->label15->ForeColor = System::Drawing::Color::DarkBlue;

		this->label16->BackColor = System::Drawing::Color::PowderBlue;
		this->label16->ForeColor = System::Drawing::Color::DarkBlue;


	
		//// Labels del 2 al 15
		//for (int i = 1; i <= 16; ++i) {
		//	Label^ label = dynamic_cast<Label^>(this->Controls["label" + i]);
		//	if (label != nullptr) {
		//		label->BackColor = System::Drawing::Color::PowderBlue;
		//		label->ForeColor = System::Drawing::Color::DarkBlue;
		//	}
		//}

	
	}


}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	TiendaPuntos^ tpuntos = gcnew TiendaPuntos();
	tpuntos->ControlBox = false;
	tpuntos->ShowDialog();
}
private: System::Void linkLabel2_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	InstruccionesMembresias^ imform = gcnew InstruccionesMembresias();
	imform->ControlBox = false;
	imform->ShowDialog();
}
};
}
