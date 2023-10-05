#pragma once

namespace WeatherStationView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace System::Globalization;
	using namespace Model;


	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class WeatherWarningMaintenance : public System::Windows::Forms::Form
	{
	public:
		WeatherWarningMaintenance(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->selectedWeatherWarningId;
			this->originalWeatherWarningId;
			this->StringDateTime;
			this->selectedDateTime;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~WeatherWarningMaintenance()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Label^ lblValorRef;
	private: System::Windows::Forms::Label^ lblFechaHora;

	private: System::Windows::Forms::TextBox^ txtRefValue;
	private: System::Windows::Forms::DateTimePicker^ dtpDateTime;
	protected:

	protected:
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnEdit;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::DataGridView^ dgvWeatherWarning;




	private: System::Windows::Forms::Label^ lblTemp;
	private: String^ selectedWeatherWarningId="";
    private: String^ originalWeatherWarningId="";
	private: String^ StringDateTime = "";
	private: DateTime selectedDateTime = DateTime(2020, 11, 20, 16, 52, 0);
	private: System::Windows::Forms::Label^ lblIdSensor;
	private: System::Windows::Forms::TextBox^ txtIdSensor;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnIdWarning;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnIdSensor;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ columnRefValue;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ columnDate;
	private: System::Windows::Forms::Label^ lblDescription;









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
			this->lblValorRef = (gcnew System::Windows::Forms::Label());
			this->lblFechaHora = (gcnew System::Windows::Forms::Label());
			this->txtRefValue = (gcnew System::Windows::Forms::TextBox());
			this->dtpDateTime = (gcnew System::Windows::Forms::DateTimePicker());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnEdit = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->dgvWeatherWarning = (gcnew System::Windows::Forms::DataGridView());
			this->ColumnIdWarning = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnIdSensor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->columnRefValue = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->columnDate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->lblTemp = (gcnew System::Windows::Forms::Label());
			this->lblIdSensor = (gcnew System::Windows::Forms::Label());
			this->txtIdSensor = (gcnew System::Windows::Forms::TextBox());
			this->lblDescription = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvWeatherWarning))->BeginInit();
			this->SuspendLayout();
			// 
			// lblValorRef
			// 
			this->lblValorRef->AutoSize = true;
			this->lblValorRef->Location = System::Drawing::Point(45, 86);
			this->lblValorRef->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblValorRef->Name = L"lblValorRef";
			this->lblValorRef->Size = System::Drawing::Size(63, 16);
			this->lblValorRef->TabIndex = 1;
			this->lblValorRef->Text = L"RefValue";
			// 
			// lblFechaHora
			// 
			this->lblFechaHora->AutoSize = true;
			this->lblFechaHora->Location = System::Drawing::Point(45, 132);
			this->lblFechaHora->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblFechaHora->Name = L"lblFechaHora";
			this->lblFechaHora->Size = System::Drawing::Size(36, 16);
			this->lblFechaHora->TabIndex = 2;
			this->lblFechaHora->Text = L"Date";
			// 
			// txtRefValue
			// 
			this->txtRefValue->Location = System::Drawing::Point(157, 82);
			this->txtRefValue->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtRefValue->Name = L"txtRefValue";
			this->txtRefValue->Size = System::Drawing::Size(160, 22);
			this->txtRefValue->TabIndex = 4;
			// 
			// dtpDateTime
			// 
			this->dtpDateTime->Location = System::Drawing::Point(157, 123);
			this->dtpDateTime->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dtpDateTime->Name = L"dtpDateTime";
			this->dtpDateTime->Size = System::Drawing::Size(265, 22);
			this->dtpDateTime->TabIndex = 5;
			this->dtpDateTime->Value = System::DateTime(2023, 10, 2, 0, 0, 0, 0);
			this->dtpDateTime->ValueChanged += gcnew System::EventHandler(this, &WeatherWarningMaintenance::dtpDateTime_ValueChanged);
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(49, 358);
			this->btnAdd->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(100, 28);
			this->btnAdd->TabIndex = 7;
			this->btnAdd->Text = L"Add";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &WeatherWarningMaintenance::btnAdd_Click);
			// 
			// btnEdit
			// 
			this->btnEdit->Location = System::Drawing::Point(324, 358);
			this->btnEdit->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnEdit->Name = L"btnEdit";
			this->btnEdit->Size = System::Drawing::Size(100, 28);
			this->btnEdit->TabIndex = 8;
			this->btnEdit->Text = L"Edit";
			this->btnEdit->UseVisualStyleBackColor = true;
			this->btnEdit->Click += gcnew System::EventHandler(this, &WeatherWarningMaintenance::btnEdit_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(601, 358);
			this->btnDelete->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(100, 28);
			this->btnDelete->TabIndex = 9;
			this->btnDelete->Text = L"Delete";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &WeatherWarningMaintenance::btnDelete_Click);
			// 
			// dgvWeatherWarning
			// 
			this->dgvWeatherWarning->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvWeatherWarning->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->ColumnIdWarning,
					this->ColumnIdSensor, this->columnRefValue, this->columnDate
			});
			this->dgvWeatherWarning->Location = System::Drawing::Point(49, 174);
			this->dgvWeatherWarning->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dgvWeatherWarning->Name = L"dgvWeatherWarning";
			this->dgvWeatherWarning->RowHeadersWidth = 51;
			this->dgvWeatherWarning->Size = System::Drawing::Size(652, 164);
			this->dgvWeatherWarning->TabIndex = 10;
			this->dgvWeatherWarning->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &WeatherWarningMaintenance::dgvWeatherWarning_CellClick);
			this->dgvWeatherWarning->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &WeatherWarningMaintenance::dgvWeatherWarning_CellContentClick);
			// 
			// ColumnIdWarning
			// 
			this->ColumnIdWarning->HeaderText = L"IdWarning";
			this->ColumnIdWarning->MinimumWidth = 6;
			this->ColumnIdWarning->Name = L"ColumnIdWarning";
			this->ColumnIdWarning->Width = 125;
			// 
			// ColumnIdSensor
			// 
			this->ColumnIdSensor->HeaderText = L"IdSensor";
			this->ColumnIdSensor->MinimumWidth = 6;
			this->ColumnIdSensor->Name = L"ColumnIdSensor";
			this->ColumnIdSensor->Width = 125;
			// 
			// columnRefValue
			// 
			this->columnRefValue->HeaderText = L"RefValue";
			this->columnRefValue->MinimumWidth = 6;
			this->columnRefValue->Name = L"columnRefValue";
			this->columnRefValue->Width = 125;
			// 
			// columnDate
			// 
			this->columnDate->HeaderText = L"Date";
			this->columnDate->MinimumWidth = 6;
			this->columnDate->Name = L"columnDate";
			this->columnDate->Width = 125;
			// 
			// lblTemp
			// 
			this->lblTemp->AutoSize = true;
			this->lblTemp->Location = System::Drawing::Point(480, 63);
			this->lblTemp->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblTemp->Name = L"lblTemp";
			this->lblTemp->Size = System::Drawing::Size(44, 16);
			this->lblTemp->TabIndex = 11;
			this->lblTemp->Text = L"label1";
			this->lblTemp->Visible = false;
			this->lblTemp->Click += gcnew System::EventHandler(this, &WeatherWarningMaintenance::lblTemp_Click);
			// 
			// lblIdSensor
			// 
			this->lblIdSensor->AutoSize = true;
			this->lblIdSensor->Location = System::Drawing::Point(45, 43);
			this->lblIdSensor->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblIdSensor->Name = L"lblIdSensor";
			this->lblIdSensor->Size = System::Drawing::Size(61, 16);
			this->lblIdSensor->TabIndex = 12;
			this->lblIdSensor->Text = L"IdSensor";
			// 
			// txtIdSensor
			// 
			this->txtIdSensor->Location = System::Drawing::Point(157, 43);
			this->txtIdSensor->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtIdSensor->Name = L"txtIdSensor";
			this->txtIdSensor->Size = System::Drawing::Size(160, 22);
			this->txtIdSensor->TabIndex = 13;
			// 
			// lblDescription
			// 
			this->lblDescription->AutoSize = true;
			this->lblDescription->Location = System::Drawing::Point(45, 11);
			this->lblDescription->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblDescription->Name = L"lblDescription";
			this->lblDescription->Size = System::Drawing::Size(187, 16);
			this->lblDescription->TabIndex = 14;
			this->lblDescription->Text = L"Insert Data from Top to Bottom";
			// 
			// WeatherWarningMaintenance
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(717, 420);
			this->Controls->Add(this->lblDescription);
			this->Controls->Add(this->txtIdSensor);
			this->Controls->Add(this->lblIdSensor);
			this->Controls->Add(this->lblTemp);
			this->Controls->Add(this->dgvWeatherWarning);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnEdit);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->dtpDateTime);
			this->Controls->Add(this->txtRefValue);
			this->Controls->Add(this->lblFechaHora);
			this->Controls->Add(this->lblValorRef);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"WeatherWarningMaintenance";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"WeatherWarningMaintenance";
			this->Load += gcnew System::EventHandler(this, &WeatherWarningMaintenance::WeatherWarningMaintenance_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvWeatherWarning))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void dtpDateTime_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		selectedDateTime = dtpDateTime->Value;
		StringDateTime = selectedDateTime.ToString("dd-MM-yyyy HH:mm:ss");
	}
    private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void WeatherWarningMaintenance_Load(System::Object^ sender, System::EventArgs^ e) {
		ShowWeatherWarningData();
		
	}

	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		
		String^ IdSensor = txtIdSensor->Text->Trim();
		String^ RefValue = txtRefValue->Text;
		this->lblTemp->Text = StringDateTime;

		List<AlertaMeteorologica^>^ alertaMeteorologicas = Controller::Controller::QueryWeatherWarning();
		int lastIdIndex = alertaMeteorologicas->Count;
		AlertaMeteorologica^ alertaMeteorologica = gcnew AlertaMeteorologica();

		if (lastIdIndex!=0) {
			AlertaMeteorologica^ alertaMeteorologicaLastId = alertaMeteorologicas[lastIdIndex - 1];
			int intAlertaMeteorologicaId= Int32::Parse(alertaMeteorologicaLastId->IdAlerta) + 1;
			alertaMeteorologica->IdAlerta = intAlertaMeteorologicaId.ToString();	
		}
		else {
			alertaMeteorologica->IdAlerta = "0";
		}
		
		alertaMeteorologica->ValorRef = Double::Parse(RefValue);
		alertaMeteorologica->IdSensor = Int32::Parse(IdSensor);
		alertaMeteorologica->FechaHora = DateTime::Parse(StringDateTime);

		Controller::Controller::AddWeatherWarning(alertaMeteorologica);
		this->lblTemp->Text = StringDateTime;
		ShowWeatherWarningData();
		txtIdSensor->Text = "";
		txtRefValue->Text = "";
		
		
	}
		   void ShowWeatherWarningData() {
			   List<AlertaMeteorologica^>^ WWData = Controller::Controller::QueryWeatherWarning();
			   dgvWeatherWarning->Rows->Clear()	;
			   for (int i = 0; i < WWData->Count; i++) {
				   AlertaMeteorologica^ WW  = WWData[i];
				   dgvWeatherWarning->Rows->Add(gcnew array<String^> {
					   WW->IdAlerta->Trim(),
					   "" + WW->IdSensor,
				       "" + WW->ValorRef,
					   "" + WW->FechaHora,
				   });
			   }
		   }

		
  private: System::Void lblTemp_Click(System::Object^ sender, System::EventArgs^ e) {
  }

  private: System::Void dgvWeatherWarning_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) { 
		  int rowIndex = dgvWeatherWarning->SelectedCells[0]->RowIndex;
		  int columnIndex = dgvWeatherWarning->SelectedCells[0]->ColumnIndex;
		  // Ahora tienes el índice de fila (rowIndex) y el índice de columna (columnIndex) de la celda seleccionada.
		  Object^ cellValue = dgvWeatherWarning->Rows[rowIndex]->Cells[0]->Value;
		  String^ stringValue = dynamic_cast<String^>(cellValue);
		  originalWeatherWarningId = stringValue;
		  selectedWeatherWarningId = originalWeatherWarningId->Trim();

		  AlertaMeteorologica^ alertaMeteorologica = Controller::Controller::QueryWeatherWarningbyId(selectedWeatherWarningId);

		  int      extractedIdSensor = alertaMeteorologica->IdSensor;
		  double   extractedRefValue = alertaMeteorologica->ValorRef;
		  DateTime extractedDateTime = DateTime::Parse(StringDateTime);

		  txtIdSensor->Text = extractedIdSensor.ToString();
		  txtRefValue->Text = extractedRefValue.ToString();
		  dtpDateTime->Value = extractedDateTime;
  
  }

  private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {

	  AlertaMeteorologica^ alertaMeteorologica = Controller::Controller::QueryWeatherWarningbyId(selectedWeatherWarningId);
	  
	  Controller::Controller::DeleteWeatherWarning(selectedWeatherWarningId);
	  ShowWeatherWarningData();
  }

private: System::Void btnEdit_Click(System::Object^ sender, System::EventArgs^ e) {

	if (dgvWeatherWarning->SelectedCells->Count > 0) {
		AlertaMeteorologica^ alertaMeteorologica = gcnew AlertaMeteorologica();
		alertaMeteorologica->IdAlerta = selectedWeatherWarningId;
		alertaMeteorologica->ValorRef = Double::Parse(txtRefValue->Text->Trim());
		alertaMeteorologica->IdSensor = Int32::Parse(txtIdSensor->Text->Trim());
		alertaMeteorologica->FechaHora = dtpDateTime->Value;

		Controller::Controller::UpdateWeatherWarning(alertaMeteorologica);
		ShowWeatherWarningData();
	}
}

private: System::Void dgvWeatherWarning_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
