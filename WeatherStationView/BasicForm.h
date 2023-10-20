#pragma once

#include "Config.h"
#include "WeatherStationForm.h"
#include "MembresiaForm.h"

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
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Hora;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Humedad;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CalidaddeAire;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Temperatura;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ Mostrar;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ Serial;
	private: System::Windows::Forms::Timer^ timer1;

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
			this->Serial = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->Mostrar = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Hora = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Humedad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CalidaddeAire = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Temperatura = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dtpWeatherStationBasic = (gcnew System::Windows::Forms::DateTimePicker());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
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
			this->label2->Location = System::Drawing::Point(602, 300);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Temperatura";
			this->label2->Click += gcnew System::EventHandler(this, &BasicForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::Info;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(602, 392);
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
			this->label4->Location = System::Drawing::Point(602, 486);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(119, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Calidad del Aire";
			this->label4->Click += gcnew System::EventHandler(this, &BasicForm::label4_Click);
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
			this->button2->Location = System::Drawing::Point(1033, 660);
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
			this->button4->Location = System::Drawing::Point(1030, 234);
			this->button4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(197, 62);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Estadística";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &BasicForm::button4_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Info;
			this->panel1->Controls->Add(this->Serial);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->Mostrar);
			this->panel1->Controls->Add(this->textBox4);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->dataGridView1);
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
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &BasicForm::panel1_Paint);
			// 
			// Serial
			// 
			this->Serial->Location = System::Drawing::Point(919, 495);
			this->Serial->Name = L"Serial";
			this->Serial->Size = System::Drawing::Size(84, 25);
			this->Serial->TabIndex = 20;
			this->Serial->Text = L"Serial";
			this->Serial->UseVisualStyleBackColor = true;
			this->Serial->Click += gcnew System::EventHandler(this, &BasicForm::Serial_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(808, 580);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(60, 20);
			this->label11->TabIndex = 19;
			this->label11->Text = L"label11";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(804, 43);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(60, 20);
			this->label10->TabIndex = 18;
			this->label10->Text = L"label10";
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
			// Mostrar
			// 
			this->Mostrar->Location = System::Drawing::Point(1033, 324);
			this->Mostrar->Name = L"Mostrar";
			this->Mostrar->Size = System::Drawing::Size(207, 77);
			this->Mostrar->TabIndex = 15;
			this->Mostrar->Text = L"Mostrar datos";
			this->Mostrar->UseVisualStyleBackColor = true;
			this->Mostrar->Click += gcnew System::EventHandler(this, &BasicForm::Mostrar_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(781, 494);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 26);
			this->textBox4->TabIndex = 14;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &BasicForm::textBox4_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(781, 392);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 26);
			this->textBox3->TabIndex = 13;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &BasicForm::textBox3_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(781, 295);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 26);
			this->textBox2->TabIndex = 12;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &BasicForm::textBox2_TextChanged);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToOrderColumns = true;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::Info;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Hora, this->Humedad,
					this->CalidaddeAire, this->Temperatura
			});
			this->dataGridView1->Location = System::Drawing::Point(177, 612);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(594, 61);
			this->dataGridView1->TabIndex = 11;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &BasicForm::dataGridView1_CellContentClick);
			// 
			// Hora
			// 
			this->Hora->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Hora->HeaderText = L"Hora";
			this->Hora->MinimumWidth = 6;
			this->Hora->Name = L"Hora";
			this->Hora->Width = 69;
			// 
			// Humedad
			// 
			this->Humedad->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Humedad->HeaderText = L"Humedad";
			this->Humedad->MinimumWidth = 6;
			this->Humedad->Name = L"Humedad";
			this->Humedad->Width = 104;
			// 
			// CalidaddeAire
			// 
			this->CalidaddeAire->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->CalidaddeAire->HeaderText = L"Calidad de Aire";
			this->CalidaddeAire->MinimumWidth = 6;
			this->CalidaddeAire->Name = L"CalidaddeAire";
			this->CalidaddeAire->Width = 141;
			// 
			// Temperatura
			// 
			this->Temperatura->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Temperatura->HeaderText = L"Temperatura";
			this->Temperatura->MinimumWidth = 6;
			this->Temperatura->Name = L"Temperatura";
			this->Temperatura->Width = 125;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(781, 211);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 26);
			this->textBox1->TabIndex = 10;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &BasicForm::textBox1_TextChanged);
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
			this->label7->Click += gcnew System::EventHandler(this, &BasicForm::label7_Click);
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
			this->label5->Click += gcnew System::EventHandler(this, &BasicForm::label5_Click);
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
			this->dtpWeatherStationBasic->ValueChanged += gcnew System::EventHandler(this, &BasicForm::dateTimePicker1_ValueChanged);
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
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &BasicForm::timer_tick);
			// 
			// BasicForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1240, 717);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"BasicForm";
			this->Text = L"BasicForm";
			this->Load += gcnew System::EventHandler(this, &BasicForm::BasicForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void BasicForm_Load(System::Object^ sender, System::EventArgs^ e) {
		
		//se abre el formulario de registro
		WeatherStationForm^ wcform = gcnew WeatherStationForm(user);
		wcform->ControlBox = false;
		wcform->ShowDialog();

		//se obtiene la clase user
		user = wcform->GetUser();
		
		//Bienvenida al usuario
		this->label8->Text = "Usuario";
		this->label9->Text = user->Name;

		//
		this->comboBox1->SelectedIndex = 0;

		//Ajustes
		Ajustes^ ajustes = gcnew Ajustes();
		ajustes = Controller::Controller::QueryPrevAjustes();
		label10->Text = ajustes->UnidadTemp;

		//timer
		timer1->Start();

		//SerialPort^ serialPort = gcnew SerialPort("COM3", 9600, Parity::None, 8, StopBits::One); // Reemplaza "COMX" con el puerto COM al que está conectado tu Arduino
		//serialPort->Open(); // Abre el puerto serie

		
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

		MessageBox::Show("Suscribete a una Membresia para poder usar esta opción");

		//Nota: To-Do: más adelante, el método deberá tener además un parámetro extra, este será la variable global User^ user
		//Esto nos servira para el control de los botones al presionar tipos de membresia
		MembresiaForm^ membform = gcnew MembresiaForm(membresiaGlobal);
		membform->ControlBox = true;
		membform->ShowDialog();

		membresiaGlobal = membform->GetMembresia();
		
		RefreshMembresia();
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	MembresiaForm^ membform = gcnew MembresiaForm(membresiaGlobal);
	membform->ControlBox = true;
	membform->ShowDialog();

	membresiaGlobal = membform->GetMembresia();

	RefreshMembresia();

}

	   void RefreshMembresia() {
		   label11->Text = membresiaGlobal->TipoMembresia;
		}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	
	this->Hide();
	
	basicForm = gcnew BasicForm();
	basicForm->Show();
	
}

