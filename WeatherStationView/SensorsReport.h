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
	/// Resumen de SensorsReport
	/// </summary>
	public ref class SensorsReport : public System::Windows::Forms::Form
	{
	public:
		SensorsReport(void)
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
		~SensorsReport()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: List<Ambiente^>^ sensorData;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ UnidadTempdgv;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Fecha;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvHora;
	private: System::Windows::Forms::Button^ CerrarBtn;
	private: System::Windows::Forms::Button^ BuscarBtn;
	private: System::Windows::Forms::TextBox^ MinBox;

	private: System::Windows::Forms::ComboBox^ CriterioBox;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ MaxBox;

	private: System::Windows::Forms::Label^ MinLabel;
	private: System::Windows::Forms::Label^ MaxLabel;
	private: System::Windows::Forms::Button^ RestablecerBtn;






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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->UnidadTempdgv = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Fecha = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvHora = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CerrarBtn = (gcnew System::Windows::Forms::Button());
			this->BuscarBtn = (gcnew System::Windows::Forms::Button());
			this->MinBox = (gcnew System::Windows::Forms::TextBox());
			this->CriterioBox = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->MaxBox = (gcnew System::Windows::Forms::TextBox());
			this->MinLabel = (gcnew System::Windows::Forms::Label());
			this->MaxLabel = (gcnew System::Windows::Forms::Label());
			this->RestablecerBtn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->Column6,
					this->Column1, this->UnidadTempdgv, this->Column2, this->Column3, this->Column4, this->Column5, this->Fecha, this->dgvHora
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 97);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(741, 177);
			this->dataGridView1->TabIndex = 14;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"IdMedicion";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 125;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Temperatura";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// UnidadTempdgv
			// 
			this->UnidadTempdgv->HeaderText = L"Unidad Temperatura";
			this->UnidadTempdgv->Name = L"UnidadTempdgv";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Humedad";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Concentracion CO";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Calidad Aire";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 125;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Ubicacion Geografica";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 125;
			// 
			// Fecha
			// 
			this->Fecha->HeaderText = L"Fecha";
			this->Fecha->MinimumWidth = 6;
			this->Fecha->Name = L"Fecha";
			this->Fecha->Width = 125;
			// 
			// dgvHora
			// 
			this->dgvHora->HeaderText = L"Hora";
			this->dgvHora->MinimumWidth = 6;
			this->dgvHora->Name = L"dgvHora";
			this->dgvHora->Width = 125;
			// 
			// CerrarBtn
			// 
			this->CerrarBtn->Location = System::Drawing::Point(667, 291);
			this->CerrarBtn->Name = L"CerrarBtn";
			this->CerrarBtn->Size = System::Drawing::Size(75, 23);
			this->CerrarBtn->TabIndex = 16;
			this->CerrarBtn->Text = L"Cerrar";
			this->CerrarBtn->UseVisualStyleBackColor = true;
			this->CerrarBtn->Click += gcnew System::EventHandler(this, &SensorsReport::CerrarBtn_Click);
			// 
			// BuscarBtn
			// 
			this->BuscarBtn->Location = System::Drawing::Point(561, 47);
			this->BuscarBtn->Name = L"BuscarBtn";
			this->BuscarBtn->Size = System::Drawing::Size(75, 23);
			this->BuscarBtn->TabIndex = 15;
			this->BuscarBtn->Text = L"Buscar";
			this->BuscarBtn->UseVisualStyleBackColor = true;
			this->BuscarBtn->Click += gcnew System::EventHandler(this, &SensorsReport::Buscar_Click);
			// 
			// MinBox
			// 
			this->MinBox->Location = System::Drawing::Point(299, 49);
			this->MinBox->Name = L"MinBox";
			this->MinBox->Size = System::Drawing::Size(100, 20);
			this->MinBox->TabIndex = 17;
			// 
			// CriterioBox
			// 
			this->CriterioBox->FormattingEnabled = true;
			this->CriterioBox->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Temperatura", L"Humedad", L"Concentracion CO",
					L"Calidad Aire", L"Ubicacion Geografica", L"Fecha-Hora"
			});
			this->CriterioBox->Location = System::Drawing::Point(144, 48);
			this->CriterioBox->Name = L"CriterioBox";
			this->CriterioBox->Size = System::Drawing::Size(121, 21);
			this->CriterioBox->TabIndex = 18;
			this->CriterioBox->SelectedIndexChanged += gcnew System::EventHandler(this, &SensorsReport::EleccionCriterio);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(61, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(105, 13);
			this->label1->TabIndex = 19;
			this->label1->Text = L"Criterio de Búsqueda";
			// 
			// MaxBox
			// 
			this->MaxBox->Location = System::Drawing::Point(432, 49);
			this->MaxBox->Name = L"MaxBox";
			this->MaxBox->Size = System::Drawing::Size(100, 20);
			this->MaxBox->TabIndex = 20;
			// 
			// MinLabel
			// 
			this->MinLabel->AutoSize = true;
			this->MinLabel->Location = System::Drawing::Point(299, 22);
			this->MinLabel->Name = L"MinLabel";
			this->MinLabel->Size = System::Drawing::Size(35, 13);
			this->MinLabel->TabIndex = 21;
			this->MinLabel->Text = L"label2";
			// 
			// MaxLabel
			// 
			this->MaxLabel->AutoSize = true;
			this->MaxLabel->Location = System::Drawing::Point(429, 22);
			this->MaxLabel->Name = L"MaxLabel";
			this->MaxLabel->Size = System::Drawing::Size(35, 13);
			this->MaxLabel->TabIndex = 22;
			this->MaxLabel->Text = L"label3";
			// 
			// RestablecerBtn
			// 
			this->RestablecerBtn->Location = System::Drawing::Point(561, 291);
			this->RestablecerBtn->Name = L"RestablecerBtn";
			this->RestablecerBtn->Size = System::Drawing::Size(75, 23);
			this->RestablecerBtn->TabIndex = 23;
			this->RestablecerBtn->Text = L"Restablecer";
			this->RestablecerBtn->UseVisualStyleBackColor = true;
			this->RestablecerBtn->Click += gcnew System::EventHandler(this, &SensorsReport::Restablecer_Click);
			// 
			// SensorsReport
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(765, 326);
			this->Controls->Add(this->RestablecerBtn);
			this->Controls->Add(this->MaxLabel);
			this->Controls->Add(this->MinLabel);
			this->Controls->Add(this->MaxBox);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->CriterioBox);
			this->Controls->Add(this->MinBox);
			this->Controls->Add(this->CerrarBtn);
			this->Controls->Add(this->BuscarBtn);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"SensorsReport";
			this->Text = L"SensorsReport";
			this->Load += gcnew System::EventHandler(this, &SensorsReport::SensorsReportLoad);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Buscar_Click(System::Object^ sender, System::EventArgs^ e) {
		List<Ambiente^>^ ambiente_aux = gcnew List<Ambiente^>(); //lista a ser filtrada
		if (CriterioBox->SelectedItem->ToString() == "Temperatura") {
			for each (Ambiente^ dato in sensorData) {
				int temp = dynamic_cast<SensorTemperaturaHumedad^>(dato->DataBase[0])->Temperatura;
				if ((temp >= Int32::Parse(MinBox->Text)) && (temp <= Int32::Parse(MaxBox->Text))) {
					// El valor de Temperatura está dentro del rango, agrega el dato filtrado a la nueva lista.
					ambiente_aux->Add(dato);
				}
			}
		}
		else if (CriterioBox->SelectedItem->ToString() == "Humedad") {
			for each (Ambiente^ dato in sensorData) {
				int humedad = dynamic_cast<SensorTemperaturaHumedad^>(dato->DataBase[0])->Humedad;
				if ((humedad >= Int32::Parse(MinBox->Text)) && (humedad <= Int32::Parse(MaxBox->Text))) {
					// El valor de Temperatura está dentro del rango, agrega el dato filtrado a la nueva lista.
					ambiente_aux->Add(dato);
				}
			}
		}
		else if (CriterioBox->SelectedItem->ToString() == "Concentracion CO") {
			for each (Ambiente^ dato in sensorData) {
				int CO = dynamic_cast<SensorCO^>(dato->DataBase[1])->NivelCO;
				if ((CO >= Int32::Parse(MinBox->Text)) && (CO <= Int32::Parse(MaxBox->Text))) {
					// El valor de Temperatura está dentro del rango, agrega el dato filtrado a la nueva lista.
					ambiente_aux->Add(dato);
				}
			}
		}
		else if (CriterioBox->SelectedItem->ToString() == "Calidad Aire") {
			for each (Ambiente^ dato in sensorData) {
				int AirQ = dynamic_cast<SensorCalidadAire^>(dato->DataBase[2])->CalidadAire;
				if ((AirQ >= Int32::Parse(MinBox->Text)) && (AirQ <= Int32::Parse(MaxBox->Text))) {
					// El valor de Temperatura está dentro del rango, agrega el dato filtrado a la nueva lista.
					ambiente_aux->Add(dato);
				}
			}
		}
		else if (CriterioBox->SelectedItem->ToString() == "Ubicacion Geografica") {
			for each (Ambiente^ dato in sensorData) {
				String^ ubiGeo = dato->UbicacionGeografica;
				if (ubiGeo == MinBox->Text) {
					// El valor de Temperatura está dentro del rango, agrega el dato filtrado a la nueva lista.
					ambiente_aux->Add(dato);
				}
			}
		}
		else if (CriterioBox->SelectedItem->ToString() == "Fecha-Hora") {

		}
		else {
			MessageBox::Show("You shouldn't be here.");
		}
		ShowFilteredData(ambiente_aux);
	}

