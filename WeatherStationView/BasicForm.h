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

	protected:











	private: String^ StringDateTime = "";
	private: DateTime selectedDateTime = DateTime(2020, 11, 20, 16, 52, 0);



















	private: System::Windows::Forms::Timer^ timer1;


	private: System::Windows::Forms::Timer^ timer2;

















private: System::Windows::Forms::Button^ button7;
private: System::Windows::Forms::LinkLabel^ linkLabel2;

private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::ComboBox^ comboBox1;
private: System::Windows::Forms::PictureBox^ pictureBox1;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::DateTimePicker^ dtpWeatherStationBasic;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::TextBox^ textBox2;
private: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::TextBox^ textBox4;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::TextBox^ textBox5;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::Label^ UnidadTemplbl;
private: System::Windows::Forms::Button^ button5;
private: System::Windows::Forms::Button^ TriviaBtn;
private: System::Windows::Forms::Button^ button6;
private: System::Windows::Forms::CheckBox^ checkBox1;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Label^ label16;





private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Label^ PuntosDiariosLabel;
private: System::Windows::Forms::Panel^ panel1;
private: System::Windows::Forms::Panel^ panel2;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Label^ ptslabel;

private: System::Windows::Forms::Panel^ panel4;
private: System::Windows::Forms::Panel^ panel6;
private: System::Windows::Forms::Panel^ panel5;
private: System::Windows::Forms::PictureBox^ pictureBox3;
private: System::Windows::Forms::PictureBox^ pictureBox2;
private: System::Windows::Forms::PictureBox^ pictureBox4;
private: System::Windows::Forms::PictureBox^ pictureBox5;















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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(BasicForm::typeid));
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dtpWeatherStationBasic = (gcnew System::Windows::Forms::DateTimePicker());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->UnidadTemplbl = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->TriviaBtn = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->PuntosDiariosLabel = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->ptslabel = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->SuspendLayout();
			// 
			// linkLabel2
			// 
			this->linkLabel2->ActiveLinkColor = System::Drawing::SystemColors::ActiveCaption;
			resources->ApplyResources(this->linkLabel2, L"linkLabel2");
			this->linkLabel2->BackColor = System::Drawing::SystemColors::Control;
			this->linkLabel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->linkLabel2->DisabledLinkColor = System::Drawing::Color::White;
			this->linkLabel2->ForeColor = System::Drawing::Color::White;
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->TabStop = true;
			this->linkLabel2->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &BasicForm::linkLabel2_LinkClicked);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			resources->ApplyResources(this->button7, L"button7");
			this->button7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button7->Name = L"button7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &BasicForm::button7_Click);
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
			// label4
			// 
			resources->ApplyResources(this->label4, L"label4");
			this->label4->BackColor = System::Drawing::SystemColors::Control;
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Name = L"label4";
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->BackColor = System::Drawing::SystemColors::Control;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Name = L"label1";
			this->label1->Click += gcnew System::EventHandler(this, &BasicForm::label1_Click);
			// 
			// label3
			// 
			resources->ApplyResources(this->label3, L"label3");
			this->label3->BackColor = System::Drawing::SystemColors::Control;
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Name = L"label3";
			this->label3->Click += gcnew System::EventHandler(this, &BasicForm::label3_Click);
			// 
			// label2
			// 
			resources->ApplyResources(this->label2, L"label2");
			this->label2->BackColor = System::Drawing::SystemColors::Control;
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Name = L"label2";
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::SystemColors::InactiveBorder;
			resources->ApplyResources(this->comboBox1, L"comboBox1");
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				resources->GetString(L"comboBox1.Items"), resources->GetString(L"comboBox1.Items1"),
					resources->GetString(L"comboBox1.Items2"), resources->GetString(L"comboBox1.Items3")
			});
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &BasicForm::comboBox1_SelectedIndexChanged);
			// 
			// pictureBox1
			// 
			resources->ApplyResources(this->pictureBox1, L"pictureBox1");
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->TabStop = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::MenuText;
			resources->ApplyResources(this->button3, L"button3");
			this->button3->ForeColor = System::Drawing::SystemColors::Control;
			this->button3->Name = L"button3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &BasicForm::button3_Click);
			// 
			// dtpWeatherStationBasic
			// 
			resources->ApplyResources(this->dtpWeatherStationBasic, L"dtpWeatherStationBasic");
			this->dtpWeatherStationBasic->CalendarMonthBackground = System::Drawing::SystemColors::Info;
			this->dtpWeatherStationBasic->Name = L"dtpWeatherStationBasic";
			// 
			// label5
			// 
			resources->ApplyResources(this->label5, L"label5");
			this->label5->BackColor = System::Drawing::SystemColors::Control;
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Name = L"label5";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::MenuText;
			resources->ApplyResources(this->button4, L"button4");
			this->button4->ForeColor = System::Drawing::SystemColors::Control;
			this->button4->Name = L"button4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &BasicForm::button4_Click);
			// 
			// label6
			// 
			resources->ApplyResources(this->label6, L"label6");
			this->label6->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Name = L"label6";
			// 
			// label7
			// 
			resources->ApplyResources(this->label7, L"label7");
			this->label7->BackColor = System::Drawing::SystemColors::Control;
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Name = L"label7";
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			resources->ApplyResources(this->textBox1, L"textBox1");
			this->textBox1->Name = L"textBox1";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::MenuText;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Navy;
			this->button1->FlatAppearance->BorderSize = 3;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Navy;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Navy;
			resources->ApplyResources(this->button1, L"button1");
			this->button1->ForeColor = System::Drawing::SystemColors::Control;
			this->button1->Name = L"button1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &BasicForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			resources->ApplyResources(this->button2, L"button2");
			this->button2->ForeColor = System::Drawing::SystemColors::Control;
			this->button2->Name = L"button2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &BasicForm::button2_Click);
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			resources->ApplyResources(this->textBox2, L"textBox2");
			this->textBox2->Name = L"textBox2";
			// 
			// textBox3
			// 
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			resources->ApplyResources(this->textBox3, L"textBox3");
			this->textBox3->Name = L"textBox3";
			// 
			// textBox4
			// 
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			resources->ApplyResources(this->textBox4, L"textBox4");
			this->textBox4->Name = L"textBox4";
			// 
			// label12
			// 
			resources->ApplyResources(this->label12, L"label12");
			this->label12->BackColor = System::Drawing::SystemColors::Control;
			this->label12->ForeColor = System::Drawing::Color::Black;
			this->label12->Name = L"label12";
			// 
			// textBox5
			// 
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			resources->ApplyResources(this->textBox5, L"textBox5");
			this->textBox5->Name = L"textBox5";
			// 
			// label10
			// 
			resources->ApplyResources(this->label10, L"label10");
			this->label10->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Name = L"label10";
			// 
			// UnidadTemplbl
			// 
			resources->ApplyResources(this->UnidadTemplbl, L"UnidadTemplbl");
			this->UnidadTemplbl->BackColor = System::Drawing::SystemColors::HighlightText;
			this->UnidadTemplbl->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->UnidadTemplbl->Name = L"UnidadTemplbl";
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::MenuText;
			resources->ApplyResources(this->button5, L"button5");
			this->button5->ForeColor = System::Drawing::SystemColors::Control;
			this->button5->Name = L"button5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &BasicForm::button5_Click);
			// 
			// TriviaBtn
			// 
			this->TriviaBtn->BackColor = System::Drawing::SystemColors::MenuText;
			resources->ApplyResources(this->TriviaBtn, L"TriviaBtn");
			this->TriviaBtn->ForeColor = System::Drawing::SystemColors::Control;
			this->TriviaBtn->Name = L"TriviaBtn";
			this->TriviaBtn->UseVisualStyleBackColor = false;
			this->TriviaBtn->Click += gcnew System::EventHandler(this, &BasicForm::TriviaBtn_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::MenuText;
			resources->ApplyResources(this->button6, L"button6");
			this->button6->ForeColor = System::Drawing::SystemColors::Control;
			this->button6->Name = L"button6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &BasicForm::button6_Click);
			// 
			// checkBox1
			// 
			resources->ApplyResources(this->checkBox1, L"checkBox1");
			this->checkBox1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->checkBox1->ForeColor = System::Drawing::Color::White;
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &BasicForm::checkBox1_CheckedChanged);
			// 
			// label14
			// 
			resources->ApplyResources(this->label14, L"label14");
			this->label14->BackColor = System::Drawing::SystemColors::Control;
			this->label14->ForeColor = System::Drawing::Color::Black;
			this->label14->Name = L"label14";
			// 
			// label15
			// 
			resources->ApplyResources(this->label15, L"label15");
			this->label15->BackColor = System::Drawing::SystemColors::Control;
			this->label15->ForeColor = System::Drawing::Color::Black;
			this->label15->Name = L"label15";
			// 
			// label16
			// 
			resources->ApplyResources(this->label16, L"label16");
			this->label16->BackColor = System::Drawing::SystemColors::Control;
			this->label16->ForeColor = System::Drawing::Color::Black;
			this->label16->Name = L"label16";
			// 
			// PuntosDiariosLabel
			// 
			resources->ApplyResources(this->PuntosDiariosLabel, L"PuntosDiariosLabel");
			this->PuntosDiariosLabel->BackColor = System::Drawing::SystemColors::Control;
			this->PuntosDiariosLabel->ForeColor = System::Drawing::Color::Black;
			this->PuntosDiariosLabel->Name = L"PuntosDiariosLabel";
			// 
			// label13
			// 
			resources->ApplyResources(this->label13, L"label13");
			this->label13->BackColor = System::Drawing::SystemColors::Control;
			this->label13->ForeColor = System::Drawing::Color::Black;
			this->label13->Name = L"label13";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Control;
			this->panel1->Controls->Add(this->panel6);
			this->panel1->Controls->Add(this->panel5);
			this->panel1->Controls->Add(this->UnidadTemplbl);
			this->panel1->Controls->Add(this->textBox5);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->textBox4);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->dtpWeatherStationBasic);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label4);
			resources->ApplyResources(this->panel1, L"panel1");
			this->panel1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel1->Name = L"panel1";
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &BasicForm::panel1_Paint);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::Control;
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->label11);
			this->panel2->Controls->Add(this->ptslabel);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->button7);
			this->panel2->Controls->Add(this->label13);
			this->panel2->Controls->Add(this->PuntosDiariosLabel);
			this->panel2->Controls->Add(this->linkLabel2);
			this->panel2->ForeColor = System::Drawing::Color::Black;
			resources->ApplyResources(this->panel2, L"panel2");
			this->panel2->Name = L"panel2";
			// 
			// label8
			// 
			resources->ApplyResources(this->label8, L"label8");
			this->label8->BackColor = System::Drawing::SystemColors::Control;
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Name = L"label8";
			// 
			// label9
			// 
			resources->ApplyResources(this->label9, L"label9");
			this->label9->BackColor = System::Drawing::SystemColors::Control;
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Name = L"label9";
			// 
			// label11
			// 
			resources->ApplyResources(this->label11, L"label11");
			this->label11->BackColor = System::Drawing::SystemColors::Control;
			this->label11->ForeColor = System::Drawing::Color::Black;
			this->label11->Name = L"label11";
			// 
			// ptslabel
			// 
			resources->ApplyResources(this->ptslabel, L"ptslabel");
			this->ptslabel->BackColor = System::Drawing::SystemColors::Control;
			this->ptslabel->ForeColor = System::Drawing::Color::Black;
			this->ptslabel->Name = L"ptslabel";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel4->Controls->Add(this->label6);
			this->panel4->Controls->Add(this->label10);
			this->panel4->Controls->Add(this->checkBox1);
			this->panel4->Controls->Add(this->panel2);
			resources->ApplyResources(this->panel4, L"panel4");
			this->panel4->Name = L"panel4";
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->label1);
			this->panel5->Controls->Add(this->pictureBox1);
			this->panel5->Controls->Add(this->comboBox1);
			resources->ApplyResources(this->panel5, L"panel5");
			this->panel5->Name = L"panel5";
			// 
			// panel6
			// 
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel6->Controls->Add(this->pictureBox4);
			this->panel6->Controls->Add(this->pictureBox5);
			this->panel6->Controls->Add(this->button5);
			this->panel6->Controls->Add(this->button2);
			this->panel6->Controls->Add(this->pictureBox3);
			this->panel6->Controls->Add(this->pictureBox2);
			this->panel6->Controls->Add(this->button4);
			this->panel6->Controls->Add(this->label16);
			this->panel6->Controls->Add(this->label15);
			this->panel6->Controls->Add(this->label14);
			this->panel6->Controls->Add(this->TriviaBtn);
			this->panel6->Controls->Add(this->button6);
			resources->ApplyResources(this->panel6, L"panel6");
			this->panel6->Name = L"panel6";
			// 
			// pictureBox3
			// 
			resources->ApplyResources(this->pictureBox3, L"pictureBox3");
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			resources->ApplyResources(this->pictureBox2, L"pictureBox2");
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox4
			// 
			resources->ApplyResources(this->pictureBox4, L"pictureBox4");
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			resources->ApplyResources(this->pictureBox5, L"pictureBox5");
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->TabStop = false;
			// 
			// BasicForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ControlBox = false;
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel1);
			this->Name = L"BasicForm";
			this->Load += gcnew System::EventHandler(this, &BasicForm::BasicForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->ResumeLayout(false);

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
		//timer1->Start();
		//timer2->Start();
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
	MembresiaForm^ membform = gcnew MembresiaForm(membresiaGlobal, user);
	membform->ControlBox = false;
	membform->ShowDialog();

	membresiaGlobal = membform->GetMembresia();

	RefreshMembresia();
	ptslabel->Text = (user->PuntosTotales).ToString();
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
		SelectedIndexChanged();
	}
		   void SelectedIndexChanged() {
			   if ((comboBox1->Text == "CIA")) {
				   pictureBox1->Image = Image::FromFile("CIA.jpeg");
				   IdSensor = "1";
				   Ambiente^ CIA = Controller::Controller::QueryLastUbiGeoData("CIA");
				   if (user->ajustes->UnidadTemp == Convert::ToChar(176) + "C") {
					   textBox2->Text = (dynamic_cast<SensorTemperaturaHumedad^>(CIA->DataBase[0])->Temperatura).ToString();
				   }
				   else if (user->ajustes->UnidadTemp == Convert::ToChar(176) + "F") {
					   int temp_c = (dynamic_cast<SensorTemperaturaHumedad^>(CIA->DataBase[0])->Temperatura);
					   int temp_f = temp_c * 1.8 + 32;
					   textBox2->Text = temp_f.ToString();
				   }
				   UnidadTemplbl->Text = user->ajustes->UnidadTemp == Convert::ToChar(176) + "C" ? Convert::ToChar(176) + "C" : Convert::ToChar(176) + "F";
				   textBox3->Text = (dynamic_cast<SensorTemperaturaHumedad^>(CIA->DataBase[0])->Humedad).ToString();
				   textBox4->Text = (dynamic_cast<SensorCO^>(CIA->DataBase[1])->NivelCO).ToString();
				   textBox5->Text = (dynamic_cast<SensorCalidadAire^>(CIA->DataBase[2])->CalidadAire).ToString();
			   }
			   else if ((comboBox1->Text == "FACI")) {

				   pictureBox1->Image = Image::FromFile("FACI.jpg");
				   IdSensor = "2";
				   Ambiente^ FACI = Controller::Controller::QueryLastUbiGeoData("FACI");
				   if (user->ajustes->UnidadTemp == Convert::ToChar(176) + "C") {
					   textBox2->Text = (dynamic_cast<SensorTemperaturaHumedad^>(FACI->DataBase[0])->Temperatura).ToString();
				   }
				   else if (user->ajustes->UnidadTemp == Convert::ToChar(176) + "F") {
					   int temp_c = (dynamic_cast<SensorTemperaturaHumedad^>(FACI->DataBase[0])->Temperatura);
					   int temp_f = temp_c * 1.8 + 32;
					   textBox2->Text = temp_f.ToString();
				   }
				   UnidadTemplbl->Text = user->ajustes->UnidadTemp == Convert::ToChar(176) + "C" ? Convert::ToChar(176) + "C" : Convert::ToChar(176) + "F";
				   textBox3->Text = (dynamic_cast<SensorTemperaturaHumedad^>(FACI->DataBase[0])->Humedad).ToString();
				   textBox4->Text = (dynamic_cast<SensorCO^>(FACI->DataBase[1])->NivelCO).ToString();
				   textBox5->Text = (dynamic_cast<SensorCalidadAire^>(FACI->DataBase[2])->CalidadAire).ToString();
			   }
			   else if ((comboBox1->Text == "TINKUY")) {

				   pictureBox1->Image = Image::FromFile("TINKUY.jpg");
				   IdSensor = "3";
				   Ambiente^ TINKUY = Controller::Controller::QueryLastUbiGeoData("TINKUY");
				   if (user->ajustes->UnidadTemp == Convert::ToChar(176) + "C") {
					   textBox2->Text = (dynamic_cast<SensorTemperaturaHumedad^>(TINKUY->DataBase[0])->Temperatura).ToString();
				   }
				   else if (user->ajustes->UnidadTemp == Convert::ToChar(176) + "F") {
					   int temp_c = (dynamic_cast<SensorTemperaturaHumedad^>(TINKUY->DataBase[0])->Temperatura);
					   int temp_f = temp_c * 1.8 + 32;
					   textBox2->Text = temp_f.ToString();
				   }
				   UnidadTemplbl->Text = user->ajustes->UnidadTemp == Convert::ToChar(176) + "C" ? Convert::ToChar(176) + "C" : Convert::ToChar(176) + "F";
				   textBox3->Text = (dynamic_cast<SensorTemperaturaHumedad^>(TINKUY->DataBase[0])->Humedad).ToString();
				   textBox4->Text = (dynamic_cast<SensorCO^>(TINKUY->DataBase[1])->NivelCO).ToString();
				   textBox5->Text = (dynamic_cast<SensorCalidadAire^>(TINKUY->DataBase[2])->CalidadAire).ToString();
			   }
			   else if ((comboBox1->Text == "BIBLIOTECA CENTRAL")) {

				   pictureBox1->Image = Image::FromFile("BIBLIOTECA CENTRAL.jpg");
				   IdSensor = "4";
				   Ambiente^ BIBLIO = Controller::Controller::QueryLastUbiGeoData("BIBLIOTECA CENTRAL");
				   if (user->ajustes->UnidadTemp == Convert::ToChar(176) + "C") {
					   textBox2->Text = (dynamic_cast<SensorTemperaturaHumedad^>(BIBLIO->DataBase[0])->Temperatura).ToString();
				   }
				   else if (user->ajustes->UnidadTemp == Convert::ToChar(176) + "F") {
					   int temp_c = (dynamic_cast<SensorTemperaturaHumedad^>(BIBLIO->DataBase[0])->Temperatura);
					   int temp_f = temp_c * 1.8 + 32;
					   textBox2->Text = temp_f.ToString();
				   }				   
				   UnidadTemplbl->Text = user->ajustes->UnidadTemp == Convert::ToChar(176) + "C" ? Convert::ToChar(176) + "C" : Convert::ToChar(176) + "F";
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

			   SelectedIndexChanged();
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
				counter = 0;
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
		List<int>^ preguntas = gcnew List<int>();
		//if (preguntas por dia lleno)
		if (!Controller::Controller::ListaLlena(user->PreguntasporDia)) {
			if (user->PuntosDiarios < maxpoints) {
				//Paso de Parametros
				TriviaForm^ triviaForm = gcnew TriviaForm(user);
				triviaForm->ControlBox = false;
				triviaForm->ShowDialog();
				user = triviaForm->GetUser();
				preguntas->Add(user->Id);
				preguntas->AddRange(user->PreguntasporDia);
				Controller::Controller::UpdateUser(user);
				Controller::Controller::UpdatePreguntasporDia(preguntas);
				ptslabel->Text = (user->PuntosTotales).ToString();
				PuntosDiariosLabel->Text = user->PuntosDiarios.ToString();

			}
			else {
				MessageBox::Show("Has alcanzado el máximos de puntos por hoy. Vuelve mañana para obtener más puntos.");
			}
		}
		else {
			MessageBox::Show("Has contestado todas las preguntas por hoy. Vuelve mañana para contestar más preguntas");
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

		this->panel1->BackColor = System::Drawing::Color::Black;

		this->PuntosDiariosLabel->ForeColor = System::Drawing::Color::Black;

		this->button1->ForeColor = System::Drawing::Color::Black;
		this->button1->BackColor = System::Drawing::Color::White;


		this->button2->ForeColor = System::Drawing::Color::Black;
		this->button2->BackColor = System::Drawing::Color::White;

		this->button3->ForeColor = System::Drawing::Color::Black;
		this->button3->BackColor = System::Drawing::Color::White;

		this->button4->ForeColor = System::Drawing::Color::Black;
		this->button4->BackColor = System::Drawing::Color::White;

		this->button5->ForeColor = System::Drawing::Color::Black;
		this->button5->BackColor = System::Drawing::Color::White;

		this->button6->ForeColor = System::Drawing::Color::Black;
		this->button6->BackColor = System::Drawing::Color::White;

		this->TriviaBtn->ForeColor = System::Drawing::Color::Black;
		this->TriviaBtn->BackColor = System::Drawing::Color::White;


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
	
		this->panel1->BackColor = System::Drawing::SystemColors::Control;

		this->PuntosDiariosLabel->ForeColor = System::Drawing::Color::Black;

		this->button1->ForeColor = System::Drawing::SystemColors::Control;
		this->button1->BackColor = System::Drawing::SystemColors::MenuText;;

		this->button2->ForeColor = System::Drawing::SystemColors::Control;
		this->button2->BackColor = System::Drawing::SystemColors::MenuText;

		this->button3->ForeColor = System::Drawing::SystemColors::Control;
		this->button3->BackColor = System::Drawing::SystemColors::MenuText;

		this->button4->ForeColor = System::Drawing::SystemColors::Control;
		this->button4->BackColor = System::Drawing::SystemColors::MenuText;

		this->button5->ForeColor = System::Drawing::SystemColors::Control;
		this->button5->BackColor = System::Drawing::SystemColors::MenuText;

		this->button6->ForeColor = System::Drawing::SystemColors::Control;
		this->button6->BackColor = System::Drawing::SystemColors::MenuText;

		this->TriviaBtn->ForeColor = System::Drawing::SystemColors::Control;
		this->TriviaBtn->BackColor = System::Drawing::SystemColors::MenuText;

		//labels

				//labels

		this->label1->BackColor = System::Drawing::SystemColors::Control;
		this->label1->ForeColor = System::Drawing::Color::Black;

		this->label2->BackColor = System::Drawing::SystemColors::Control;
		this->label2->ForeColor = System::Drawing::Color::Black;

		this->label3->BackColor = System::Drawing::SystemColors::Control;
		this->label3->ForeColor = System::Drawing::Color::Black;

		this->label4->BackColor = System::Drawing::SystemColors::Control;
		this->label4->ForeColor = System::Drawing::Color::Black;


		this->label5->BackColor = System::Drawing::SystemColors::Control;
		this->label5->ForeColor = System::Drawing::Color::Black;

		this->label6->BackColor = System::Drawing::SystemColors::Control;
		this->label6->ForeColor = System::Drawing::Color::Black;

		this->label7->BackColor = System::Drawing::SystemColors::Control;
		this->label7->ForeColor = System::Drawing::Color::Black;

		this->label8->BackColor = System::Drawing::SystemColors::Control;
		this->label8->ForeColor = System::Drawing::Color::Black;

		this->label9->BackColor = System::Drawing::SystemColors::Control;
		this->label9->ForeColor = System::Drawing::Color::Black;


		this->label10->BackColor = System::Drawing::SystemColors::Control;
		this->label10->ForeColor = System::Drawing::Color::Black;


		this->label11->BackColor = System::Drawing::SystemColors::Control;
		this->label11->ForeColor = System::Drawing::Color::Black;


		this->label12->BackColor = System::Drawing::SystemColors::Control;
		this->label12->ForeColor = System::Drawing::Color::Black;


		this->label13->BackColor = System::Drawing::SystemColors::Control;
		this->label13->ForeColor = System::Drawing::Color::Black;


		this->label14->BackColor = System::Drawing::SystemColors::Control;
		this->label14->ForeColor = System::Drawing::Color::Black;

		this->label15->BackColor = System::Drawing::SystemColors::Control;
		this->label15->ForeColor = System::Drawing::Color::Black;

		this->label16->BackColor = System::Drawing::SystemColors::Control;
		this->label16->ForeColor = System::Drawing::Color::Black;
	
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
	TiendaPuntos^ tpuntos = gcnew TiendaPuntos(user);
	tpuntos->ControlBox = false;
	tpuntos->ShowDialog();
	ptslabel->Text = (user->PuntosTotales).ToString();
}
private: System::Void linkLabel2_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	InstruccionesMembresias^ imform = gcnew InstruccionesMembresias();
	imform->ControlBox = false;
	imform->ShowDialog();
}
};
}