private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if ((comboBox1->Text == "CIA")) {
		pictureBox1->Image = Image::FromFile("CIA.jpeg");

	}
	else if ((comboBox1->Text == "FACI")) {

		pictureBox1->Image = Image::FromFile("FACI.jpg");
	}
	else if ((comboBox1->Text == "TINKUY")) {

		pictureBox1->Image = Image::FromFile("TINKUY.jpg");
	}
	else if ((comboBox1->Text == "BIBLIOTECA CENTRAL")) {

		pictureBox1->Image = Image::FromFile("BIBLIOTECA CENTRAL.jpg");
	}
	else if ((comboBox1->Text == "")) {
		pictureBox1->Image = Image::FromFile("LogoPrueba.jpg");
	}


}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	selectedDateTime = dtpWeatherStationBasic->Value;
	StringDateTime = selectedDateTime.ToString("dd-MM-yyyy HH:mm:ss");
	textBox1->Text=StringDateTime;

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
		   this->label10->Text =config->UnidadTemp;
	   }

private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {


}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Mostrar_Click(System::Object^ sender, System::EventArgs^ e) {
	int IdMedicion = 0;
	String^ IdSensor = "";
	int day   = selectedDateTime.Day;
	int month = selectedDateTime.Month;
	int year  = selectedDateTime.Year;
	
	if ((day==5)&&(month==10)&&(year==2023)) {
		IdMedicion = 1;
		IdSensor = "1";
	}
	else if ((day == 4) && (month == 10) && (year == 2023)) {
		IdMedicion = 2;
		IdSensor = "1";
	}
	else if ((day == 3) && (month == 10) && (year == 2023)) {
		IdMedicion = 3;
		IdSensor = "1";
	}
	else if ((day == 2) && (month == 10) && (year == 2023)) {
		IdMedicion = 4;
		IdSensor = "2";
	}
	else if ((day == 1) && (month == 10) && (year == 2023)) {
		IdMedicion = 5;
		IdSensor = "2";
	}
	else if ((day == 30) && (month == 9) && (year == 2023)) {
		IdMedicion = 6;
		IdSensor = "2";
	}
	else if ((day == 29) && (month == 9) && (year == 2023)) {
		IdMedicion = 7;
		IdSensor = "3";
	}
	else if ((day == 28) && (month == 9) && (year == 2023)) {
		IdMedicion = 8;
		IdSensor = "3";
	}
	else if ((day == 27) && (month == 9) && (year == 2023)) {
		IdMedicion = 9;
		IdSensor = "3";
	}
	else if ((day == 26) && (month == 9) && (year == 2023)) {
		IdMedicion = 10;
		IdSensor = "3";
	}
	else if ((day == 25) && (month == 9) && (year == 2023)) {
		IdMedicion = 11;
		IdSensor = "3";
	}
	else {
		IdMedicion = 10;
		IdSensor = "3";
	}
	SensorTemperaturaHumedad^ sTempHum = Controller::Controller::QueryTHbyIds(IdMedicion, IdSensor);
	//Se muestra el valor de temperatura
	Double DoubleTemp = sTempHum->Temperatura;
	textBox2->Text = DoubleTemp.ToString();
	//Se muestra el valor de  humedad
	int IntHum = sTempHum->Humedad;
	textBox3->Text = IntHum.ToString();
	SensorCO^ sCO = Controller::Controller::QueryCObyIds(IdMedicion, IdSensor);
	//Se muestra el nivel de CO 
	int nivelCO = sCO->NivelCO;
	textBox4->Text = "" + nivelCO;

	double maxTemp    = 30;
	int    maxNivelCO = 450;
	int    maxHum     = 90;

	if ((DoubleTemp>=maxTemp)&&(IntHum<maxHum)&&(nivelCO<maxNivelCO)) {
		MessageBox::Show("La temperatura es alta");
	}
	else if ((DoubleTemp >= maxTemp) && (IntHum>=maxHum) && (nivelCO < maxNivelCO)) {
		MessageBox::Show("Hay temperatura y humedades altas ");
	}
	else if ((DoubleTemp >= maxTemp) && (IntHum<maxHum) && (nivelCO>=maxNivelCO)) {
		MessageBox::Show("Hay temperatura y niveles de CO altos ");
	}
	else if ((DoubleTemp >= maxTemp) && (IntHum>=maxHum) && (nivelCO >= maxNivelCO)) {
		MessageBox::Show("La temperatura, la humedad y el Nivel de CO son altos");
	}
	else if ((DoubleTemp < maxTemp) && (IntHum <maxHum) && (nivelCO >= maxNivelCO)) {
		MessageBox::Show("Presencia de niveles altos de CO");
	}
	else if ((DoubleTemp < maxTemp) && (IntHum >= maxHum) && (nivelCO >= maxNivelCO)) {
		MessageBox::Show("Presencia de niveles altos de CO y humedad altos");
	}
}


private: System::Void Serial_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ data = Controller::Controller::SendSensorsData();
	textBox4->Text = data;
}
private: System::Void timer_tick(System::Object^ sender, System::EventArgs^ e) {
	String^ data = Controller::Controller::SendSensorsData();
	textBox4->Text = data;
}
};
}