private: System::Void SensorsReportLoad(System::Object^ sender, System::EventArgs^ e) {
	ShowAmbienteData();
}
	   void ShowAmbienteData() {
		   sensorData = Controller::Controller::QueryAmbienteData();
		   dataGridView1->Rows->Clear();
		   for (int i = 0; i < sensorData->Count; i++) {
			   Ambiente^ ambiente = sensorData[i];

			   dataGridView1->Rows->Add(gcnew array<String^> {
				   "" + ambiente->IdMedicion,
					   "" + dynamic_cast<SensorTemperaturaHumedad^>(ambiente->DataBase[0])->Temperatura, //temperatura
					   dynamic_cast<SensorTemperaturaHumedad^>(ambiente->DataBase[0])->UnidadTemp,
					   "" + dynamic_cast<SensorTemperaturaHumedad^>(ambiente->DataBase[0])->Humedad, //humedad
					   "" + dynamic_cast<SensorCO^>(ambiente->DataBase[1])->NivelCO, //co
					   "" + dynamic_cast<SensorCalidadAire^>(ambiente->DataBase[2])->CalidadAire, //airq
					   ambiente->UbicacionGeografica, //ubigeo
					   ambiente->FechaMedicion, //fecha
					   ambiente->TiempoMedicion //hora
			   });
		   }
	   }
	   void ShowFilteredData(List<Ambiente^>^ ambiente_aux) {
		   dataGridView1->Rows->Clear();
		   for (int i = 0; i < ambiente_aux->Count; i++) {
			   Ambiente^ ambiente = ambiente_aux[i];

			   dataGridView1->Rows->Add(gcnew array<String^> {
				   "" + ambiente->IdMedicion,
					   "" + dynamic_cast<SensorTemperaturaHumedad^>(ambiente->DataBase[0])->Temperatura, //temperatura
					   dynamic_cast<SensorTemperaturaHumedad^>(ambiente->DataBase[0])->UnidadTemp,
					   "" + dynamic_cast<SensorTemperaturaHumedad^>(ambiente->DataBase[0])->Humedad, //humedad
					   "" + dynamic_cast<SensorCO^>(ambiente->DataBase[1])->NivelCO, //co
					   "" + dynamic_cast<SensorCalidadAire^>(ambiente->DataBase[2])->CalidadAire, //airq
					   ambiente->UbicacionGeografica, //ubigeo
					   ambiente->FechaMedicion, //fecha
					   ambiente->TiempoMedicion //hora
			   });
		   }
	   }
