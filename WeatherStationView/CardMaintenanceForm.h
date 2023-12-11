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
	/// Resumen de MyForm
	/// </summary>
	public ref class CardMaintenanceForm : public System::Windows::Forms::Form
	{
	public:
		CardMaintenanceForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->id = 0;
			this->available = 0;
			this->selectedCard = 0;

		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~CardMaintenanceForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ UnidadTlbl;
	protected:

	private: System::Windows::Forms::Label^ AvailableLabel;
	private: System::Windows::Forms::DataGridView^ dgvCard;


	private: System::Windows::Forms::Button^ DeleteBtn;

	private: System::Windows::Forms::Button^ ModifyBtn;
	private: System::Windows::Forms::Button^ AddBtn;
	private: System::Windows::Forms::TextBox^ Balancetxtbox;
	private: System::Windows::Forms::TextBox^ CCVtxtbox;


	private: System::Windows::Forms::TextBox^ Cardtxtbox;

	private: System::Windows::Forms::Label^ BALANCELabel;

	private: System::Windows::Forms::Label^ CCVLabel;

	private: System::Windows::Forms::Label^ TempLabel;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Temperatura;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ UnidadTemperatura;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Humedad;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NivelCO;
	private: System::Windows::Forms::RadioButton^ YesRbtn;
	private: System::Windows::Forms::RadioButton^ NoRbtn;
	private: int id;
	private: int available;
	private: int selectedCard;
	private: System::Windows::Forms::Button^ button1;

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
			this->UnidadTlbl = (gcnew System::Windows::Forms::Label());
			this->AvailableLabel = (gcnew System::Windows::Forms::Label());
			this->dgvCard = (gcnew System::Windows::Forms::DataGridView());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Temperatura = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->UnidadTemperatura = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Humedad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NivelCO = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DeleteBtn = (gcnew System::Windows::Forms::Button());
			this->ModifyBtn = (gcnew System::Windows::Forms::Button());
			this->AddBtn = (gcnew System::Windows::Forms::Button());
			this->Balancetxtbox = (gcnew System::Windows::Forms::TextBox());
			this->CCVtxtbox = (gcnew System::Windows::Forms::TextBox());
			this->Cardtxtbox = (gcnew System::Windows::Forms::TextBox());
			this->BALANCELabel = (gcnew System::Windows::Forms::Label());
			this->CCVLabel = (gcnew System::Windows::Forms::Label());
			this->TempLabel = (gcnew System::Windows::Forms::Label());
			this->YesRbtn = (gcnew System::Windows::Forms::RadioButton());
			this->NoRbtn = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCard))->BeginInit();
			this->SuspendLayout();
			// 
			// UnidadTlbl
			// 
			this->UnidadTlbl->AutoSize = true;
			this->UnidadTlbl->Location = System::Drawing::Point(444, 76);
			this->UnidadTlbl->Name = L"UnidadTlbl";
			this->UnidadTlbl->Size = System::Drawing::Size(0, 13);
			this->UnidadTlbl->TabIndex = 71;
			// 
			// AvailableLabel
			// 
			this->AvailableLabel->AutoSize = true;
			this->AvailableLabel->Location = System::Drawing::Point(46, 130);
			this->AvailableLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->AvailableLabel->Name = L"AvailableLabel";
			this->AvailableLabel->Size = System::Drawing::Size(72, 13);
			this->AvailableLabel->TabIndex = 69;
			this->AvailableLabel->Text = L"Disponibilidad";
			// 
			// dgvCard
			// 
			this->dgvCard->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvCard->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column6, this->Temperatura,
					this->UnidadTemperatura, this->Humedad, this->NivelCO
			});
			this->dgvCard->Location = System::Drawing::Point(25, 229);
			this->dgvCard->Name = L"dgvCard";
			this->dgvCard->RowHeadersWidth = 51;
			this->dgvCard->Size = System::Drawing::Size(680, 177);
			this->dgvCard->TabIndex = 65;
			this->dgvCard->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CardMaintenanceForm::dgvCard_CellClick);
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Id";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 125;
			// 
			// Temperatura
			// 
			this->Temperatura->HeaderText = L"NumeroTarjeta";
			this->Temperatura->MinimumWidth = 6;
			this->Temperatura->Name = L"Temperatura";
			this->Temperatura->Width = 125;
			// 
			// UnidadTemperatura
			// 
			this->UnidadTemperatura->HeaderText = L"CCV";
			this->UnidadTemperatura->MinimumWidth = 6;
			this->UnidadTemperatura->Name = L"UnidadTemperatura";
			this->UnidadTemperatura->Width = 125;
			// 
			// Humedad
			// 
			this->Humedad->HeaderText = L"Saldo";
			this->Humedad->MinimumWidth = 6;
			this->Humedad->Name = L"Humedad";
			this->Humedad->Width = 125;
			// 
			// NivelCO
			// 
			this->NivelCO->HeaderText = L"Disponibilidad";
			this->NivelCO->MinimumWidth = 6;
			this->NivelCO->Name = L"NivelCO";
			this->NivelCO->Width = 125;
			// 
			// DeleteBtn
			// 
			this->DeleteBtn->Location = System::Drawing::Point(351, 184);
			this->DeleteBtn->Name = L"DeleteBtn";
			this->DeleteBtn->Size = System::Drawing::Size(75, 23);
			this->DeleteBtn->TabIndex = 64;
			this->DeleteBtn->Text = L"Eliminar";
			this->DeleteBtn->UseVisualStyleBackColor = true;
			this->DeleteBtn->Click += gcnew System::EventHandler(this, &CardMaintenanceForm::DeleteBtn_Click);
			// 
			// ModifyBtn
			// 
			this->ModifyBtn->Location = System::Drawing::Point(193, 184);
			this->ModifyBtn->Name = L"ModifyBtn";
			this->ModifyBtn->Size = System::Drawing::Size(75, 23);
			this->ModifyBtn->TabIndex = 63;
			this->ModifyBtn->Text = L"Modificar";
			this->ModifyBtn->UseVisualStyleBackColor = true;
			this->ModifyBtn->Click += gcnew System::EventHandler(this, &CardMaintenanceForm::ModifyBtn_Click);
			// 
			// AddBtn
			// 
			this->AddBtn->Location = System::Drawing::Point(49, 184);
			this->AddBtn->Name = L"AddBtn";
			this->AddBtn->Size = System::Drawing::Size(75, 23);
			this->AddBtn->TabIndex = 62;
			this->AddBtn->Text = L"Agregar";
			this->AddBtn->UseVisualStyleBackColor = true;
			this->AddBtn->Click += gcnew System::EventHandler(this, &CardMaintenanceForm::AddBtn_Click);
			// 
			// Balancetxtbox
			// 
			this->Balancetxtbox->Location = System::Drawing::Point(168, 101);
			this->Balancetxtbox->Name = L"Balancetxtbox";
			this->Balancetxtbox->Size = System::Drawing::Size(100, 20);
			this->Balancetxtbox->TabIndex = 59;
			// 
			// CCVtxtbox
			// 
			this->CCVtxtbox->Location = System::Drawing::Point(168, 75);
			this->CCVtxtbox->Name = L"CCVtxtbox";
			this->CCVtxtbox->Size = System::Drawing::Size(100, 20);
			this->CCVtxtbox->TabIndex = 58;
			// 
			// Cardtxtbox
			// 
			this->Cardtxtbox->Location = System::Drawing::Point(168, 48);
			this->Cardtxtbox->Name = L"Cardtxtbox";
			this->Cardtxtbox->Size = System::Drawing::Size(100, 20);
			this->Cardtxtbox->TabIndex = 57;
			// 
			// BALANCELabel
			// 
			this->BALANCELabel->AutoSize = true;
			this->BALANCELabel->Location = System::Drawing::Point(46, 101);
			this->BALANCELabel->Name = L"BALANCELabel";
			this->BALANCELabel->Size = System::Drawing::Size(34, 13);
			this->BALANCELabel->TabIndex = 56;
			this->BALANCELabel->Text = L"Saldo";
			// 
			// CCVLabel
			// 
			this->CCVLabel->AutoSize = true;
			this->CCVLabel->Location = System::Drawing::Point(46, 75);
			this->CCVLabel->Name = L"CCVLabel";
			this->CCVLabel->Size = System::Drawing::Size(28, 13);
			this->CCVLabel->TabIndex = 55;
			this->CCVLabel->Text = L"CCV";
			// 
			// TempLabel
			// 
			this->TempLabel->AutoSize = true;
			this->TempLabel->Location = System::Drawing::Point(46, 51);
			this->TempLabel->Name = L"TempLabel";
			this->TempLabel->Size = System::Drawing::Size(95, 13);
			this->TempLabel->TabIndex = 54;
			this->TempLabel->Text = L"Numero de Tarjeta";
			// 
			// YesRbtn
			// 
			this->YesRbtn->AutoSize = true;
			this->YesRbtn->Location = System::Drawing::Point(162, 130);
			this->YesRbtn->Name = L"YesRbtn";
			this->YesRbtn->Size = System::Drawing::Size(34, 17);
			this->YesRbtn->TabIndex = 72;
			this->YesRbtn->TabStop = true;
			this->YesRbtn->Text = L"Si";
			this->YesRbtn->UseVisualStyleBackColor = true;
			this->YesRbtn->CheckedChanged += gcnew System::EventHandler(this, &CardMaintenanceForm::YesRbtn_CheckedChanged);
			// 
			// NoRbtn
			// 
			this->NoRbtn->AutoSize = true;
			this->NoRbtn->Location = System::Drawing::Point(210, 130);
			this->NoRbtn->Name = L"NoRbtn";
			this->NoRbtn->Size = System::Drawing::Size(39, 17);
			this->NoRbtn->TabIndex = 73;
			this->NoRbtn->TabStop = true;
			this->NoRbtn->Text = L"No";
			this->NoRbtn->UseVisualStyleBackColor = true;
			this->NoRbtn->CheckedChanged += gcnew System::EventHandler(this, &CardMaintenanceForm::NoRbtn_CheckedChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(630, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 74;
			this->button1->Text = L"Cerrar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CardMaintenanceForm::button1_Click);
			// 
			// CardMaintenanceForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(750, 427);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->NoRbtn);
			this->Controls->Add(this->YesRbtn);
			this->Controls->Add(this->UnidadTlbl);
			this->Controls->Add(this->AvailableLabel);
			this->Controls->Add(this->dgvCard);
			this->Controls->Add(this->DeleteBtn);
			this->Controls->Add(this->ModifyBtn);
			this->Controls->Add(this->AddBtn);
			this->Controls->Add(this->Balancetxtbox);
			this->Controls->Add(this->CCVtxtbox);
			this->Controls->Add(this->Cardtxtbox);
			this->Controls->Add(this->BALANCELabel);
			this->Controls->Add(this->CCVLabel);
			this->Controls->Add(this->TempLabel);
			this->Name = L"CardMaintenanceForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CardMaintenanceForm";
			this->Load += gcnew System::EventHandler(this, &CardMaintenanceForm::CardMaintenanceForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCard))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void AddBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Cardtxtbox->Text != "" && Balancetxtbox->Text != "" && CCVtxtbox->Text != "") {
			int card;
			int balance;
			int CCV;

			bool isCardNumeric = Int32::TryParse(Cardtxtbox->Text, card);
			bool isBalanceNumeric = Int32::TryParse(Balancetxtbox->Text, balance);
			bool isCCVNumeric = Int32::TryParse(CCVtxtbox->Text, CCV);

			if (isCardNumeric && isBalanceNumeric && isCCVNumeric) {
				if (card > 0 && balance > 0 && CCV > 0) {

					List<Tarjetas^>^ tarjetaData = Controller::Controller::QueryTarjetasData();
					int lastIdIndex = tarjetaData->Count;
					Tarjetas^ tarjeta = gcnew Tarjetas();

					if (lastIdIndex == 0) {
						tarjeta->id = 1;
					}
					else {
						Tarjetas^ tarjetalastId = tarjetaData[lastIdIndex-1 ];
						tarjeta->id = (tarjetalastId->id) + 1;
					}

					//Ingresar los datos en Ambiente
					tarjeta->NumeroDeCuentaTarjeta = card;
					tarjeta->CCVTarjeta = CCV;
					tarjeta->Saldo = balance;
					tarjeta->Disponible = available;

					Controller::Controller::AddTarjetas(tarjeta);
					ShowTarjetasData();
				}
				else {
					MessageBox::Show("Los datos ingresados deben ser números positivos");
				}
			}
			else {
				MessageBox::Show("Los valores ingresados deben ser números.");
			}
		}
		else {
			MessageBox::Show("Por favor complete los espacios antes de añadir un dato.");
		}
	}
