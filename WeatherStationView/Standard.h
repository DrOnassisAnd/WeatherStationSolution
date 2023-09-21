#include "Config.h"
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
	/// Resumen de Standard
	/// </summary>
	public ref class Standard : public System::Windows::Forms::Form
	{
	public:
		Standard(void)
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
		~Standard()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridView^ dgv_Period;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Period0;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Period1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Period2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Period3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Period4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Period5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Period6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Period7;


	private: System::Windows::Forms::DataGridView^ dgv_Image;








	private: System::Windows::Forms::DataGridView^ dgv_Humidity;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn13;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn14;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn15;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn16;
	private: System::Windows::Forms::DataGridView^ dgv_Temperature;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn17;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn18;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn19;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn20;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn21;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn22;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn23;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn24;
	private: System::Windows::Forms::Button^ btn_Premium;
	private: System::Windows::Forms::Button^ btn_Config;
	private: System::Windows::Forms::Button^ btn_SignOut;


	private: System::Windows::Forms::Button^ btn_Stats;
	private: System::Windows::Forms::DataGridViewImageColumn^ ejemplo;
	private: System::Windows::Forms::DataGridViewImageColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewImageColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewImageColumn^ dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewImageColumn^ dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::DataGridViewImageColumn^ dataGridViewTextBoxColumn6;
	private: System::Windows::Forms::DataGridViewImageColumn^ dataGridViewTextBoxColumn7;
	private: System::Windows::Forms::DataGridViewImageColumn^ dataGridViewTextBoxColumn8;















































































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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle13 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle14 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle15 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle16 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle17 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle18 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle19 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle20 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle21 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle22 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle23 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle24 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->dgv_Period = (gcnew System::Windows::Forms::DataGridView());
			this->Period0 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Period1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Period2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Period3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Period4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Period5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Period6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Period7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgv_Image = (gcnew System::Windows::Forms::DataGridView());
			this->ejemplo = (gcnew System::Windows::Forms::DataGridViewImageColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewImageColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewImageColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewImageColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewImageColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewImageColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewImageColumn());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewImageColumn());
			this->dgv_Humidity = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgv_Temperature = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn17 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn18 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn19 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn20 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn21 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn22 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn23 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn24 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btn_Premium = (gcnew System::Windows::Forms::Button());
			this->btn_Config = (gcnew System::Windows::Forms::Button());
			this->btn_SignOut = (gcnew System::Windows::Forms::Button());
			this->btn_Stats = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_Period))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_Image))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_Humidity))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_Temperature))->BeginInit();
			this->SuspendLayout();
			// 
			// dgv_Period
			// 
			this->dgv_Period->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->dgv_Period->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle13->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle13->BackColor = System::Drawing::SystemColors::ControlDark;
			dataGridViewCellStyle13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle13->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle13->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle13->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle13->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgv_Period->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle13;
			this->dgv_Period->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_Period->ColumnHeadersVisible = false;
			this->dgv_Period->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Period0, this->Period1,
					this->Period2, this->Period3, this->Period4, this->Period5, this->Period6, this->Period7
			});
			dataGridViewCellStyle14->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle14->BackColor = System::Drawing::Color::MidnightBlue;
			dataGridViewCellStyle14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));

			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::GradientActiveCaption;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dgv_Period->DefaultCellStyle = dataGridViewCellStyle2;

			this->dgv_Period->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->dgv_Period->Location = System::Drawing::Point(33, 132);
			this->dgv_Period->Margin = System::Windows::Forms::Padding(4);
			this->dgv_Period->Name = L"dgv_Period";
			this->dgv_Period->ReadOnly = true;
			dataGridViewCellStyle15->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle15->Font = (gcnew System::Drawing::Font(L"Elephant", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle15->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle15->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle15->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgv_Period->RowHeadersDefaultCellStyle = dataGridViewCellStyle15;
			this->dgv_Period->RowHeadersVisible = false;
			this->dgv_Period->RowHeadersWidth = 51;
			this->dgv_Period->RowTemplate->DefaultCellStyle->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->dgv_Period->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Swis721 BlkCn BT", 24, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dgv_Period->RowTemplate->DefaultCellStyle->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->dgv_Period->RowTemplate->Height = 40;
			this->dgv_Period->RowTemplate->ReadOnly = true;
			this->dgv_Period->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->dgv_Period->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->dgv_Period->Size = System::Drawing::Size(1071, 117);
			this->dgv_Period->TabIndex = 0;
			this->dgv_Period->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Standard::dgv_Period_CellContentClick);
			// 
			// Period0
			// 
			this->Period0->HeaderText = L"Day0";
			this->Period0->MinimumWidth = 6;
			this->Period0->Name = L"Period0";
			this->Period0->ReadOnly = true;
			this->Period0->Width = 125;
			// 
			// Period1
			// 
			this->Period1->HeaderText = L"Day1";
			this->Period1->MinimumWidth = 6;
			this->Period1->Name = L"Period1";
			this->Period1->ReadOnly = true;
			this->Period1->Width = 125;
			// 
			// Period2
			// 
			this->Period2->HeaderText = L"Day2";
			this->Period2->MinimumWidth = 6;
			this->Period2->Name = L"Period2";
			this->Period2->ReadOnly = true;
			this->Period2->Width = 125;
			// 
			// Period3
			// 
			this->Period3->HeaderText = L"Day3";
			this->Period3->MinimumWidth = 6;
			this->Period3->Name = L"Period3";
			this->Period3->ReadOnly = true;
			this->Period3->Width = 125;
			// 
			// Period4
			// 
			this->Period4->HeaderText = L"Day4";
			this->Period4->MinimumWidth = 6;
			this->Period4->Name = L"Period4";
			this->Period4->ReadOnly = true;
			this->Period4->Width = 125;
			// 
			// Period5
			// 
			this->Period5->HeaderText = L"Day5";
			this->Period5->MinimumWidth = 6;
			this->Period5->Name = L"Period5";
			this->Period5->ReadOnly = true;
			this->Period5->Width = 125;
			// 
			// Period6
			// 
			this->Period6->HeaderText = L"Day6";
			this->Period6->MinimumWidth = 6;
			this->Period6->Name = L"Period6";
			this->Period6->ReadOnly = true;
			this->Period6->Width = 125;
			// 
			// Period7
			// 
			this->Period7->HeaderText = L"Day7";
			this->Period7->MinimumWidth = 6;
			this->Period7->Name = L"Period7";
			this->Period7->ReadOnly = true;
			this->Period7->Width = 125;
			// 
			// dgv_Image
			// 
			dataGridViewCellStyle16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)));

			this->dgv_Image->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle4;
			this->dgv_Image->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));

			this->dgv_Image->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dgv_Image->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_Image->ColumnHeadersVisible = false;
			this->dgv_Image->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->ejemplo, this->dataGridViewTextBoxColumn2,
					this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5, this->dataGridViewTextBoxColumn6,
					this->dataGridViewTextBoxColumn7, this->dataGridViewTextBoxColumn8
			});
			dataGridViewCellStyle17->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));

			dataGridViewCellStyle5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dgv_Image->DefaultCellStyle = dataGridViewCellStyle5;

			this->dgv_Image->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->dgv_Image->Location = System::Drawing::Point(33, 256);
			this->dgv_Image->Margin = System::Windows::Forms::Padding(4);
			this->dgv_Image->Name = L"dgv_Image";
			dataGridViewCellStyle18->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle18->Font = (gcnew System::Drawing::Font(L"Elephant", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle18->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle18->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle18->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle18->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgv_Image->RowHeadersDefaultCellStyle = dataGridViewCellStyle18;
			this->dgv_Image->RowHeadersVisible = false;
			this->dgv_Image->RowHeadersWidth = 51;
			this->dgv_Image->RowTemplate->Height = 50;
			this->dgv_Image->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->dgv_Image->Size = System::Drawing::Size(1071, 187);
			this->dgv_Image->TabIndex = 1;
			this->dgv_Image->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Standard::dgv_Image_CellContentClick);
			// 
			// ejemplo
			// 

			this->dataGridViewTextBoxColumn1->HeaderText = L"Day0";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridViewTextBoxColumn1->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			this->dataGridViewTextBoxColumn1->Width = 125;

			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Day1";
			this->dataGridViewTextBoxColumn2->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridViewTextBoxColumn2->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			this->dataGridViewTextBoxColumn2->Width = 125;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"Day2";
			this->dataGridViewTextBoxColumn3->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridViewTextBoxColumn3->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			this->dataGridViewTextBoxColumn3->Width = 125;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"Day3";
			this->dataGridViewTextBoxColumn4->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridViewTextBoxColumn4->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			this->dataGridViewTextBoxColumn4->Width = 125;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"Day4";
			this->dataGridViewTextBoxColumn5->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridViewTextBoxColumn5->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			this->dataGridViewTextBoxColumn5->Width = 125;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"Day5";
			this->dataGridViewTextBoxColumn6->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridViewTextBoxColumn6->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			this->dataGridViewTextBoxColumn6->Width = 125;
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->HeaderText = L"Day6";
			this->dataGridViewTextBoxColumn7->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			this->dataGridViewTextBoxColumn7->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridViewTextBoxColumn7->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			this->dataGridViewTextBoxColumn7->Width = 125;
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->HeaderText = L"Day7";
			this->dataGridViewTextBoxColumn8->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			this->dataGridViewTextBoxColumn8->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridViewTextBoxColumn8->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			this->dataGridViewTextBoxColumn8->Width = 125;
			// 
			// dgv_Humidity
			// 
			this->dgv_Humidity->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->dgv_Humidity->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle19->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle19->BackColor = System::Drawing::SystemColors::ControlDark;
			dataGridViewCellStyle19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle19->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle19->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle19->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle19->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgv_Humidity->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle19;
			this->dgv_Humidity->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_Humidity->ColumnHeadersVisible = false;
			this->dgv_Humidity->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->dataGridViewTextBoxColumn9,
					this->dataGridViewTextBoxColumn10, this->dataGridViewTextBoxColumn11, this->dataGridViewTextBoxColumn12, this->dataGridViewTextBoxColumn13,
					this->dataGridViewTextBoxColumn14, this->dataGridViewTextBoxColumn15, this->dataGridViewTextBoxColumn16
			});
			dataGridViewCellStyle20->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle20->BackColor = System::Drawing::Color::MidnightBlue;
			dataGridViewCellStyle20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));

			dataGridViewCellStyle8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			dataGridViewCellStyle8->SelectionBackColor = System::Drawing::SystemColors::GradientActiveCaption;
			dataGridViewCellStyle8->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle8->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dgv_Humidity->DefaultCellStyle = dataGridViewCellStyle8;

			this->dgv_Humidity->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->dgv_Humidity->Location = System::Drawing::Point(33, 450);
			this->dgv_Humidity->Margin = System::Windows::Forms::Padding(4);
			this->dgv_Humidity->Name = L"dgv_Humidity";
			dataGridViewCellStyle21->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle21->Font = (gcnew System::Drawing::Font(L"Elephant", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle21->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle21->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle21->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle21->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgv_Humidity->RowHeadersDefaultCellStyle = dataGridViewCellStyle21;
			this->dgv_Humidity->RowHeadersVisible = false;
			this->dgv_Humidity->RowHeadersWidth = 51;
			this->dgv_Humidity->RowTemplate->Height = 40;
			this->dgv_Humidity->RowTemplate->ReadOnly = true;
			this->dgv_Humidity->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->dgv_Humidity->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->dgv_Humidity->Size = System::Drawing::Size(1071, 117);
			this->dgv_Humidity->TabIndex = 2;
			// 
			// dataGridViewTextBoxColumn9
			// 
			this->dataGridViewTextBoxColumn9->HeaderText = L"Day0";
			this->dataGridViewTextBoxColumn9->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
			this->dataGridViewTextBoxColumn9->Width = 125;
			// 
			// dataGridViewTextBoxColumn10
			// 
			this->dataGridViewTextBoxColumn10->HeaderText = L"Day1";
			this->dataGridViewTextBoxColumn10->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn10->Name = L"dataGridViewTextBoxColumn10";
			this->dataGridViewTextBoxColumn10->Width = 125;
			// 
			// dataGridViewTextBoxColumn11
			// 
			this->dataGridViewTextBoxColumn11->HeaderText = L"Day2";
			this->dataGridViewTextBoxColumn11->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn11->Name = L"dataGridViewTextBoxColumn11";
			this->dataGridViewTextBoxColumn11->Width = 125;
			// 
			// dataGridViewTextBoxColumn12
			// 
			this->dataGridViewTextBoxColumn12->HeaderText = L"Day3";
			this->dataGridViewTextBoxColumn12->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn12->Name = L"dataGridViewTextBoxColumn12";
			this->dataGridViewTextBoxColumn12->Width = 125;
			// 
			// dataGridViewTextBoxColumn13
			// 
			this->dataGridViewTextBoxColumn13->HeaderText = L"Day4";
			this->dataGridViewTextBoxColumn13->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn13->Name = L"dataGridViewTextBoxColumn13";
			this->dataGridViewTextBoxColumn13->Width = 125;
			// 
			// dataGridViewTextBoxColumn14
			// 
			this->dataGridViewTextBoxColumn14->HeaderText = L"Day5";
			this->dataGridViewTextBoxColumn14->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn14->Name = L"dataGridViewTextBoxColumn14";
			this->dataGridViewTextBoxColumn14->Width = 125;
			// 
			// dataGridViewTextBoxColumn15
			// 
			this->dataGridViewTextBoxColumn15->HeaderText = L"Day6";
			this->dataGridViewTextBoxColumn15->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn15->Name = L"dataGridViewTextBoxColumn15";
			this->dataGridViewTextBoxColumn15->Width = 125;
			// 
			// dataGridViewTextBoxColumn16
			// 
			this->dataGridViewTextBoxColumn16->HeaderText = L"Day7";
			this->dataGridViewTextBoxColumn16->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn16->Name = L"dataGridViewTextBoxColumn16";
			this->dataGridViewTextBoxColumn16->Width = 125;
			// 
			// dgv_Temperature
			// 
			this->dgv_Temperature->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->dgv_Temperature->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle22->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle22->BackColor = System::Drawing::SystemColors::ControlDark;
			dataGridViewCellStyle22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle22->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle22->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle22->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle22->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgv_Temperature->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle22;
			this->dgv_Temperature->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_Temperature->ColumnHeadersVisible = false;
			this->dgv_Temperature->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->dataGridViewTextBoxColumn17,
					this->dataGridViewTextBoxColumn18, this->dataGridViewTextBoxColumn19, this->dataGridViewTextBoxColumn20, this->dataGridViewTextBoxColumn21,
					this->dataGridViewTextBoxColumn22, this->dataGridViewTextBoxColumn23, this->dataGridViewTextBoxColumn24
			});
			dataGridViewCellStyle23->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle23->BackColor = System::Drawing::Color::MidnightBlue;
			dataGridViewCellStyle23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));

			dataGridViewCellStyle11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			dataGridViewCellStyle11->SelectionBackColor = System::Drawing::SystemColors::GradientActiveCaption;
			dataGridViewCellStyle11->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle11->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dgv_Temperature->DefaultCellStyle = dataGridViewCellStyle11;

			this->dgv_Temperature->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->dgv_Temperature->Location = System::Drawing::Point(33, 575);
			this->dgv_Temperature->Margin = System::Windows::Forms::Padding(4);
			this->dgv_Temperature->Name = L"dgv_Temperature";
			dataGridViewCellStyle24->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle24->Font = (gcnew System::Drawing::Font(L"Elephant", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle24->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle24->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle24->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle24->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgv_Temperature->RowHeadersDefaultCellStyle = dataGridViewCellStyle24;
			this->dgv_Temperature->RowHeadersVisible = false;
			this->dgv_Temperature->RowHeadersWidth = 51;
			this->dgv_Temperature->RowTemplate->Height = 40;
			this->dgv_Temperature->RowTemplate->ReadOnly = true;
			this->dgv_Temperature->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->dgv_Temperature->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->dgv_Temperature->Size = System::Drawing::Size(1071, 117);
			this->dgv_Temperature->TabIndex = 3;
			// 
			// dataGridViewTextBoxColumn17
			// 
			this->dataGridViewTextBoxColumn17->HeaderText = L"Day0";
			this->dataGridViewTextBoxColumn17->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn17->Name = L"dataGridViewTextBoxColumn17";
			this->dataGridViewTextBoxColumn17->Width = 125;
			// 
			// dataGridViewTextBoxColumn18
			// 
			this->dataGridViewTextBoxColumn18->HeaderText = L"Day1";
			this->dataGridViewTextBoxColumn18->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn18->Name = L"dataGridViewTextBoxColumn18";
			this->dataGridViewTextBoxColumn18->Width = 125;
			// 
			// dataGridViewTextBoxColumn19
			// 
			this->dataGridViewTextBoxColumn19->HeaderText = L"Day2";
			this->dataGridViewTextBoxColumn19->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn19->Name = L"dataGridViewTextBoxColumn19";
			this->dataGridViewTextBoxColumn19->Width = 125;
			// 
			// dataGridViewTextBoxColumn20
			// 
			this->dataGridViewTextBoxColumn20->HeaderText = L"Day3";
			this->dataGridViewTextBoxColumn20->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn20->Name = L"dataGridViewTextBoxColumn20";
			this->dataGridViewTextBoxColumn20->Width = 125;
			// 
			// dataGridViewTextBoxColumn21
			// 
			this->dataGridViewTextBoxColumn21->HeaderText = L"Day4";
			this->dataGridViewTextBoxColumn21->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn21->Name = L"dataGridViewTextBoxColumn21";
			this->dataGridViewTextBoxColumn21->Width = 125;
			// 
			// dataGridViewTextBoxColumn22
			// 
			this->dataGridViewTextBoxColumn22->HeaderText = L"Day5";
			this->dataGridViewTextBoxColumn22->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn22->Name = L"dataGridViewTextBoxColumn22";
			this->dataGridViewTextBoxColumn22->Width = 125;
			// 
			// dataGridViewTextBoxColumn23
			// 
			this->dataGridViewTextBoxColumn23->HeaderText = L"Day6";
			this->dataGridViewTextBoxColumn23->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn23->Name = L"dataGridViewTextBoxColumn23";
			this->dataGridViewTextBoxColumn23->Width = 125;
			// 
			// dataGridViewTextBoxColumn24
			// 
			this->dataGridViewTextBoxColumn24->HeaderText = L"Day7";
			this->dataGridViewTextBoxColumn24->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn24->Name = L"dataGridViewTextBoxColumn24";
			this->dataGridViewTextBoxColumn24->Width = 125;
			// 
			// btn_Premium
			// 
			this->btn_Premium->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->btn_Premium->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_Premium->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Premium->Location = System::Drawing::Point(1136, 132);
			this->btn_Premium->Margin = System::Windows::Forms::Padding(4);
			this->btn_Premium->Name = L"btn_Premium";
			this->btn_Premium->Size = System::Drawing::Size(120, 111);
			this->btn_Premium->TabIndex = 6;
			this->btn_Premium->UseVisualStyleBackColor = false;
			this->btn_Premium->Click += gcnew System::EventHandler(this, &Standard::btn_Premium_Click);
			// 
			// btn_Config
			// 
			this->btn_Config->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->btn_Config->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_Config->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Config->Location = System::Drawing::Point(1148, 288);
			this->btn_Config->Margin = System::Windows::Forms::Padding(4);
			this->btn_Config->Name = L"btn_Config";
			this->btn_Config->Size = System::Drawing::Size(120, 111);
			this->btn_Config->TabIndex = 7;
			this->btn_Config->Text = L"button3";
			this->btn_Config->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->btn_Config->UseVisualStyleBackColor = false;
			this->btn_Config->Click += gcnew System::EventHandler(this, &Standard::btn_Config_Click);
			// 
			// btn_SignOut
			// 
			this->btn_SignOut->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->btn_SignOut->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_SignOut->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_SignOut->Location = System::Drawing::Point(1148, 564);
			this->btn_SignOut->Margin = System::Windows::Forms::Padding(4);
			this->btn_SignOut->Name = L"btn_SignOut";
			this->btn_SignOut->Size = System::Drawing::Size(120, 111);
			this->btn_SignOut->TabIndex = 8;
			this->btn_SignOut->UseVisualStyleBackColor = false;
			// 
			// btn_Stats
			// 
			this->btn_Stats->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->btn_Stats->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_Stats->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Stats->Location = System::Drawing::Point(1148, 428);
			this->btn_Stats->Margin = System::Windows::Forms::Padding(4);
			this->btn_Stats->Name = L"btn_Stats";
			this->btn_Stats->Size = System::Drawing::Size(120, 111);
			this->btn_Stats->TabIndex = 9;
			this->btn_Stats->UseVisualStyleBackColor = false;
			this->btn_Stats->Click += gcnew System::EventHandler(this, &Standard::btn_Stats_Click);
			// 
			// Standard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnableAllowFocusChange;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->ClientSize = System::Drawing::Size(1312, 814);
			this->Controls->Add(this->btn_Stats);
			this->Controls->Add(this->btn_SignOut);
			this->Controls->Add(this->btn_Config);
			this->Controls->Add(this->btn_Premium);
			this->Controls->Add(this->dgv_Temperature);
			this->Controls->Add(this->dgv_Humidity);
			this->Controls->Add(this->dgv_Image);
			this->Controls->Add(this->dgv_Period);
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Standard";
			this->Opacity = 0.9;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->Text = L"Standard";
			this->Load += gcnew System::EventHandler(this, &Standard::Standard_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_Period))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_Image))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_Humidity))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_Temperature))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Standard_Load(System::Object^ sender, System::EventArgs^ e) {
		//Librería de dibujo
		System::Drawing::Font^ newFont = gcnew System::Drawing::Font("Arial", 24, FontStyle::Bold);
		DataGridViewCell^ p1 = dgv_Period->Rows[0]->Cells[1];
		DataGridViewCell^ p2 = dgv_Period->Rows[0]->Cells[2];
		DataGridViewCell^ p3 = dgv_Period->Rows[0]->Cells[3];
		DataGridViewCell^ p4 = dgv_Period->Rows[0]->Cells[4];
		DataGridViewCell^ p5 = dgv_Period->Rows[0]->Cells[5];
		DataGridViewCell^ p6 = dgv_Period->Rows[0]->Cells[6];
		DataGridViewCell^ p7 = dgv_Period->Rows[0]->Cells[7];
		//Librería de dibujo

		// Fuente de texto en celda
		p1->Style->Font = newFont;
		p2->Style->Font = newFont;
		p3->Style->Font = newFont;
		p4->Style->Font = newFont;
		p5->Style->Font = newFont;
		p6->Style->Font = newFont;
		p7->Style->Font = newFont;
		// Fuente de texto en celda

		// Color de texto en celda
		p1->Style->ForeColor = Color::Yellow;
		p2->Style->ForeColor = Color::Yellow;
		p3->Style->ForeColor = Color::Yellow;
		p4->Style->ForeColor = Color::Yellow;
		p5->Style->ForeColor = Color::Yellow;
		p6->Style->ForeColor = Color::Yellow;
		p7->Style->ForeColor = Color::Yellow;
		// Color de texto en celda

		// Alineación de texto en el centro
		p1->Style->Alignment = DataGridViewContentAlignment::MiddleCenter;
		p2->Style->Alignment = DataGridViewContentAlignment::MiddleCenter;
		p3->Style->Alignment = DataGridViewContentAlignment::MiddleCenter;
		p4->Style->Alignment = DataGridViewContentAlignment::MiddleCenter;
		p5->Style->Alignment = DataGridViewContentAlignment::MiddleCenter;
		p6->Style->Alignment = DataGridViewContentAlignment::MiddleCenter;
		p7->Style->Alignment = DataGridViewContentAlignment::MiddleCenter;
		//Alineación de texto en el centro

		//Aumento el tamaño de zelda
		for (int rowIndex = 0; rowIndex < dgv_Period->RowCount; rowIndex++) {
			dgv_Period->Rows[rowIndex]->Height = 90; // Ajusta 50 al valor deseado en píxeles
		}
		//Aumento el tamaño de celda

		// Escribo el texto de la celda
		this->dgv_Period->Rows[0]->Cells[0]->Value = "FREQUENCY";
		this->dgv_Period->Rows[0]->Cells[1]->Value = "MON";
		this->dgv_Period->Rows[0]->Cells[2]->Value = "TUE";
		this->dgv_Period->Rows[0]->Cells[3]->Value = "WED";
		this->dgv_Period->Rows[0]->Cells[4]->Value = "THU";
		this->dgv_Period->Rows[0]->Cells[5]->Value = "FRI";
		this->dgv_Period->Rows[0]->Cells[6]->Value = "SAT";
		this->dgv_Period->Rows[0]->Cells[7]->Value = "SUN";
		//Escribe el texto de la celda

		// Parámetro Temperatura
		//Librería de dibujo
		DataGridViewCell^ t1 = dgv_Temperature->Rows[0]->Cells[1];
		DataGridViewCell^ t2 = dgv_Temperature->Rows[0]->Cells[2];
		DataGridViewCell^ t3 = dgv_Temperature->Rows[0]->Cells[3];
		DataGridViewCell^ t4 = dgv_Temperature->Rows[0]->Cells[4];
		DataGridViewCell^ t5 = dgv_Temperature->Rows[0]->Cells[5];
		DataGridViewCell^ t6 = dgv_Temperature->Rows[0]->Cells[6];
		DataGridViewCell^ t7 = dgv_Temperature->Rows[0]->Cells[7];
		//Librería de dibujo

		// Fuente de texto en celda
		t1->Style->Font = newFont;
		t2->Style->Font = newFont;
		t3->Style->Font = newFont;
		t4->Style->Font = newFont;
		t5->Style->Font = newFont;
		t6->Style->Font = newFont;
		t7->Style->Font = newFont;
		// Fuente de texto en celda

		// Color de texto en celda
		t1->Style->ForeColor = Color::Yellow;
		t2->Style->ForeColor = Color::Yellow;
		t3->Style->ForeColor = Color::Yellow;
		t4->Style->ForeColor = Color::Yellow;
		t5->Style->ForeColor = Color::Yellow;
		t6->Style->ForeColor = Color::Yellow;
		t7->Style->ForeColor = Color::Yellow;
		// Color de texto en celda

		// Alineación de texto en el centro
		t1->Style->Alignment = DataGridViewContentAlignment::MiddleCenter;
		t2->Style->Alignment = DataGridViewContentAlignment::MiddleCenter;
		t3->Style->Alignment = DataGridViewContentAlignment::MiddleCenter;
		t4->Style->Alignment = DataGridViewContentAlignment::MiddleCenter;
		t5->Style->Alignment = DataGridViewContentAlignment::MiddleCenter;
		t6->Style->Alignment = DataGridViewContentAlignment::MiddleCenter;
		t7->Style->Alignment = DataGridViewContentAlignment::MiddleCenter;
		//Alineación de texto en el centro

		//Aumento el tamaño de zelda
		for (int rowIndex = 0; rowIndex < dgv_Temperature->RowCount; rowIndex++) {
			dgv_Temperature->Rows[rowIndex]->Height = 80; // Ajusta 50 al valor deseado en píxeles
		}
		//Aumento el tamaño de celda

		// Escribo el texto de la celda
		this->dgv_Temperature->Rows[0]->Cells[1]->Value = "25";
		this->dgv_Temperature->Rows[0]->Cells[2]->Value = "32";
		this->dgv_Temperature->Rows[0]->Cells[3]->Value = "28";
		this->dgv_Temperature->Rows[0]->Cells[4]->Value = "27";
		this->dgv_Temperature->Rows[0]->Cells[5]->Value = "26";
		this->dgv_Temperature->Rows[0]->Cells[6]->Value = "29";
		this->dgv_Temperature->Rows[0]->Cells[7]->Value = "30";
		//Escribe el texto de la celda
		// Parámetro Temperatura

		// Parámetro Humedad
		//Librería de dibujo
		DataGridViewCell^ h1 = dgv_Humidity->Rows[0]->Cells[1];
		DataGridViewCell^ h2 = dgv_Humidity->Rows[0]->Cells[2];
		DataGridViewCell^ h3 = dgv_Humidity->Rows[0]->Cells[3];
		DataGridViewCell^ h4 = dgv_Humidity->Rows[0]->Cells[4];
		DataGridViewCell^ h5 = dgv_Humidity->Rows[0]->Cells[5];
		DataGridViewCell^ h6 = dgv_Humidity->Rows[0]->Cells[6];
		DataGridViewCell^ h7 = dgv_Humidity->Rows[0]->Cells[7];
		//Librería de dibujo

		// Fuente de texto en celda
		h1->Style->Font = newFont;
		h2->Style->Font = newFont;
		h3->Style->Font = newFont;
		h4->Style->Font = newFont;
		h5->Style->Font = newFont;
		h6->Style->Font = newFont;
		h7->Style->Font = newFont;
		// Fuente de texto en celda

		// Color de texto en celda
		h1->Style->ForeColor = Color::White;
		h2->Style->ForeColor = Color::White;
		h3->Style->ForeColor = Color::White;
		h4->Style->ForeColor = Color::White;
		h5->Style->ForeColor = Color::White;
		h6->Style->ForeColor = Color::White;
		h7->Style->ForeColor = Color::White;
		// Color de texto en celda

		// Alineación de texto en el centro
		h1->Style->Alignment = DataGridViewContentAlignment::MiddleCenter;
		h2->Style->Alignment = DataGridViewContentAlignment::MiddleCenter;
		h3->Style->Alignment = DataGridViewContentAlignment::MiddleCenter;
		h4->Style->Alignment = DataGridViewContentAlignment::MiddleCenter;
		h5->Style->Alignment = DataGridViewContentAlignment::MiddleCenter;
		h6->Style->Alignment = DataGridViewContentAlignment::MiddleCenter;
		h7->Style->Alignment = DataGridViewContentAlignment::MiddleCenter;
		//Alineación de texto en el centro

		//Aumento el tamaño de zelda
		for (int rowIndex = 0; rowIndex < dgv_Humidity->RowCount; rowIndex++) {
			dgv_Humidity->Rows[rowIndex]->Height = 90; // Ajusta 50 al valor deseado en píxeles
		}
		//Aumento el tamaño de celda

		// Escribo el texto de la celda
		this->dgv_Humidity->Rows[0]->Cells[1]->Value = "80";
		this->dgv_Humidity->Rows[0]->Cells[2]->Value = "87";
		this->dgv_Humidity->Rows[0]->Cells[3]->Value = "85";
		this->dgv_Humidity->Rows[0]->Cells[4]->Value = "82";
		this->dgv_Humidity->Rows[0]->Cells[5]->Value = "84";
		this->dgv_Humidity->Rows[0]->Cells[6]->Value = "86";
		this->dgv_Humidity->Rows[0]->Cells[7]->Value = "90";
		//Escribe el texto de la celda
		// Parámetro Humedad

		// Imagenes

		/*
		try
		{	
			String^ ri1 = Application::StartupPath + "\\IconSunny.png";
			String^ ri2 = Application::StartupPath + "\\IconCloudSunnyRainy.png";

			String^ ri3 = Application::StartupPath + "\\IconCloudSunny.png";
			String^ ri4 = Application::StartupPath + "\\IconRainy.png";
		

			Image^ i1 = Image::FromFile(ri1);
			Image^ i2 = Image::FromFile(ri2);
			Image^ i3 = Image::FromFile(ri3);
			Image^ i4 = Image::FromFile(ri4);
				

			//dgv_Image->Rows[0]->Cells[1]->Value = i1;
			dgv_Image->Rows[0]->Cells[2]->Value = i1;
			dgv_Image->Rows[0]->Cells[3]->Value = i1;
			dgv_Image->Rows[0]->Cells[4]->Value = i1;
			dgv_Image->Rows[0]->Cells[5]->Value = i1;
			dgv_Image->Rows[0]->Cells[6]->Value = i1;

			dgv_Image->Rows[0]->Cells[7]->Value = i4;
			



			// Utiliza la imagen aquí
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Error al cargar la imagen: " + ex->Message);
		}

		*/

		//Creamos el espacio a imagen en celda
		//Aumento el tamaño de zelda
		for (int rowIndex = 0; rowIndex < dgv_Image->RowCount; rowIndex++) {
			dgv_Image->Rows[rowIndex]->Height = 120; // Ajusta 50 al valor deseado en píxeles
		}
		//Aumento el tamaño de celda
		// Imagenes

	}
	private: System::Void dgv_Data_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void dgv_Period_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void btn_Stats_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dgv_Image_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}

private: System::Void btn_Premium_Click(System::Object^ sender, System::EventArgs^ e) {

}
};
}
