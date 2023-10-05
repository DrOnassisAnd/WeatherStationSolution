#pragma once

namespace WeatherStationView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnIdError;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnIdSensor;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnLimitValue;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnDate;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnUpgrade;
	private: System::Windows::Forms::Button^ btnDelete;
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->ColumnIdError = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnIdSensor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnLimitValue = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnDate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnUpgrade = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// lblIdSensor
			// 
			this->lblIdSensor->AutoSize = true;
			this->lblIdSensor->Location = System::Drawing::Point(15, 39);
			this->lblIdSensor->Name = L"lblIdSensor";
			this->lblIdSensor->Size = System::Drawing::Size(49, 13);
			this->lblIdSensor->TabIndex = 0;
			this->lblIdSensor->Text = L"IdSensor";
			// 
			// lbllimitValue
			// 
			this->lbllimitValue->AutoSize = true;
			this->lbllimitValue->Location = System::Drawing::Point(15, 66);
			this->lbllimitValue->Name = L"lbllimitValue";
			this->lbllimitValue->Size = System::Drawing::Size(55, 13);
			this->lbllimitValue->TabIndex = 1;
			this->lbllimitValue->Text = L"LimitValue";
			// 
			// lblErrorDate
			// 
			this->lblErrorDate->AutoSize = true;
			this->lblErrorDate->Location = System::Drawing::Point(15, 92);
			this->lblErrorDate->Name = L"lblErrorDate";
			this->lblErrorDate->Size = System::Drawing::Size(30, 13);
			this->lblErrorDate->TabIndex = 2;
			this->lblErrorDate->Text = L"Date";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(92, 39);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(92, 66);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 4;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(92, 93);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker1->TabIndex = 5;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->ColumnIdError,
					this->ColumnIdSensor, this->ColumnLimitValue, this->ColumnDate
			});
			this->dataGridView1->Location = System::Drawing::Point(18, 135);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(494, 115);
			this->dataGridView1->TabIndex = 6;
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
			this->btnUpgrade->Location = System::Drawing::Point(229, 274);
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
			// ErrorWarning
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(524, 309);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnUpgrade);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->lblErrorDate);
			this->Controls->Add(this->lbllimitValue);
			this->Controls->Add(this->lblIdSensor);
			this->Name = L"ErrorWarning";
			this->Text = L"ErrorWarning";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	
	
	}
private: System::Void btnUpgrade_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