private: System::Void ModifyBtn_Click(System::Object^ sender, System::EventArgs^ e) {

	int card;
	int balance;
	int ccv;

	Int32::TryParse(Cardtxtbox->Text, card);
	Int32::TryParse(Balancetxtbox->Text, balance);
	Int32::TryParse(CCVtxtbox->Text, ccv);


	if (Cardtxtbox->Text != "" && Balancetxtbox->Text != "" && CCVtxtbox->Text != "" ) {
		if (card && ccv && balance) {
			if (card >= 0 && balance >= 0 && ccv >= 0) {

					Tarjetas^ tarjeta = gcnew Tarjetas();
					tarjeta->id = id;
					tarjeta->NumeroDeCuentaTarjeta = card;
					tarjeta->CCVTarjeta = ccv;
					tarjeta->Saldo = balance;
					tarjeta->Disponible = available;

					Controller::Controller::UpdateTarjetas(tarjeta);

					Cardtxtbox->Text = "";
					Balancetxtbox->Text = "";
					CCVtxtbox->Text = "";

					id = 0;

					ShowTarjetasData();
			}
			else {
				MessageBox::Show("Los datos ingresados deben ser números positivos");
			}
		}
		else {
			MessageBox::Show("Los datos ingresados deben ser números");
		}
	}
	else {
		MessageBox::Show("Por favor complete los datos antes de modificar.");
	}
}
private: System::Void DeleteBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	
	
	if (Controller::Controller::QueryTarjetaByNumeroCuenta(selectedCard) != nullptr) {
		Controller::Controller::DeleteTarjetas(id);

		Cardtxtbox->Text = "";
		Balancetxtbox->Text = "";
		CCVtxtbox->Text = "";
		id = 0;

		ShowTarjetasData();
	}
	else {
		MessageBox::Show("Por favor seleccione un dato antes de eliminar.");
	}

}
private: System::Void dgvCard_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (dgvCard->Rows[dgvCard->SelectedCells[0]->RowIndex]->Cells[0]->Value != nullptr) {
		selectedCard = Int32::Parse(dgvCard->Rows[dgvCard->SelectedCells[0]->RowIndex]
			->Cells[1]->Value->ToString());
		id = Int32::Parse(dgvCard->Rows[dgvCard->SelectedCells[0]->RowIndex]
			->Cells[0]->Value->ToString());
		Tarjetas^ tarjeta = Controller::Controller::QueryTarjetaByNumeroCuenta(selectedCard);
		if (tarjeta != nullptr) {
			Cardtxtbox->Text = (tarjeta->NumeroDeCuentaTarjeta).ToString();
			Balancetxtbox->Text = (tarjeta->Saldo).ToString();
			CCVtxtbox->Text = (tarjeta->CCVTarjeta).ToString();
			if (tarjeta->Disponible) {
				YesRbtn->Checked = true;
				NoRbtn->Checked = false;
			}
			else {
				NoRbtn->Checked = true;
				YesRbtn->Checked = false;
			}
		}
	}
	else {
		Cardtxtbox->Text = "";
		Balancetxtbox->Text = "";
		CCVtxtbox->Text = "";
		id = 0;
	}

}

	   void ShowTarjetasData() {
		   List<Tarjetas^>^ tarjetas = Controller::Controller::QueryTarjetasData();
		   dgvCard->Rows->Clear();
		   for (int i = 0; i < tarjetas->Count; i++) {
			   Tarjetas^ tarjeta = tarjetas[i];
			   dgvCard->Rows->Add(gcnew array<String^> {
				   "" + tarjeta->id,
				   "" + tarjeta->NumeroDeCuentaTarjeta,
				   "" + tarjeta->CCVTarjeta,
				   "" + tarjeta->Saldo,
			       "" + tarjeta->Disponible,
			   });
		   }
	   }

private: System::Void YesRbtn_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (YesRbtn->Checked) {
		NoRbtn->Checked = false;
		available = 1;
	}
}
private: System::Void NoRbtn_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (NoRbtn->Checked) {
		YesRbtn->Checked = false;
		available = 0;
	}
}
private: System::Void CardMaintenanceForm_Load(System::Object^ sender, System::EventArgs^ e) {
	ShowTarjetasData();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Close();
}
};
}