private: System::Void EleccionCriterio(System::Object^ sender, System::EventArgs^ e) {
	if (CriterioBox->SelectedItem->ToString() == "Temperatura") {
		MinLabel->Text = "Temperatura minima";
		MaxLabel->Text = "Temperatura maxima";
	}
	else if (CriterioBox->SelectedItem->ToString() == "Humedad") {
		MinLabel->Text = "Humedad minima";
		MaxLabel->Text = "Humedad maxima";
	}
	else if (CriterioBox->SelectedItem->ToString() == "Concentracion CO") {
		MinLabel->Text = "Concentracion minima";
		MaxLabel->Text = "Concentracion maxima";
	}
	else if (CriterioBox->SelectedItem->ToString() == "Calidad Aire") {
		MinLabel->Text = "Calidad Aire minima";
		MaxLabel->Text = "Calidad Aire maxima";
	}
	else if (CriterioBox->SelectedItem->ToString() == "Ubicacion Geografica") {
		MinLabel->Text = "Ubicacion Seleccionada";
		MaxLabel-> Visible = false;
		MaxBox-> Visible = false;
	}
	else if (CriterioBox->SelectedItem->ToString() == "Fecha-Hora") {
		//to be implemented
	}
	else {
		MessageBox::Show("You shouldn't be here.");
	}
}
private: System::Void CerrarBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void Restablecer_Click(System::Object^ sender, System::EventArgs^ e) {
	ShowAmbienteData();
}
};
}
