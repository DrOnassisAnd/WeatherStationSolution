#pragma once




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
	/// Resumen de TriviaForm
	/// </summary>
	public ref class TriviaForm : public System::Windows::Forms::Form
	{
	public:
		TriviaForm(int P) //points
		{
			InitializeComponent();
			this->points = P;
			
		}

		int GetPoints() {
			return points;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~TriviaForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Timer^ timerTimeout;

		   //Timers





	private: System::Windows::Forms::RadioButton^ RespuestaA;
	private: System::Windows::Forms::RadioButton^ RespuestaB;
	private: System::Windows::Forms::RadioButton^ RespuestaC;
	private: System::Windows::Forms::Label^ Enunciadolabel;



	private: System::Windows::Forms::Button^ respuestaBtn;
	private: System::Windows::Forms::Button^ CerrarBtn;

	private: int points = 0;
	private: int numeropregunta=0;
	private: Random^ rand = gcnew Random();
	private: List<Pregunta^>^ PreguntasList;
	private: int timeout = 30;
	private: Pregunta^ pregunta;
	private: bool pressedBtn = false; 
	private: int maxpoints = 30;

	private: System::Windows::Forms::RichTextBox^ EnunciadoBox1;
	private: System::Windows::Forms::Label^ timeoutlbl;
	private: System::Windows::Forms::Button^ Sgtepregunta;
	private: System::Windows::Forms::Label^ Respuestalbl;
	private: System::Windows::Forms::Label^ TiempoRestantelbl;
	private: System::Windows::Forms::Label^ TusPuntoslbl;
	private: System::Windows::Forms::Label^ pointslbl;
	protected:

	private:System::ComponentModel::IContainer^ components;
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
			this->RespuestaA = (gcnew System::Windows::Forms::RadioButton());
			this->RespuestaB = (gcnew System::Windows::Forms::RadioButton());
			this->RespuestaC = (gcnew System::Windows::Forms::RadioButton());
			this->Enunciadolabel = (gcnew System::Windows::Forms::Label());
			this->timerTimeout = (gcnew System::Windows::Forms::Timer(this->components));
			this->respuestaBtn = (gcnew System::Windows::Forms::Button());
			this->CerrarBtn = (gcnew System::Windows::Forms::Button());
			this->EnunciadoBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->timeoutlbl = (gcnew System::Windows::Forms::Label());
			this->Sgtepregunta = (gcnew System::Windows::Forms::Button());
			this->Respuestalbl = (gcnew System::Windows::Forms::Label());
			this->TiempoRestantelbl = (gcnew System::Windows::Forms::Label());
			this->TusPuntoslbl = (gcnew System::Windows::Forms::Label());
			this->pointslbl = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(17, 11);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(64, 26);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Trivia";
			// 
			// RespuestaA
			// 
			this->RespuestaA->AutoSize = true;
			this->RespuestaA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RespuestaA->Location = System::Drawing::Point(50, 125);
			this->RespuestaA->Margin = System::Windows::Forms::Padding(2);
			this->RespuestaA->Name = L"RespuestaA";
			this->RespuestaA->Size = System::Drawing::Size(135, 20);
			this->RespuestaA->TabIndex = 1;
			this->RespuestaA->TabStop = true;
			this->RespuestaA->Text = L"radiorespuestaBtn";
			this->RespuestaA->UseVisualStyleBackColor = true;
			// 
			// RespuestaB
			// 
			this->RespuestaB->AutoSize = true;
			this->RespuestaB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RespuestaB->Location = System::Drawing::Point(50, 177);
			this->RespuestaB->Margin = System::Windows::Forms::Padding(2);
			this->RespuestaB->Name = L"RespuestaB";
			this->RespuestaB->Size = System::Drawing::Size(112, 20);
			this->RespuestaB->TabIndex = 2;
			this->RespuestaB->TabStop = true;
			this->RespuestaB->Text = L"radioCerrarBtn";
			this->RespuestaB->UseVisualStyleBackColor = true;
			// 
			// RespuestaC
			// 
			this->RespuestaC->AutoSize = true;
			this->RespuestaC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RespuestaC->Location = System::Drawing::Point(50, 227);
			this->RespuestaC->Margin = System::Windows::Forms::Padding(2);
			this->RespuestaC->Name = L"RespuestaC";
			this->RespuestaC->Size = System::Drawing::Size(135, 20);
			this->RespuestaC->TabIndex = 3;
			this->RespuestaC->TabStop = true;
			this->RespuestaC->Text = L"radiorespuestaBtn";
			this->RespuestaC->UseVisualStyleBackColor = true;
			// 
			// Enunciadolabel
			// 
			this->Enunciadolabel->AutoSize = true;
			this->Enunciadolabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Enunciadolabel->Location = System::Drawing::Point(28, 53);
			this->Enunciadolabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Enunciadolabel->Name = L"Enunciadolabel";
			this->Enunciadolabel->Size = System::Drawing::Size(70, 26);
			this->Enunciadolabel->TabIndex = 5;
			this->Enunciadolabel->Text = L"label2";
			// 
			// timerTimeout
			// 
			this->timerTimeout->Interval = 1000;
			this->timerTimeout->Tick += gcnew System::EventHandler(this, &TriviaForm::timer_tick);
			// 
			// respuestaBtn
			// 
			this->respuestaBtn->Location = System::Drawing::Point(237, 254);
			this->respuestaBtn->Margin = System::Windows::Forms::Padding(2);
			this->respuestaBtn->Name = L"respuestaBtn";
			this->respuestaBtn->Size = System::Drawing::Size(80, 32);
			this->respuestaBtn->TabIndex = 6;
			this->respuestaBtn->Text = L"Respuesta";
			this->respuestaBtn->UseVisualStyleBackColor = true;
			this->respuestaBtn->Click += gcnew System::EventHandler(this, &TriviaForm::respuestaBtn_Click);
			// 
			// CerrarBtn
			// 
			this->CerrarBtn->Location = System::Drawing::Point(549, 18);
			this->CerrarBtn->Margin = System::Windows::Forms::Padding(2);
			this->CerrarBtn->Name = L"CerrarBtn";
			this->CerrarBtn->Size = System::Drawing::Size(56, 19);
			this->CerrarBtn->TabIndex = 7;
			this->CerrarBtn->Text = L"Cerrar";
			this->CerrarBtn->UseVisualStyleBackColor = true;
			this->CerrarBtn->Click += gcnew System::EventHandler(this, &TriviaForm::CerrarBtn_Click);
			// 
			// EnunciadoBox1
			// 
			this->EnunciadoBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EnunciadoBox1->Location = System::Drawing::Point(189, 11);
			this->EnunciadoBox1->Margin = System::Windows::Forms::Padding(2);
			this->EnunciadoBox1->Name = L"EnunciadoBox1";
			this->EnunciadoBox1->Size = System::Drawing::Size(300, 68);
			this->EnunciadoBox1->TabIndex = 8;
			this->EnunciadoBox1->Text = L"";
			// 
			// timeoutlbl
			// 
			this->timeoutlbl->AutoSize = true;
			this->timeoutlbl->Location = System::Drawing::Point(444, 140);
			this->timeoutlbl->Name = L"timeoutlbl";
			this->timeoutlbl->Size = System::Drawing::Size(45, 13);
			this->timeoutlbl->TabIndex = 9;
			this->timeoutlbl->Text = L"Timeout";
			// 
			// Sgtepregunta
			// 
			this->Sgtepregunta->Location = System::Drawing::Point(334, 254);
			this->Sgtepregunta->Name = L"Sgtepregunta";
			this->Sgtepregunta->Size = System::Drawing::Size(80, 32);
			this->Sgtepregunta->TabIndex = 10;
			this->Sgtepregunta->Text = L"Siguiente";
			this->Sgtepregunta->UseVisualStyleBackColor = true;
			this->Sgtepregunta->Click += gcnew System::EventHandler(this, &TriviaForm::Sgtepregunta_Click);
			// 
			// Respuestalbl
			// 
			this->Respuestalbl->AutoSize = true;
			this->Respuestalbl->Location = System::Drawing::Point(186, 96);
			this->Respuestalbl->Name = L"Respuestalbl";
			this->Respuestalbl->Size = System::Drawing::Size(98, 13);
			this->Respuestalbl->TabIndex = 11;
			this->Respuestalbl->Text = L"MensajeRespuesta";
			// 
			// TiempoRestantelbl
			// 
			this->TiempoRestantelbl->AutoSize = true;
			this->TiempoRestantelbl->Location = System::Drawing::Point(342, 140);
			this->TiempoRestantelbl->Name = L"TiempoRestantelbl";
			this->TiempoRestantelbl->Size = System::Drawing::Size(91, 13);
			this->TiempoRestantelbl->TabIndex = 12;
			this->TiempoRestantelbl->Text = L"Tiempo Restante:";
			// 
			// TusPuntoslbl
			// 
			this->TusPuntoslbl->AutoSize = true;
			this->TusPuntoslbl->Location = System::Drawing::Point(473, 264);
			this->TusPuntoslbl->Name = L"TusPuntoslbl";
			this->TusPuntoslbl->Size = System::Drawing::Size(67, 13);
			this->TusPuntoslbl->TabIndex = 13;
			this->TusPuntoslbl->Text = L"Tus Puntos: ";
			// 
			// pointslbl
			// 
			this->pointslbl->AutoSize = true;
			this->pointslbl->Location = System::Drawing::Point(546, 264);
			this->pointslbl->Name = L"pointslbl";
			this->pointslbl->Size = System::Drawing::Size(39, 13);
			this->pointslbl->TabIndex = 14;
			this->pointslbl->Text = L"puntos";
			// 
			// TriviaForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(626, 290);
			this->Controls->Add(this->pointslbl);
			this->Controls->Add(this->TusPuntoslbl);
			this->Controls->Add(this->TiempoRestantelbl);
			this->Controls->Add(this->Respuestalbl);
			this->Controls->Add(this->Sgtepregunta);
			this->Controls->Add(this->timeoutlbl);
			this->Controls->Add(this->EnunciadoBox1);
			this->Controls->Add(this->CerrarBtn);
			this->Controls->Add(this->respuestaBtn);
			this->Controls->Add(this->Enunciadolabel);
			this->Controls->Add(this->RespuestaC);
			this->Controls->Add(this->RespuestaB);
			this->Controls->Add(this->RespuestaA);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"TriviaForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"TriviaForm";
			this->Load += gcnew System::EventHandler(this, &TriviaForm::TriviaForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void TriviaForm_Load(System::Object^ sender, System::EventArgs^ e) {
		UpdateTimeout();
		timerTimeout->Start();
		PreguntasList = gcnew List<Pregunta^>();
		PreguntasList = Controller::Controller::QueryAllPregunta();
		pressedBtn = false;
		pointslbl->Text = points.ToString();
		Respuestalbl->Visible = false;
		Sgtepregunta->Enabled = false;
		numeropregunta = rand->Next(PreguntasList->Count);
		LoadPreguntas();
		
	}

	private: System::Void timer_tick(System::Object^ sender, System::EventArgs^ e) { //cada 1s
		UpdateTimeout();
	}


private: System::Void respuestaBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	if (pressedBtn == false) {
		timerTimeout->Stop();
		int numPregunta = 0;
		if ((RespuestaA->Checked) || (RespuestaB->Checked) || (RespuestaC->Checked)) {
			if (RespuestaA->Checked) {
				numPregunta = 1;
			}
			else if (RespuestaB->Checked) {
				numPregunta = 2;
			}
			else if (RespuestaC->Checked) {
				numPregunta = 3;
			}

			if (numPregunta == Int32::Parse(pregunta->RPTACORRECT)) {
				points += 5;
				Respuestalbl->Visible = true;
				Respuestalbl->Text = "Respuesta correcta: !Muy bien!";
				if (points >= maxpoints) {
					points = maxpoints;
					pointslbl->Text = points.ToString();
					MessageBox::Show("Has alcanzado el máximos de puntos por hoy. Vuelve mañana para obtener más puntos.");
					this->Close();
				}
			}
			else {
				Respuestalbl->Visible = true;
				Respuestalbl->Text = "Respuesta incorrecta";
			}
			pressedBtn = true;
			pointslbl->Text = points.ToString();
			respuestaBtn->Enabled = false;
			Sgtepregunta->Enabled = true;
			RespuestaA->Enabled = false;
			RespuestaB->Enabled = false;
			RespuestaC->Enabled = false;
		}
		else {
			MessageBox::Show("Debe seleccionar una de las alternativas");
		}	
	}
	
}
	   void LoadPreguntas() {
		   pregunta = PreguntasList[numeropregunta];

		   this->EnunciadoBox1->Text = pregunta->Enunciado;
		   this->RespuestaA->Text = pregunta->Respuesta1;
		   this->RespuestaB->Text = pregunta->Respuesta2;
		   this->RespuestaC->Text = pregunta->Respuesta3;
		   numeropregunta = rand->Next(PreguntasList->Count);

	   }

	   void UpdateTimeout() {
		   if (timeout < 0) {
			   if (pressedBtn == false) {
				   pressedBtn = true;
				   Respuestalbl->Visible = true;
				   Respuestalbl->Text = "Se acabo el tiempo";
				   respuestaBtn->Enabled = false;
				   Sgtepregunta->Enabled = true;
				   RespuestaA->Enabled = false;
				   RespuestaB->Enabled = false;
				   RespuestaC->Enabled = false;
			   }
		   }
		   else {
			   timeoutlbl->Text = timeout.ToString();
			   timeout--;
		   }
	   }
private: System::Void Sgtepregunta_Click(System::Object^ sender, System::EventArgs^ e) {
	timerTimeout->Start();
	timeout = 30;
	pressedBtn = false;
	Sgtepregunta->Enabled = false;
	respuestaBtn->Enabled = true;
	Respuestalbl->Visible = false;
	RespuestaA->Enabled = true;
	RespuestaB->Enabled = true;
	RespuestaC->Enabled = true;
	LoadPreguntas();
}
private: System::Void CerrarBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	timerTimeout->Stop();
	this->Close();
}
};
}
