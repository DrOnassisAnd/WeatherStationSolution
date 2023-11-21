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
	/// Resumen de ErrorWarning
	/// </summary>
	public ref class ErrorWarning : public System::Windows::Forms::Form
	{
	public:
		ErrorWarning(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			this->selectedErrorWarningId;
			this->originalErrorWarningId;
			this->StringDateTime;
			this->selectedDateTime;
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ErrorWarning()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblIdSensor;
	private: System::Windows::Forms::Label^ lbllimitValue;
	private: System::Windows::Forms::Label^ lblErrorDate;
	private: System::Windows::Forms::TextBox^ txtIdSensor;
	private: System::Windows::Forms::TextBox^ txtLimitValue;
	private: System::Windows::Forms::DateTimePicker^ dtpErrorWarning;
	private: System::Windows::Forms::DataGridView^ dgvErrorWarning;
	private: String^ selectedErrorWarningId = "";
	private: String^ originalErrorWarningId = "";
	private: String^ StringDateTime = "";
	private: DateTime selectedDateTime = DateTime(2020, 11, 20, 16, 52, 0);
 

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnIdError;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnIdSensor;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnLimitValue;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnDate;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnUpgrade;
	private: System::Windows::Forms::Button^ btnDelete;
	private: int Id;
	private: System::Windows::Forms::Label^ lblDescription;
	protected:



	protected:

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
			this->lblIdSensor = (gcnew System::Windows::Forms::Label());
			this->lbllimitValue = (gcnew System::Windows::Forms::Label());
			this->lblErrorDate = (gcnew System::Windows::Forms::Label());
			this->txtIdSensor = (gcnew System::Windows::Forms::TextBox());
			this->txtLimitValue = (gcnew System::Windows::Forms::TextBox());
			this->dtpErrorWarning = (gcnew System::Windows::Forms::DateTimePicker());
			this->dgvErrorWarning = (gcnew System::Windows::Forms::DataGridView());
			this->ColumnIdError = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnIdSensor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnLimitValue = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnDate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnUpgrade = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->lblDescription = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvErrorWarning))->BeginInit();
			this->SuspendLayout();
			// 
			// lblIdSensor
			// 
			this->lblIdSensor->AutoSize = true;
			this->lblIdSensor->Location = System::Drawing::Point(18, 43);
			this->lblIdSensor->Name = L"lblIdSensor";
			this->lblIdSensor->Size = System::Drawing::Size(49, 13);
			this->lblIdSensor->TabIndex = 0;
			this->lblIdSensor->Text = L"IdSensor";
			// 
			// lbllimitValue
			// 
			this->lbllimitValue->AutoSize = true;
			this->lbllimitValue->Location = System::Drawing::Point(15, 71);
			this->lbllimitValue->Name = L"lbllimitValue";
			this->lbllimitValue->Size = System::Drawing::Size(55, 13);
			this->lbllimitValue->TabIndex = 1;
			this->lbllimitValue->Text = L"LimitValue";
			// 
			// lblErrorDate
			// 
			this->lblErrorDate->AutoSize = true;
			this->lblErrorDate->Location = System::Drawing::Point(18, 99);
			this->lblErrorDate->Name = L"lblErrorDate";
			this->lblErrorDate->Size = System::Drawing::Size(30, 13);
			this->lblErrorDate->TabIndex = 2;
			this->lblErrorDate->Text = L"Date";
			// 
			// txtIdSensor
			// 
			this->txtIdSensor->Location = System::Drawing::Point(92, 40);
			this->txtIdSensor->Name = L"txtIdSensor";
			this->txtIdSensor->Size = System::Drawing::Size(100, 20);
			this->txtIdSensor->TabIndex = 3;
			// 
			// txtLimitValue
			// 
			this->txtLimitValue->Location = System::Drawing::Point(92, 68);
			this->txtLimitValue->Name = L"txtLimitValue";
			this->txtLimitValue->Size = System::Drawing::Size(100, 20);
			this->txtLimitValue->TabIndex = 4;
			// 
			// dtpErrorWarning
			// 
			this->dtpErrorWarning->Location = System::Drawing::Point(92, 99);
			this->dtpErrorWarning->Name = L"dtpErrorWarning";
			this->dtpErrorWarning->Size = System::Drawing::Size(200, 20);
			this->dtpErrorWarning->TabIndex = 5;
			this->dtpErrorWarning->ValueChanged += gcnew System::EventHandler(this, &ErrorWarning::dtpErrorWarning_ValueChanged);
			// 
			// dgvErrorWarning
			// 
			this->dgvErrorWarning->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvErrorWarning->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->ColumnIdError,
					this->ColumnIdSensor, this->ColumnLimitValue, this->ColumnDate
			});
			this->dgvErrorWarning->Location = System::Drawing::Point(18, 135);
			this->dgvErrorWarning->Name = L"dgvErrorWarning";
			this->dgvErrorWarning->Size = System::Drawing::Size(494, 115);
			this->dgvErrorWarning->TabIndex = 6;
			this->dgvErrorWarning->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ErrorWarning::dgvErrorWarning_CellClick);
			// 
			// ColumnIdError
			// 
			this->ColumnIdError->HeaderText = L"IdError";
			this->ColumnIdError->Name = L"ColumnIdError";
			// 
			// ColumnIdSensor
			// 
			this->ColumnIdSensor->HeaderText = L"IdSensor";
			this->ColumnIdSensor->Name = L"ColumnIdSensor";
			// 
			// ColumnLimitValue
			// 
			this->ColumnLimitValue->HeaderText = L"LimitValue";
			this->ColumnLimitValue->Name = L"ColumnLimitValue";
			// 
			// ColumnDate
			// 
			this->ColumnDate->HeaderText = L"Date";
			this->ColumnDate->Name = L"ColumnDate";
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(18, 274);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(75, 23);
			this->btnAdd->TabIndex = 7;
			this->btnAdd->Text = L"Add";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &ErrorWarning::btnAdd_Click);
			// 
			// btnUpgrade
			// 
			this->btnUpgrade->Location = System::Drawing::Point(231, 274);
			this->btnUpgrade->Name = L"btnUpgrade";
			this->btnUpgrade->Size = System::Drawing::Size(75, 23);
			this->btnUpgrade->TabIndex = 8;
			this->btnUpgrade->Text = L"Upgrade";
			this->btnUpgrade->UseVisualStyleBackColor = true;
			this->btnUpgrade->Click += gcnew System::EventHandler(this, &ErrorWarning::btnUpgrade_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(437, 274);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(75, 23);
			this->btnDelete->TabIndex = 9;
			this->btnDelete->Text = L"Delete";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &ErrorWarning::btnDelete_Click);
			// 
			// lblDescription
			// 
			this->lblDescription->AutoSize = true;
			this->lblDescription->Location = System::Drawing::Point(18, 13);
			this->lblDescription->Name = L"lblDescription";
			this->lblDescription->Size = System::Drawing::Size(152, 13);
			this->lblDescription->TabIndex = 10;
			this->lblDescription->Text = L"Insert Data from Top to Bottom";
			// 
			// ErrorWarning
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(524, 309);
			this->Controls->Add(this->lblDescription);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnUpgrade);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->dgvErrorWarning);
			this->Controls->Add(this->dtpErrorWarning);
			this->Controls->Add(this->txtLimitValue);
			this->Controls->Add(this->txtIdSensor);
			this->Controls->Add(this->lblErrorDate);
			this->Controls->Add(this->lbllimitValue);
			this->Controls->Add(this->lblIdSensor);
			this->Name = L"ErrorWarning";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ErrorWarning";
			this->Load += gcnew System::EventHandler(this, &ErrorWarning::ErrorWarning_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvErrorWarning))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ErrorWarning_Load(System::Object^ sender, System::EventArgs^ e) {
		  ShowErrorWarningData();
	}
	private: System::Void dtpErrorWarning_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		selectedDateTime = dtpErrorWarning->Value;
		StringDateTime = selectedDateTime.ToString("dd-MM-yyyy HH:mm:ss");
	}
		   private: System::Void dgvErrorWarning_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	int rowIndex = dgvErrorWarning->SelectedCells[0]->RowIndex;
	int columnIndex = dgvErrorWarning->SelectedCells[0]->ColumnIndex;
	// Ahora tienes el índice de fila (rowIndex) y el índice de columna (columnIndex) de la celda seleccionada.
	Object^ cellValue = dgvErrorWarning->Rows[rowIndex]->Cells[0]->Value;
	String^ stringValue = dynamic_cast<String^>(cellValue);
	originalErrorWarningId = stringValue;
	selectedErrorWarningId = originalErrorWarningId->Trim();

	AlertaError^ alertaError = Controller::Controller::QueryErrorWarningbyId(selectedErrorWarningId);

	int      extractedIdSensor = alertaError->IdSensor;
	double   extractedLimitValue = alertaError->limitValue;
	DateTime extractedDateTime = alertaError->ErrorDate ;

	txtIdSensor->Text = extractedIdSensor.ToString();
	txtLimitValue->Text = extractedLimitValue.ToString();
	dtpErrorWarning->Value = extractedDateTime;

}

	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ IdSensor = txtIdSensor->Text->Trim();
		String^ limitValue = txtLimitValue->Text;
		//DateTime selectedDateTime = dtpErrorWarning->Value;
		//String^ StringDateTime = selectedDateTime.ToString("dd-MM-yyyy HH:mm:ss");

		
		List<AlertaError^>^ alertaErrors = Controller::Controller::QueryErrorWarning();
		int lastIdIndex = alertaErrors->Count;  // Esto generaría una NullReferenceException
		AlertaError^ alertaError = gcnew AlertaError();

		if (lastIdIndex != 0) {
			AlertaError^ AlertaErrorLastId = alertaErrors[lastIdIndex - 1];
			int intAlertaErrorId = Int32::Parse(AlertaErrorLastId->IdError) + 1;
			alertaError->IdError = intAlertaErrorId.ToString();
			}
		else {
			alertaError->IdError = "0";
			}
		alertaError->limitValue = Double::Parse(limitValue);
		alertaError->IdSensor = Int32::Parse(IdSensor);
		alertaError->ErrorDate = DateTime::Parse(StringDateTime);
		Controller::Controller::AddErrorWarning(alertaError);
		ShowErrorWarningData();
		txtIdSensor->Text = "";
		txtLimitValue->Text = "";
	}
     void ShowErrorWarningData() {
	   List<AlertaError^>^ EWData = Controller::Controller::QueryErrorWarning();
	   dgvErrorWarning->Rows->Clear();
	   for (int i = 0; i < EWData->Count; i++) {
				   AlertaError^ EW = EWData[i];
				   dgvErrorWarning->Rows->Add(gcnew array<String^> {
					   EW->IdError->Trim(),
						   "" + EW->IdSensor,
						   "" + EW->limitValue,
						   "" + EW->ErrorDate,
				   });
			   }
		   }
private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	AlertaError^ alertaError = Controller::Controller::QueryErrorWarningbyId(selectedErrorWarningId);

	Controller::Controller::DeleteErrorWarning(selectedErrorWarningId);
	ShowErrorWarningData();
}

private: System::Void btnUpgrade_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ formatoFecha = "dd-MM-yyyy HH:mm:ss";
	if (dgvErrorWarning->SelectedCells->Count > 0) {
		AlertaError^ alertaError = gcnew AlertaError();
		alertaError->IdError = selectedErrorWarningId;
		alertaError->limitValue = Double::Parse(txtLimitValue->Text->Trim());
		alertaError->IdSensor = Int32::Parse(txtIdSensor->Text->Trim());
		alertaError->ErrorDate = DateTime::Parse(StringDateTime);;

		Controller::Controller::UpdateErrorWarning(alertaError);
		ShowErrorWarningData();
	}
}

};
}
