#pragma once

namespace WeatherStationView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Filters
	/// </summary>
	public ref class Filters : public System::Windows::Forms::Form
	{
	public:
		Filters(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�	
			this->Temp;
			this->Hum;
			this->CO;
			this->Air;
			this->MinTemp;
			this->MaxTemp;
			this->MinHum;
			this->MaxHum;
			this->MinAir;
			this->MaxAir;
			this->MinCO;
			this->MaxCO;
			this->HasRangeTemp;
			this->HasRangeHum;
			this->HasRangeCO;
			this->HasRangeAir;

			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~Filters()
		{
			if (components)
			{
				delete components;
			}
		}
	private: int HasRangeTemp = 0;
	private: int HasRangeHum = 0;
	private: int HasRangeCO = 0;
	private: int HasRangeAir = 0;

	private: double Temp = 0;
	private: double MinTemp = 0;
	private: double MaxTemp = 1000000;

	private: int Hum = 0;
	private: int MinHum = 0;
	private: int MaxHum = 1000000;

	private: int CO = 0;
	private: int MinCO = 0;
	private: int MaxCO = 1000000;

	private: int Air = 0;
	private: int MinAir = 0;
	private: int MaxAir = 1000000;
	private: System::Windows::Forms::DataGridView^ dgvFilter;


	private: System::Windows::Forms::TextBox^ txtMinTemp;
	private: System::Windows::Forms::TextBox^ txtMaxTemp;


	private: System::Windows::Forms::Label^ lblTemperature;
	private: System::Windows::Forms::Label^ lblHumidity;
	private: System::Windows::Forms::Label^ lblCO;
	private: System::Windows::Forms::Label^ lblAirQuality;
	private: System::Windows::Forms::TextBox^ txtTemp;
	private: System::Windows::Forms::TextBox^ txtMinHum;
	private: System::Windows::Forms::TextBox^ txtMinCO;
	private: System::Windows::Forms::TextBox^ txtMinAir;



	private: System::Windows::Forms::TextBox^ txtMaxHum;
	private: System::Windows::Forms::TextBox^ txtMaxCO;
	private: System::Windows::Forms::TextBox^ txtMaxAir;



	private: System::Windows::Forms::TextBox^ txtCO;
	private: System::Windows::Forms::TextBox^ txtAir;

	private: System::Windows::Forms::TextBox^ txtHum;
	private: System::Windows::Forms::RadioButton^ rbtnTempRange;
	private: System::Windows::Forms::RadioButton^ rbtnHumRange;
	private: System::Windows::Forms::RadioButton^ rbtnCORange;
	private: System::Windows::Forms::RadioButton^ rbtnAirRange;




	private: System::Windows::Forms::RadioButton^ rbtnTempValue;
	private: System::Windows::Forms::RadioButton^ rbtnHumValue;
	private: System::Windows::Forms::RadioButton^ rbtnCOValue;
	private: System::Windows::Forms::RadioButton^ rbtnAirValue;
	private: System::Windows::Forms::DateTimePicker^ dtpMinDate;
	private: System::Windows::Forms::DateTimePicker^ dtpMaxDate;


	private: System::Windows::Forms::TextBox^ txtMinHour;
	private: System::Windows::Forms::TextBox^ txtMinMinute;
	private: System::Windows::Forms::TextBox^ txtMaxHour;
	private: System::Windows::Forms::TextBox^ txtMaxMinute;






	private: System::Windows::Forms::Label^ lblDate;
	private: System::Windows::Forms::RadioButton^ rbtnDateRange;
	private: System::Windows::Forms::RadioButton^ rbtnDateValue;
	private: System::Windows::Forms::DateTimePicker^ dtpDate;




	private: System::Windows::Forms::TextBox^ txtHourValue;
	private: System::Windows::Forms::TextBox^ txtMinuteValue;
	private: System::Windows::Forms::ComboBox^ cmbDateMin;
	private: System::Windows::Forms::ComboBox^ cmbDateMax;
	private: System::Windows::Forms::ComboBox^ cmbDateValue;
	private: System::Windows::Forms::Button^ btnFilter;
	private: System::Windows::Forms::Button^ btnSave;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ MeasureId;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Temperature;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Unity;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Humidity;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ COConcentration;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ AirQuality;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Place;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Date;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Time;












	protected:

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dgvFilter = (gcnew System::Windows::Forms::DataGridView());
			this->MeasureId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Temperature = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Unity = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Humidity = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->COConcentration = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->AirQuality = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->txtMinTemp = (gcnew System::Windows::Forms::TextBox());
			this->txtMaxTemp = (gcnew System::Windows::Forms::TextBox());
			this->lblTemperature = (gcnew System::Windows::Forms::Label());
			this->lblHumidity = (gcnew System::Windows::Forms::Label());
			this->lblCO = (gcnew System::Windows::Forms::Label());
			this->lblAirQuality = (gcnew System::Windows::Forms::Label());
			this->txtTemp = (gcnew System::Windows::Forms::TextBox());
			this->txtMinHum = (gcnew System::Windows::Forms::TextBox());
			this->txtMinCO = (gcnew System::Windows::Forms::TextBox());
			this->txtMinAir = (gcnew System::Windows::Forms::TextBox());
			this->txtMaxHum = (gcnew System::Windows::Forms::TextBox());
			this->txtMaxCO = (gcnew System::Windows::Forms::TextBox());
			this->txtMaxAir = (gcnew System::Windows::Forms::TextBox());
			this->txtCO = (gcnew System::Windows::Forms::TextBox());
			this->txtAir = (gcnew System::Windows::Forms::TextBox());
			this->txtHum = (gcnew System::Windows::Forms::TextBox());
			this->rbtnTempRange = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnHumRange = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnCORange = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnAirRange = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnTempValue = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnHumValue = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnCOValue = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnAirValue = (gcnew System::Windows::Forms::RadioButton());
			this->dtpMinDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->dtpMaxDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->txtMinHour = (gcnew System::Windows::Forms::TextBox());
			this->txtMinMinute = (gcnew System::Windows::Forms::TextBox());
			this->txtMaxHour = (gcnew System::Windows::Forms::TextBox());
			this->txtMaxMinute = (gcnew System::Windows::Forms::TextBox());
			this->lblDate = (gcnew System::Windows::Forms::Label());
			this->rbtnDateRange = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnDateValue = (gcnew System::Windows::Forms::RadioButton());
			this->dtpDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->txtHourValue = (gcnew System::Windows::Forms::TextBox());
			this->txtMinuteValue = (gcnew System::Windows::Forms::TextBox());
			this->cmbDateMin = (gcnew System::Windows::Forms::ComboBox());
			this->cmbDateMax = (gcnew System::Windows::Forms::ComboBox());
			this->cmbDateValue = (gcnew System::Windows::Forms::ComboBox());
			this->btnFilter = (gcnew System::Windows::Forms::Button());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->Place = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Date = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Time = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvFilter))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvFilter
			// 
			this->dgvFilter->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvFilter->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->MeasureId,
					this->Temperature, this->Unity, this->Humidity, this->COConcentration, this->AirQuality, this->Place, this->Date, this->Time
			});
			this->dgvFilter->Location = System::Drawing::Point(12, 316);
			this->dgvFilter->Name = L"dgvFilter";
			this->dgvFilter->Size = System::Drawing::Size(948, 184);
			this->dgvFilter->TabIndex = 0;
			this->dgvFilter->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Filters::dataGridView1_CellContentClick);
			// 
			// MeasureId
			// 
			this->MeasureId->HeaderText = L"Measurements";
			this->MeasureId->Name = L"MeasureId";
			// 
			// Temperature
			// 
			this->Temperature->HeaderText = L"Temperature";
			this->Temperature->Name = L"Temperature";
			// 
			// Unity
			// 
			this->Unity->HeaderText = L"Unity";
			this->Unity->Name = L"Unity";
			// 
			// Humidity
			// 
			this->Humidity->HeaderText = L"Humidity";
			this->Humidity->Name = L"Humidity";
			// 
			// COConcentration
			// 
			this->COConcentration->HeaderText = L"COConcentration";
			this->COConcentration->Name = L"COConcentration";
			// 
			// AirQuality
			// 
			this->AirQuality->HeaderText = L"AirQuality";
			this->AirQuality->Name = L"AirQuality";
			// 
			// txtMinTemp
			// 
			this->txtMinTemp->Location = System::Drawing::Point(159, 22);
			this->txtMinTemp->Name = L"txtMinTemp";
			this->txtMinTemp->Size = System::Drawing::Size(49, 20);
			this->txtMinTemp->TabIndex = 1;
			this->txtMinTemp->TextChanged += gcnew System::EventHandler(this, &Filters::txtMinTemp_TextChanged);
			// 
			// txtMaxTemp
			// 
			this->txtMaxTemp->Location = System::Drawing::Point(227, 22);
			this->txtMaxTemp->Name = L"txtMaxTemp";
			this->txtMaxTemp->Size = System::Drawing::Size(49, 20);
			this->txtMaxTemp->TabIndex = 2;
			// 
			// lblTemperature
			// 
			this->lblTemperature->AutoSize = true;
			this->lblTemperature->Location = System::Drawing::Point(28, 25);
			this->lblTemperature->Name = L"lblTemperature";
			this->lblTemperature->Size = System::Drawing::Size(67, 13);
			this->lblTemperature->TabIndex = 3;
			this->lblTemperature->Text = L"Temperature";
			// 
			// lblHumidity
			// 
			this->lblHumidity->AutoSize = true;
			this->lblHumidity->Location = System::Drawing::Point(28, 57);
			this->lblHumidity->Name = L"lblHumidity";
			this->lblHumidity->Size = System::Drawing::Size(47, 13);
			this->lblHumidity->TabIndex = 4;
			this->lblHumidity->Text = L"Humidity";
			// 
			// lblCO
			// 
			this->lblCO->AutoSize = true;
			this->lblCO->Location = System::Drawing::Point(28, 89);
			this->lblCO->Name = L"lblCO";
			this->lblCO->Size = System::Drawing::Size(22, 13);
			this->lblCO->TabIndex = 5;
			this->lblCO->Text = L"CO";
			// 
			// lblAirQuality
			// 
			this->lblAirQuality->AutoSize = true;
			this->lblAirQuality->Location = System::Drawing::Point(28, 124);
			this->lblAirQuality->Name = L"lblAirQuality";
			this->lblAirQuality->Size = System::Drawing::Size(51, 13);
			this->lblAirQuality->TabIndex = 6;
			this->lblAirQuality->Text = L"AirQuality";
			// 
			// txtTemp
			// 
			this->txtTemp->Location = System::Drawing::Point(417, 28);
			this->txtTemp->Name = L"txtTemp";
			this->txtTemp->Size = System::Drawing::Size(100, 20);
			this->txtTemp->TabIndex = 7;
			// 
			// txtMinHum
			// 
			this->txtMinHum->Location = System::Drawing::Point(159, 57);
			this->txtMinHum->Name = L"txtMinHum";
			this->txtMinHum->Size = System::Drawing::Size(49, 20);
			this->txtMinHum->TabIndex = 8;
			// 
			// txtMinCO
			// 
			this->txtMinCO->Location = System::Drawing::Point(159, 89);
			this->txtMinCO->Name = L"txtMinCO";
			this->txtMinCO->Size = System::Drawing::Size(49, 20);
			this->txtMinCO->TabIndex = 9;
			// 
			// txtMinAir
			// 
			this->txtMinAir->Location = System::Drawing::Point(159, 124);
			this->txtMinAir->Name = L"txtMinAir";
			this->txtMinAir->Size = System::Drawing::Size(49, 20);
			this->txtMinAir->TabIndex = 10;
			// 
			// txtMaxHum
			// 
			this->txtMaxHum->Location = System::Drawing::Point(227, 57);
			this->txtMaxHum->Name = L"txtMaxHum";
			this->txtMaxHum->Size = System::Drawing::Size(49, 20);
			this->txtMaxHum->TabIndex = 11;
			// 
			// txtMaxCO
			// 
			this->txtMaxCO->Location = System::Drawing::Point(227, 89);
			this->txtMaxCO->Name = L"txtMaxCO";
			this->txtMaxCO->Size = System::Drawing::Size(49, 20);
			this->txtMaxCO->TabIndex = 12;
			// 
			// txtMaxAir
			// 
			this->txtMaxAir->Location = System::Drawing::Point(227, 124);
			this->txtMaxAir->Name = L"txtMaxAir";
			this->txtMaxAir->Size = System::Drawing::Size(49, 20);
			this->txtMaxAir->TabIndex = 14;
			// 
			// txtCO
			// 
			this->txtCO->Location = System::Drawing::Point(417, 92);
			this->txtCO->Name = L"txtCO";
			this->txtCO->Size = System::Drawing::Size(100, 20);
			this->txtCO->TabIndex = 15;
			// 
			// txtAir
			// 
			this->txtAir->Location = System::Drawing::Point(417, 127);
			this->txtAir->Name = L"txtAir";
			this->txtAir->Size = System::Drawing::Size(100, 20);
			this->txtAir->TabIndex = 16;
			this->txtAir->TextChanged += gcnew System::EventHandler(this, &Filters::txtAir_TextChanged);
			// 
			// txtHum
			// 
			this->txtHum->Location = System::Drawing::Point(417, 60);
			this->txtHum->Name = L"txtHum";
			this->txtHum->Size = System::Drawing::Size(100, 20);
			this->txtHum->TabIndex = 17;
			// 
			// rbtnTempRange
			// 
			this->rbtnTempRange->AutoSize = true;
			this->rbtnTempRange->Location = System::Drawing::Point(118, 25);
			this->rbtnTempRange->Name = L"rbtnTempRange";
			this->rbtnTempRange->Size = System::Drawing::Size(14, 13);
			this->rbtnTempRange->TabIndex = 18;
			this->rbtnTempRange->TabStop = true;
			this->rbtnTempRange->UseVisualStyleBackColor = true;
			this->rbtnTempRange->CheckedChanged += gcnew System::EventHandler(this, &Filters::rbtnTempRange_CheckedChanged);
			// 
			// rbtnHumRange
			// 
			this->rbtnHumRange->AutoSize = true;
			this->rbtnHumRange->Location = System::Drawing::Point(118, 60);
			this->rbtnHumRange->Name = L"rbtnHumRange";
			this->rbtnHumRange->Size = System::Drawing::Size(14, 13);
			this->rbtnHumRange->TabIndex = 19;
			this->rbtnHumRange->TabStop = true;
			this->rbtnHumRange->UseVisualStyleBackColor = true;
			this->rbtnHumRange->CheckedChanged += gcnew System::EventHandler(this, &Filters::rbtnHumRange_CheckedChanged);
			// 
			// rbtnCORange
			// 
			this->rbtnCORange->AutoSize = true;
			this->rbtnCORange->Location = System::Drawing::Point(118, 92);
			this->rbtnCORange->Name = L"rbtnCORange";
			this->rbtnCORange->Size = System::Drawing::Size(14, 13);
			this->rbtnCORange->TabIndex = 20;
			this->rbtnCORange->TabStop = true;
			this->rbtnCORange->UseVisualStyleBackColor = true;
			this->rbtnCORange->CheckedChanged += gcnew System::EventHandler(this, &Filters::rbtnCORange_CheckedChanged);
			// 
			// rbtnAirRange
			// 
			this->rbtnAirRange->AutoSize = true;
			this->rbtnAirRange->Location = System::Drawing::Point(118, 127);
			this->rbtnAirRange->Name = L"rbtnAirRange";
			this->rbtnAirRange->Size = System::Drawing::Size(14, 13);
			this->rbtnAirRange->TabIndex = 21;
			this->rbtnAirRange->TabStop = true;
			this->rbtnAirRange->UseVisualStyleBackColor = true;
			this->rbtnAirRange->CheckedChanged += gcnew System::EventHandler(this, &Filters::rbtnAirRange_CheckedChanged);
			// 
			// rbtnTempValue
			// 
			this->rbtnTempValue->AutoSize = true;
			this->rbtnTempValue->Location = System::Drawing::Point(371, 28);
			this->rbtnTempValue->Name = L"rbtnTempValue";
			this->rbtnTempValue->Size = System::Drawing::Size(14, 13);
			this->rbtnTempValue->TabIndex = 22;
			this->rbtnTempValue->TabStop = true;
			this->rbtnTempValue->UseVisualStyleBackColor = true;
			this->rbtnTempValue->CheckedChanged += gcnew System::EventHandler(this, &Filters::rbtnTempValue_CheckedChanged);
			// 
			// rbtnHumValue
			// 
			this->rbtnHumValue->AutoSize = true;
			this->rbtnHumValue->Location = System::Drawing::Point(371, 63);
			this->rbtnHumValue->Name = L"rbtnHumValue";
			this->rbtnHumValue->Size = System::Drawing::Size(14, 13);
			this->rbtnHumValue->TabIndex = 23;
			this->rbtnHumValue->TabStop = true;
			this->rbtnHumValue->UseVisualStyleBackColor = true;
			this->rbtnHumValue->CheckedChanged += gcnew System::EventHandler(this, &Filters::rbtnHumValue_CheckedChanged);
			// 
			// rbtnCOValue
			// 
			this->rbtnCOValue->AutoSize = true;
			this->rbtnCOValue->Location = System::Drawing::Point(371, 95);
			this->rbtnCOValue->Name = L"rbtnCOValue";
			this->rbtnCOValue->Size = System::Drawing::Size(14, 13);
			this->rbtnCOValue->TabIndex = 24;
			this->rbtnCOValue->TabStop = true;
			this->rbtnCOValue->UseVisualStyleBackColor = true;
			this->rbtnCOValue->CheckedChanged += gcnew System::EventHandler(this, &Filters::rbtnCOValue_CheckedChanged);
			// 
			// rbtnAirValue
			// 
			this->rbtnAirValue->AutoSize = true;
			this->rbtnAirValue->Location = System::Drawing::Point(371, 130);
			this->rbtnAirValue->Name = L"rbtnAirValue";
			this->rbtnAirValue->Size = System::Drawing::Size(14, 13);
			this->rbtnAirValue->TabIndex = 25;
			this->rbtnAirValue->TabStop = true;
			this->rbtnAirValue->UseVisualStyleBackColor = true;
			this->rbtnAirValue->CheckedChanged += gcnew System::EventHandler(this, &Filters::rbtnAirValue_CheckedChanged);
			// 
			// dtpMinDate
			// 
			this->dtpMinDate->Location = System::Drawing::Point(159, 179);
			this->dtpMinDate->Name = L"dtpMinDate";
			this->dtpMinDate->Size = System::Drawing::Size(192, 20);
			this->dtpMinDate->TabIndex = 26;
			// 
			// dtpMaxDate
			// 
			this->dtpMaxDate->Location = System::Drawing::Point(159, 251);
			this->dtpMaxDate->Name = L"dtpMaxDate";
			this->dtpMaxDate->Size = System::Drawing::Size(192, 20);
			this->dtpMaxDate->TabIndex = 27;
			// 
			// txtMinHour
			// 
			this->txtMinHour->Location = System::Drawing::Point(159, 212);
			this->txtMinHour->Name = L"txtMinHour";
			this->txtMinHour->Size = System::Drawing::Size(49, 20);
			this->txtMinHour->TabIndex = 28;
			this->txtMinHour->TextChanged += gcnew System::EventHandler(this, &Filters::txtMinHour_TextChanged);
			// 
			// txtMinMinute
			// 
			this->txtMinMinute->Location = System::Drawing::Point(227, 212);
			this->txtMinMinute->Name = L"txtMinMinute";
			this->txtMinMinute->Size = System::Drawing::Size(49, 20);
			this->txtMinMinute->TabIndex = 29;
			// 
			// txtMaxHour
			// 
			this->txtMaxHour->Location = System::Drawing::Point(159, 290);
			this->txtMaxHour->Name = L"txtMaxHour";
			this->txtMaxHour->Size = System::Drawing::Size(49, 20);
			this->txtMaxHour->TabIndex = 31;
			// 
			// txtMaxMinute
			// 
			this->txtMaxMinute->Location = System::Drawing::Point(227, 290);
			this->txtMaxMinute->Name = L"txtMaxMinute";
			this->txtMaxMinute->Size = System::Drawing::Size(49, 20);
			this->txtMaxMinute->TabIndex = 32;
			// 
			// lblDate
			// 
			this->lblDate->AutoSize = true;
			this->lblDate->Location = System::Drawing::Point(28, 185);
			this->lblDate->Name = L"lblDate";
			this->lblDate->Size = System::Drawing::Size(30, 13);
			this->lblDate->TabIndex = 34;
			this->lblDate->Text = L"Date";
			// 
			// rbtnDateRange
			// 
			this->rbtnDateRange->AutoSize = true;
			this->rbtnDateRange->Location = System::Drawing::Point(118, 179);
			this->rbtnDateRange->Name = L"rbtnDateRange";
			this->rbtnDateRange->Size = System::Drawing::Size(14, 13);
			this->rbtnDateRange->TabIndex = 35;
			this->rbtnDateRange->TabStop = true;
			this->rbtnDateRange->UseVisualStyleBackColor = true;
			this->rbtnDateRange->CheckedChanged += gcnew System::EventHandler(this, &Filters::rbtnDateRange_CheckedChanged);
			// 
			// rbtnDateValue
			// 
			this->rbtnDateValue->AutoSize = true;
			this->rbtnDateValue->Location = System::Drawing::Point(371, 179);
			this->rbtnDateValue->Name = L"rbtnDateValue";
			this->rbtnDateValue->Size = System::Drawing::Size(14, 13);
			this->rbtnDateValue->TabIndex = 36;
			this->rbtnDateValue->TabStop = true;
			this->rbtnDateValue->UseVisualStyleBackColor = true;
			this->rbtnDateValue->CheckedChanged += gcnew System::EventHandler(this, &Filters::rbtnDateValue_CheckedChanged);
			// 
			// dtpDate
			// 
			this->dtpDate->Location = System::Drawing::Point(406, 179);
			this->dtpDate->Name = L"dtpDate";
			this->dtpDate->Size = System::Drawing::Size(192, 20);
			this->dtpDate->TabIndex = 37;
			// 
			// txtHourValue
			// 
			this->txtHourValue->Location = System::Drawing::Point(406, 212);
			this->txtHourValue->Name = L"txtHourValue";
			this->txtHourValue->Size = System::Drawing::Size(49, 20);
			this->txtHourValue->TabIndex = 38;
			// 
			// txtMinuteValue
			// 
			this->txtMinuteValue->Location = System::Drawing::Point(478, 212);
			this->txtMinuteValue->Name = L"txtMinuteValue";
			this->txtMinuteValue->Size = System::Drawing::Size(49, 20);
			this->txtMinuteValue->TabIndex = 39;
			// 
			// cmbDateMin
			// 
			this->cmbDateMin->FormattingEnabled = true;
			this->cmbDateMin->Location = System::Drawing::Point(299, 212);
			this->cmbDateMin->Name = L"cmbDateMin";
			this->cmbDateMin->Size = System::Drawing::Size(52, 21);
			this->cmbDateMin->TabIndex = 40;
			// 
			// cmbDateMax
			// 
			this->cmbDateMax->FormattingEnabled = true;
			this->cmbDateMax->Location = System::Drawing::Point(299, 289);
			this->cmbDateMax->Name = L"cmbDateMax";
			this->cmbDateMax->Size = System::Drawing::Size(52, 21);
			this->cmbDateMax->TabIndex = 41;
			// 
			// cmbDateValue
			// 
			this->cmbDateValue->FormattingEnabled = true;
			this->cmbDateValue->Location = System::Drawing::Point(546, 212);
			this->cmbDateValue->Name = L"cmbDateValue";
			this->cmbDateValue->Size = System::Drawing::Size(52, 21);
			this->cmbDateValue->TabIndex = 42;
			// 
			// btnFilter
			// 
			this->btnFilter->Location = System::Drawing::Point(12, 251);
			this->btnFilter->Name = L"btnFilter";
			this->btnFilter->Size = System::Drawing::Size(90, 44);
			this->btnFilter->TabIndex = 43;
			this->btnFilter->Text = L"Filter";
			this->btnFilter->UseVisualStyleBackColor = true;
			this->btnFilter->Click += gcnew System::EventHandler(this, &Filters::btnFilter_Click);
			// 
			// btnSave
			// 
			this->btnSave->Location = System::Drawing::Point(565, 28);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(90, 44);
			this->btnSave->TabIndex = 44;
			this->btnSave->Text = L"Save";
			this->btnSave->UseVisualStyleBackColor = true;
			this->btnSave->Click += gcnew System::EventHandler(this, &Filters::btnSave_Click);
			// 
			// Place
			// 
			this->Place->HeaderText = L"Place";
			this->Place->Name = L"Place";
			// 
			// Date
			// 
			this->Date->HeaderText = L"Date";
			this->Date->Name = L"Date";
			// 
			// Time
			// 
			this->Time->HeaderText = L"Time";
			this->Time->Name = L"Time";
			// 
			// Filters
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(998, 512);
			this->Controls->Add(this->btnSave);
			this->Controls->Add(this->btnFilter);
			this->Controls->Add(this->cmbDateValue);
			this->Controls->Add(this->cmbDateMax);
			this->Controls->Add(this->cmbDateMin);
			this->Controls->Add(this->txtMinuteValue);
			this->Controls->Add(this->txtHourValue);
			this->Controls->Add(this->dtpDate);
			this->Controls->Add(this->rbtnDateValue);
			this->Controls->Add(this->rbtnDateRange);
			this->Controls->Add(this->lblDate);
			this->Controls->Add(this->txtMaxMinute);
			this->Controls->Add(this->txtMaxHour);
			this->Controls->Add(this->txtMinMinute);
			this->Controls->Add(this->txtMinHour);
			this->Controls->Add(this->dtpMaxDate);
			this->Controls->Add(this->dtpMinDate);
			this->Controls->Add(this->rbtnAirValue);
			this->Controls->Add(this->rbtnCOValue);
			this->Controls->Add(this->rbtnHumValue);
			this->Controls->Add(this->rbtnTempValue);
			this->Controls->Add(this->rbtnAirRange);
			this->Controls->Add(this->rbtnCORange);
			this->Controls->Add(this->rbtnHumRange);
			this->Controls->Add(this->rbtnTempRange);
			this->Controls->Add(this->txtHum);
			this->Controls->Add(this->txtAir);
			this->Controls->Add(this->txtCO);
			this->Controls->Add(this->txtMaxAir);
			this->Controls->Add(this->txtMaxCO);
			this->Controls->Add(this->txtMaxHum);
			this->Controls->Add(this->txtMinAir);
			this->Controls->Add(this->txtMinCO);
			this->Controls->Add(this->txtMinHum);
			this->Controls->Add(this->txtTemp);
			this->Controls->Add(this->lblAirQuality);
			this->Controls->Add(this->lblCO);
			this->Controls->Add(this->lblHumidity);
			this->Controls->Add(this->lblTemperature);
			this->Controls->Add(this->txtMaxTemp);
			this->Controls->Add(this->txtMinTemp);
			this->Controls->Add(this->dgvFilter);
			this->Name = L"Filters";
			this->Text = L"Filters";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvFilter))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void txtMinTemp_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
    private: System::Void txtAir_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
	private: System::Void txtMinHour_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
    private: System::Void rbtnTempRange_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		//Hablitamos escribir rango de Temp
		txtMinTemp->ReadOnly = false;
		txtMaxTemp->ReadOnly = false;

		if (rbtnTempRange->Checked) {
			//Deshabilitar valor fijo de Temp
			rbtnTempValue->Checked = false;
			txtTemp->ReadOnly = true;
	   }
	}
    private: System::Void rbtnTempValue_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		//Habilitamos escribir valor dijo de Temp
		txtTemp->ReadOnly = false;
		if (rbtnTempValue->Checked) {
			//Deshabilitar rango de Temp
			rbtnTempRange->Checked = false;
			txtMinTemp->ReadOnly = true;
			txtMaxTemp->ReadOnly = true;
		}
	}
    private: System::Void rbtnHumRange_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		//Hablitamos escribir rango de Hum
		txtMinHum->ReadOnly = false;
		txtMaxHum->ReadOnly = false;

		if (rbtnHumRange->Checked) {
			//Deshabilitar valor fijo de Hum
			rbtnHumValue->Checked = false;
			txtHum->ReadOnly = true;
		}
	} 
    private: System::Void rbtnHumValue_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		//Habilitamos escribir valor dijo de Hum
		txtHum->ReadOnly = false;
		if (rbtnHumValue->Checked) {
			//Deshabilitar rango de Hum
			rbtnHumRange->Checked = false;
			txtMinHum->ReadOnly = true;
			txtMaxHum->ReadOnly = true;
		}
	}
    private: System::Void rbtnCORange_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		//Hablitamos escribir rango de CO
		txtMinCO->ReadOnly = false;
		txtMaxCO->ReadOnly = false;

		if (rbtnCORange->Checked) {
			//Deshabilitar valor fijo de CO
			rbtnCOValue->Checked = false;
			txtCO->ReadOnly = true;
		}
	}
    private: System::Void rbtnCOValue_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		//Habilitamos escribir valor dijo de CO
		txtCO->ReadOnly = false;
		if (rbtnCOValue->Checked) {
			//Deshabilitar rango de CO
			rbtnCORange->Checked = false;
			txtMinCO->ReadOnly = true;
			txtMaxCO->ReadOnly = true;
		}
	}
    private: System::Void rbtnAirRange_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		//Hablitamos escribir rango de Air
		txtMinAir->ReadOnly = false;
		txtMaxAir->ReadOnly = false;

		if (rbtnAirRange->Checked) {
			//Deshabilitar valor fijo de Air
			rbtnAirValue->Checked = false;
			txtAir->ReadOnly = true;
		}
	}
    private: System::Void rbtnAirValue_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		//Habilitamos escribir valor dijo de Air
		txtAir->ReadOnly = false;
		if (rbtnAirValue->Checked) {
			//Deshabilitar rango de Air
			rbtnAirRange->Checked = false;
			txtMinAir->ReadOnly = true;
			txtMaxAir->ReadOnly = true;
		}
	}
    private: System::Void rbtnDateRange_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		//Hablitamos escribir rango de Date
		txtMinHour->ReadOnly = false;
		txtMinMinute->ReadOnly = false;
		cmbDateMin->Enabled = true;
		dtpMinDate->Enabled = true;

		txtMaxHour->ReadOnly = false;
		txtMaxMinute->ReadOnly = false;
		cmbDateMax->Enabled = true;
		dtpMaxDate->Enabled = true;

		if (rbtnDateRange->Checked) {
			//Deshabilitar valor fijo de Temp
			rbtnDateValue->Checked = false;

			txtHourValue->ReadOnly = true;
			txtMinuteValue->ReadOnly = true;
			cmbDateValue->Enabled = false;
			dtpDate->Enabled = false;
		}
	}
    private: System::Void rbtnDateValue_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		//Habilitar valor fijo de Temp
		

		txtHourValue->ReadOnly = false;
		txtMinuteValue->ReadOnly = false;
		cmbDateValue->Enabled = true;
		dtpDate->Enabled = true;

		if (rbtnDateValue->Checked) {

		    //DesHablitamos escribir rango de Date
			rbtnDateRange->Checked = false;
			txtMinHour->ReadOnly = true;
			txtMinMinute->ReadOnly =true;
			cmbDateMin->Enabled =false;
			dtpMinDate->Enabled =false;

			txtMaxHour->ReadOnly = true;
			txtMaxMinute->ReadOnly = true;
			cmbDateMax->Enabled = false;
			dtpMaxDate->Enabled = false;

		}
	} 
    
    private: System::Void btnSave_Click(System::Object^ sender, System::EventArgs^ e) {	
		if (rbtnTempRange->Checked) {
			MinTemp= Double::Parse(txtMinTemp->Text);
			MaxTemp = Double::Parse(txtMaxTemp->Text);
			HasRangeTemp = 1;
		}
		else {
			Temp = Double::Parse(txtTemp->Text);
			HasRangeTemp = 0;
		}

		if (rbtnHumRange->Checked) {
			MinHum = Int32::Parse(txtMinHum->Text);
			MaxHum = Int32::Parse(txtMaxHum->Text);
			HasRangeHum = 1;
		}
		else {
			Hum = Int32::Parse(txtHum->Text);
			HasRangeHum = 0;
		}

		if (rbtnCORange->Checked) {
			MinCO = Int32::Parse(txtMinCO->Text);
			MaxCO = Int32::Parse(txtMaxCO->Text);
			HasRangeCO = 1;
		}
		else {
			CO = Int32::Parse(txtCO->Text);
			HasRangeCO = 0;
		}

		if (rbtnAirRange->Checked) {
			Air = Int32::Parse(txtAir->Text);
			HasRangeAir = 1;
		}
		else {
			MinAir = Int32::Parse(txtMinAir->Text);
			MaxAir = Int32::Parse(txtMaxAir->Text);
			HasRangeAir = 0;
		}

	}
    private: System::Void btnFilter_Click(System::Object^ sender, System::EventArgs^ e) {
		
		List<Ambiente^>^ Measurements = gcnew List<Ambiente^>(); //lista a ser filtrada

		for (int i = 0; i < Measurements->Count; i++) {

			Ambiente^ Location = Measurements[i];
			double SelectedTemp = dynamic_cast<SensorTemperaturaHumedad^>(Location->DataBase[0])->Temperatura;
			int    SelectedHum = dynamic_cast<SensorTemperaturaHumedad^>(Location->DataBase[0])->Humedad;
			int    SelectedCO = dynamic_cast<SensorCO^>(Location->DataBase[1])->NivelCO;
			int    SelectedAir = dynamic_cast<SensorCalidadAire^>(Location->DataBase[2])->CalidadAire;

			bool validTemp = ValidateTemp(SelectedTemp, Temp, MinTemp, MaxTemp, HasRangeTemp);
			bool validHum = Validate(SelectedHum, Hum, MinHum, MaxHum, HasRangeHum);
			bool validCO = Validate(SelectedCO, CO, MinCO, MaxCO, HasRangeCO);
			bool validAir = Validate(SelectedAir, Air, MinAir, MaxAir, HasRangeAir);

			for (int j = 1; j <= 4; j++) {
				if (validTemp && validHum && validCO && validAir) {
					dgvFilter->Rows->Add(gcnew array<String^> {
						"" + Location->IdMedicion,
							"" + dynamic_cast<SensorTemperaturaHumedad^>(Location->DataBase[0])->Temperatura, //temperatura
							dynamic_cast<SensorTemperaturaHumedad^>(Location->DataBase[0])->UnidadTemp,
							"" + dynamic_cast<SensorTemperaturaHumedad^>(Location->DataBase[0])->Humedad, //humedad
							"" + dynamic_cast<SensorCO^>(Location->DataBase[1])->NivelCO, //co
							"" + dynamic_cast<SensorCalidadAire^>(Location->DataBase[2])->CalidadAire, //airq
							Location->UbicacionGeografica, //ubigeo
							Location->FechaMedicion, //fecha
							Location->TiempoMedicion //hora
					});
				}
			}
		}



	}

    int ValidateTemp(double SelectedTemp,double Temp, double MinTemp,double MaxTemp, int HasRange) {
		if (HasRange==1) {
			//Si se filtra por rangos
			bool result = (MinTemp <= SelectedTemp) && (SelectedTemp <= MaxTemp);
			return result;
		}
		else {
			//Si se filtra por valor
			bool  result = (SelectedTemp == Temp);
		    return result;
		}
	}


	int Validate(int SelectedTemp, int Temp, int MinTemp, int MaxTemp, int HasRange) {
		if (HasRange == 1) {
			//Si se filtra por rangos
			bool result = (MinTemp <= SelectedTemp) && (SelectedTemp <= MaxTemp);
			return result;
		}
		else {
			//Si se filtra por valor
			bool  result = (SelectedTemp == Temp);
			return result;
		}
	}
};
}