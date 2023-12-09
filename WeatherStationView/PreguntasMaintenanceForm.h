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
	/// Resumen de PreguntasMaintenanceForm
	/// </summary>
	public ref class PreguntasMaintenanceForm : public System::Windows::Forms::Form
	{
	public:
		PreguntasMaintenanceForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->id = 0;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~PreguntasMaintenanceForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textEnunciado;
	private: System::Windows::Forms::TextBox^ textRespuesta1;
	private: System::Windows::Forms::TextBox^ textRespuesta2;
	private: System::Windows::Forms::TextBox^ textRespuesta3;
	private: System::Windows::Forms::TextBox^ textRespuestaCorrecta;





	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::DataGridView^ PreguntasDGV;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Enunciado;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Respuesta1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Respuesta2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Respuesta3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ RPTACORRECT;

	private: int id;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textEnunciado = (gcnew System::Windows::Forms::TextBox());
			this->textRespuesta1 = (gcnew System::Windows::Forms::TextBox());
			this->textRespuesta2 = (gcnew System::Windows::Forms::TextBox());
			this->textRespuesta3 = (gcnew System::Windows::Forms::TextBox());
			this->textRespuestaCorrecta = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->PreguntasDGV = (gcnew System::Windows::Forms::DataGridView());
			this->Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Enunciado = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Respuesta1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Respuesta2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Respuesta3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->RPTACORRECT = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PreguntasDGV))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(21, 14);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Enunciado";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(21, 42);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(64, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Respuesta1";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(21, 68);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Respuesta2";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(21, 96);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(64, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Respuesta3";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(21, 124);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(101, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Respuesta Correcta";
			// 
			// textEnunciado
			// 
			this->textEnunciado->Location = System::Drawing::Point(139, 10);
			this->textEnunciado->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textEnunciado->Name = L"textEnunciado";
			this->textEnunciado->Size = System::Drawing::Size(525, 20);
			this->textEnunciado->TabIndex = 5;
			// 
			// textRespuesta1
			// 
			this->textRespuesta1->Location = System::Drawing::Point(139, 38);
			this->textRespuesta1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textRespuesta1->Name = L"textRespuesta1";
			this->textRespuesta1->Size = System::Drawing::Size(525, 20);
			this->textRespuesta1->TabIndex = 6;
			// 
			// textRespuesta2
			// 
			this->textRespuesta2->Location = System::Drawing::Point(139, 66);
			this->textRespuesta2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textRespuesta2->Name = L"textRespuesta2";
			this->textRespuesta2->Size = System::Drawing::Size(525, 20);
			this->textRespuesta2->TabIndex = 7;
			// 
			// textRespuesta3
			// 
			this->textRespuesta3->Location = System::Drawing::Point(139, 94);
			this->textRespuesta3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textRespuesta3->Name = L"textRespuesta3";
			this->textRespuesta3->Size = System::Drawing::Size(525, 20);
			this->textRespuesta3->TabIndex = 8;
			// 
			// textRespuestaCorrecta
			// 
			this->textRespuestaCorrecta->Location = System::Drawing::Point(139, 124);
			this->textRespuestaCorrecta->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textRespuestaCorrecta->Name = L"textRespuestaCorrecta";
			this->textRespuestaCorrecta->Size = System::Drawing::Size(525, 20);
			this->textRespuestaCorrecta->TabIndex = 9;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(23, 157);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(87, 24);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Agregar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &PreguntasMaintenanceForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(207, 157);
			this->button2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(87, 24);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Modificar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &PreguntasMaintenanceForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(383, 157);
			this->button3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(87, 24);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Eliminar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &PreguntasMaintenanceForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(561, 157);
			this->button4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(87, 24);
			this->button4->TabIndex = 13;
			this->button4->Text = L"Cerrar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &PreguntasMaintenanceForm::button4_Click);
			// 
			// PreguntasDGV
			// 
			this->PreguntasDGV->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->PreguntasDGV->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Id, this->Enunciado,
					this->Respuesta1, this->Respuesta2, this->Respuesta3, this->RPTACORRECT
			});
			this->PreguntasDGV->Location = System::Drawing::Point(24, 195);
			this->PreguntasDGV->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->PreguntasDGV->Name = L"PreguntasDGV";
			this->PreguntasDGV->RowHeadersWidth = 62;
			this->PreguntasDGV->RowTemplate->Height = 28;
			this->PreguntasDGV->Size = System::Drawing::Size(677, 153);
			this->PreguntasDGV->TabIndex = 14;
			this->PreguntasDGV->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &PreguntasMaintenanceForm::PreguntasDGV_CellClick);
			// 
			// Id
			// 
			this->Id->HeaderText = L"id";
			this->Id->MinimumWidth = 8;
			this->Id->Name = L"Id";
			this->Id->Width = 150;
			// 
			// Enunciado
			// 
			this->Enunciado->HeaderText = L"Enunciado";
			this->Enunciado->MinimumWidth = 8;
			this->Enunciado->Name = L"Enunciado";
			this->Enunciado->Width = 150;
			// 
			// Respuesta1
			// 
			this->Respuesta1->HeaderText = L"Respuesta1";
			this->Respuesta1->MinimumWidth = 8;
			this->Respuesta1->Name = L"Respuesta1";
			this->Respuesta1->Width = 150;
			// 
			// Respuesta2
			// 
			this->Respuesta2->HeaderText = L"Respuesta2";
			this->Respuesta2->MinimumWidth = 8;
			this->Respuesta2->Name = L"Respuesta2";
			this->Respuesta2->Width = 150;
			// 
			// Respuesta3
			// 
			this->Respuesta3->HeaderText = L"Respuesta3";
			this->Respuesta3->MinimumWidth = 8;
			this->Respuesta3->Name = L"Respuesta3";
			this->Respuesta3->Width = 150;
			// 
			// RPTACORRECT
			// 
			this->RPTACORRECT->HeaderText = L"RPTACORRECT";
			this->RPTACORRECT->MinimumWidth = 8;
			this->RPTACORRECT->Name = L"RPTACORRECT";
			this->RPTACORRECT->Width = 150;
			// 
			// PreguntasMaintenanceForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(723, 356);
			this->Controls->Add(this->PreguntasDGV);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textRespuestaCorrecta);
			this->Controls->Add(this->textRespuesta3);
			this->Controls->Add(this->textRespuesta2);
			this->Controls->Add(this->textRespuesta1);
			this->Controls->Add(this->textEnunciado);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"PreguntasMaintenanceForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"PreguntasMaintenanceForm";
			this->Load += gcnew System::EventHandler(this, &PreguntasMaintenanceForm::PreguntasMaintenanceForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PreguntasDGV))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ enunciado = textEnunciado->Text;
	String^ respuesta1 = textRespuesta1->Text;
	String^ respuesta2 = textRespuesta2->Text;
	String^ respuesta3 = textRespuesta3->Text;
	//int respuestacorrect = Int32::Parse(textRespuestaCorrecta->Text);
	String^ respuestacorrectST = textRespuestaCorrecta->Text;

	if (enunciado != "" && respuesta1 != "" && respuesta2 != "" && respuesta3 != "" && respuestacorrectST != "") {
		int respuestacorrecta;

		bool ReCobool = Int32::TryParse(respuestacorrectST, respuestacorrecta);
		

		if (ReCobool) {
			if (respuestacorrecta >= 0) {
				

					List<Pregunta^>^ preguntas = Controller::Controller::QueryAllPregunta();
					int lastIdIndex = preguntas->Count;
					Pregunta^ pregunta = gcnew Pregunta();

					if (lastIdIndex == 0) {
						pregunta->id = 1;
					}
					else {
						Pregunta^ preguntaLastId = preguntas[lastIdIndex - 1];
						pregunta->id = (preguntaLastId->id) + 1;
					}
					pregunta->Enunciado = enunciado;
					pregunta->Respuesta1 = respuesta1;
					pregunta->Respuesta2 = respuesta2;
					pregunta->Respuesta3 = respuesta3;
					pregunta->RPTACORRECT = respuestacorrecta;

					Controller::Controller::AddPregunta(pregunta);
					ShowPreguntaData();

					textEnunciado->Text = "";
					textRespuesta1->Text = "";
					textRespuesta2->Text = "";
					textRespuesta3->Text = "";
					textRespuestaCorrecta->Text = "";

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
	   void ShowPreguntaData() {
		   List<Pregunta^>^ preguntas = Controller::Controller::QueryAllPregunta();
		   PreguntasDGV->Rows->Clear();
		   for (int i = 0; i < preguntas->Count; i++) {
			   Pregunta^ pregunta = preguntas[i];
			   PreguntasDGV->Rows->Add(gcnew array<String^> {
				   "" + pregunta->id,
					   pregunta->Enunciado,
					   pregunta->Respuesta1,
					   pregunta->Respuesta2,
					   pregunta->Respuesta3,
				  "" + pregunta->RPTACORRECT,
					   

			   });
		   }
	   }





private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Controller::Controller::QueryPreguntabyId(id) != nullptr) {
		Controller::Controller::DeletePregunta(id);
		textEnunciado->Text = "";
		textRespuesta1->Text = "";
		textRespuesta2->Text = "";

		textRespuesta3->Text = "";
		textRespuestaCorrecta->Text = "";

		id = 0;

		ShowPreguntaData();
	}
	else {
		MessageBox::Show("Por favor seleccione un dato antes de eliminar.");
	}


}
private: System::Void PreguntasDGV_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {


	if (PreguntasDGV->Rows[PreguntasDGV->SelectedCells[0]->RowIndex]->Cells[0]->Value != nullptr) {
		id = Int32::Parse(PreguntasDGV->Rows[PreguntasDGV->SelectedCells[0]->RowIndex]
			->Cells[0]->Value->ToString());
		Pregunta^ pregunta = Controller::Controller::QueryPreguntabyId(id);
		if (pregunta != nullptr) {
			textEnunciado->Text = pregunta->Enunciado;
			textRespuesta1->Text = pregunta->Respuesta1;
			textRespuesta2->Text = pregunta->Respuesta2;
			textRespuesta3->Text = pregunta->Respuesta3;
			textRespuestaCorrecta->Text = pregunta->RPTACORRECT.ToString();

		}
	}
	else {
		textEnunciado->Text = "";
		textRespuesta1->Text = "";
		textRespuesta2->Text = "";

		textRespuesta3->Text = "";
		textRespuestaCorrecta->Text = "";

		id = 0;
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ enunciado = textEnunciado->Text;
	String^ respuesta1 = textRespuesta1->Text;
	String^ respuesta2 = textRespuesta2->Text;
	String^ respuesta3 = textRespuesta3->Text;
	//int respuestacorrect = Int32::Parse(textRespuestaCorrecta->Text);
	String^ respuestacorrectST = textRespuestaCorrecta->Text;

	if (enunciado != "" && respuesta1 != "" && respuesta2 != "" && respuesta3 != "" && respuestacorrectST != "") {
		int respuestacorrecta;

		bool ReCobool = Int32::TryParse(respuestacorrectST, respuestacorrecta);


		if (ReCobool) {
			if (respuestacorrecta >= 0) {


				Pregunta^ pregunta = gcnew Pregunta();
				pregunta->id = id;
				pregunta->Enunciado = enunciado;
				pregunta->Respuesta1 = respuesta1;
				pregunta->Respuesta2 = respuesta2;
				pregunta->Respuesta3 = respuesta3;
				pregunta->RPTACORRECT = respuestacorrecta;

				Controller::Controller::UpdatePregunta(pregunta);
				

				textEnunciado->Text = "";
				textRespuesta1->Text = "";
				textRespuesta2->Text = "";
				textRespuesta3->Text = "";
				textRespuestaCorrecta->Text = "";
				ShowPreguntaData();
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
private: System::Void PreguntasMaintenanceForm_Load(System::Object^ sender, System::EventArgs^ e) {
	ShowPreguntaData();

}
};
}
