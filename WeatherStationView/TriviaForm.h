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
		TriviaForm(User^ usuariot) //points
		{
			InitializeComponent();
			this->user = usuariot;
			
		}

		User^ GetUser() {
			return user;
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




	private: System::Windows::Forms::Button^ respuestaBtn;
	private: System::Windows::Forms::Button^ CerrarBtn;

	//private: int points = 0;
	private: int numeropregunta=0;
	private: List<Pregunta^>^ PreguntasList;
	private: int timeout = 30;
	private: Pregunta^ pregunta;
	private: bool pressedBtn = false; 
	private: int maxpoints = 30;
	private: int cantidadPreguntas;
	private: List<int>^ preguntas;

	private: User^ user;


	private: System::Windows::Forms::RichTextBox^ EnunciadoBox1;
	private: System::Windows::Forms::Label^ timeoutlbl;
	private: System::Windows::Forms::Button^ Sgtepregunta;
	private: System::Windows::Forms::Label^ Respuestalbl;
	private: System::Windows::Forms::Label^ TiempoRestantelbl;
	private: System::Windows::Forms::Label^ TusPuntoslbl;
	private: System::Windows::Forms::Label^ pointslbl;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(11, 9);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(106, 26);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Pregunta:";
			// 
			// RespuestaA
			// 
			this->RespuestaA->AutoSize = true;
			this->RespuestaA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RespuestaA->Location = System::Drawing::Point(16, 172);
			this->RespuestaA->Margin = System::Windows::Forms::Padding(2);
			this->RespuestaA->Name = L"RespuestaA";
			this->RespuestaA->Size = System::Drawing::Size(227, 33);
			this->RespuestaA->TabIndex = 1;
			this->RespuestaA->TabStop = true;
			this->RespuestaA->Text = L"radiorespuestaBtn";
			this->RespuestaA->UseVisualStyleBackColor = true;
			// 
			// RespuestaB
			// 
			this->RespuestaB->AutoSize = true;
			this->RespuestaB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RespuestaB->Location = System::Drawing::Point(19, 233);
			this->RespuestaB->Margin = System::Windows::Forms::Padding(2);
			this->RespuestaB->Name = L"RespuestaB";
			this->RespuestaB->Size = System::Drawing::Size(189, 33);
			this->RespuestaB->TabIndex = 2;
			this->RespuestaB->TabStop = true;
			this->RespuestaB->Text = L"radioCerrarBtn";
			this->RespuestaB->UseVisualStyleBackColor = true;
			// 
			// RespuestaC
			// 
			this->RespuestaC->AutoSize = true;
			this->RespuestaC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RespuestaC->Location = System::Drawing::Point(19, 294);
			this->RespuestaC->Margin = System::Windows::Forms::Padding(2);
			this->RespuestaC->Name = L"RespuestaC";
			this->RespuestaC->Size = System::Drawing::Size(227, 33);
			this->RespuestaC->TabIndex = 3;
			this->RespuestaC->TabStop = true;
			this->RespuestaC->Text = L"radiorespuestaBtn";
			this->RespuestaC->UseVisualStyleBackColor = true;
			// 
			// timerTimeout
			// 
			this->timerTimeout->Interval = 1000;
			this->timerTimeout->Tick += gcnew System::EventHandler(this, &TriviaForm::timer_tick);
			// 
			// respuestaBtn
			// 
			this->respuestaBtn->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->respuestaBtn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->respuestaBtn->Location = System::Drawing::Point(214, 444);
			this->respuestaBtn->Margin = System::Windows::Forms::Padding(2);
			this->respuestaBtn->Name = L"respuestaBtn";
			this->respuestaBtn->Size = System::Drawing::Size(126, 45);
			this->respuestaBtn->TabIndex = 6;
			this->respuestaBtn->Text = L"Respuesta";
			this->respuestaBtn->UseVisualStyleBackColor = false;
			this->respuestaBtn->Click += gcnew System::EventHandler(this, &TriviaForm::respuestaBtn_Click);
			// 
			// CerrarBtn
			// 
			this->CerrarBtn->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->CerrarBtn->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->CerrarBtn->Location = System::Drawing::Point(224, 324);
			this->CerrarBtn->Margin = System::Windows::Forms::Padding(2);
			this->CerrarBtn->Name = L"CerrarBtn";
			this->CerrarBtn->Size = System::Drawing::Size(79, 37);
			this->CerrarBtn->TabIndex = 7;
			this->CerrarBtn->Text = L"Cerrar";
			this->CerrarBtn->UseVisualStyleBackColor = false;
			this->CerrarBtn->Click += gcnew System::EventHandler(this, &TriviaForm::CerrarBtn_Click);
			// 
			// EnunciadoBox1
			// 
			this->EnunciadoBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EnunciadoBox1->Location = System::Drawing::Point(138, 11);
			this->EnunciadoBox1->Margin = System::Windows::Forms::Padding(2);
			this->EnunciadoBox1->Name = L"EnunciadoBox1";
			this->EnunciadoBox1->ReadOnly = true;
			this->EnunciadoBox1->Size = System::Drawing::Size(1197, 94);
			this->EnunciadoBox1->TabIndex = 8;
			this->EnunciadoBox1->Text = L"";
			// 
			// timeoutlbl
			// 
			this->timeoutlbl->AutoSize = true;
			this->timeoutlbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->timeoutlbl->Location = System::Drawing::Point(48, 60);
			this->timeoutlbl->Name = L"timeoutlbl";
			this->timeoutlbl->Size = System::Drawing::Size(66, 20);
			this->timeoutlbl->TabIndex = 9;
			this->timeoutlbl->Text = L"Timeout";
			// 
			// Sgtepregunta
			// 
			this->Sgtepregunta->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Sgtepregunta->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Sgtepregunta->Location = System::Drawing::Point(491, 443);
			this->Sgtepregunta->Name = L"Sgtepregunta";
			this->Sgtepregunta->Size = System::Drawing::Size(120, 45);
			this->Sgtepregunta->TabIndex = 10;
			this->Sgtepregunta->Text = L"Siguiente";
			this->Sgtepregunta->UseVisualStyleBackColor = false;
			this->Sgtepregunta->Click += gcnew System::EventHandler(this, &TriviaForm::Sgtepregunta_Click);
			// 
			// Respuestalbl
			// 
			this->Respuestalbl->AutoSize = true;
			this->Respuestalbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Respuestalbl->Location = System::Drawing::Point(20, 124);
			this->Respuestalbl->Name = L"Respuestalbl";
			this->Respuestalbl->Size = System::Drawing::Size(171, 24);
			this->Respuestalbl->TabIndex = 11;
			this->Respuestalbl->Text = L"MensajeRespuesta";
			// 
			// TiempoRestantelbl
			// 
			this->TiempoRestantelbl->AutoSize = true;
			this->TiempoRestantelbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TiempoRestantelbl->Location = System::Drawing::Point(20, 14);
			this->TiempoRestantelbl->Name = L"TiempoRestantelbl";
			this->TiempoRestantelbl->Size = System::Drawing::Size(135, 20);
			this->TiempoRestantelbl->TabIndex = 12;
			this->TiempoRestantelbl->Text = L"Tiempo Restante:";
			// 
			// TusPuntoslbl
			// 
			this->TusPuntoslbl->AutoSize = true;
			this->TusPuntoslbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TusPuntoslbl->Location = System::Drawing::Point(35, 309);
			this->TusPuntoslbl->Name = L"TusPuntoslbl";
			this->TusPuntoslbl->Size = System::Drawing::Size(97, 20);
			this->TusPuntoslbl->TabIndex = 13;
			this->TusPuntoslbl->Text = L"Tus Puntos: ";
			// 
			// pointslbl
			// 
			this->pointslbl->AutoSize = true;
			this->pointslbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pointslbl->Location = System::Drawing::Point(138, 309);
			this->pointslbl->Name = L"pointslbl";
			this->pointslbl->Size = System::Drawing::Size(58, 20);
			this->pointslbl->TabIndex = 14;
			this->pointslbl->Text = L"puntos";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->RespuestaA);
			this->panel1->Controls->Add(this->RespuestaB);
			this->panel1->Controls->Add(this->RespuestaC);
			this->panel1->Controls->Add(this->respuestaBtn);
			this->panel1->Controls->Add(this->Sgtepregunta);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1423, 500);
			this->panel1->TabIndex = 15;
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Controls->Add(this->pictureBox2);
			this->panel3->Controls->Add(this->pictureBox1);
			this->panel3->Controls->Add(this->Respuestalbl);
			this->panel3->Controls->Add(this->TiempoRestantelbl);
			this->panel3->Controls->Add(this->CerrarBtn);
			this->panel3->Controls->Add(this->pointslbl);
			this->panel3->Controls->Add(this->timeoutlbl);
			this->panel3->Controls->Add(this->TusPuntoslbl);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel3->Location = System::Drawing::Point(1087, 133);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(336, 367);
			this->panel3->TabIndex = 16;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(77, 160);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(193, 127);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 16;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(203, 14);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(100, 86);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 15;
			this->pictureBox1->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->EnunciadoBox1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1423, 133);
			this->panel2->TabIndex = 15;
			// 
			// TriviaForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1423, 500);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"TriviaForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"TriviaForm";
			this->Load += gcnew System::EventHandler(this, &TriviaForm::TriviaForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void TriviaForm_Load(System::Object^ sender, System::EventArgs^ e) {

		pictureBox1->Image = Image::FromFile("tiempoTrivia.jpg");
		
		UpdateTimeout();
		timerTimeout->Start();
		PreguntasList = gcnew List<Pregunta^>();
		PreguntasList = Controller::Controller::QueryAllPregunta();
		cantidadPreguntas = PreguntasList->Count;
		pressedBtn = false;
		pointslbl->Text = (user->PuntosDiarios).ToString();
		Respuestalbl->Visible = false;
		Sgtepregunta->Enabled = false;
		//numeropregunta = Controller::Controller::NumeroAleatorioRestante(cantidadPreguntas, user->PreguntasporDia);
		preguntas = user->PreguntasporDia;
		LoadPreguntas();
		pictureBox2->Image = Image::FromFile("TriviaForm.jpg");
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



			if (numPregunta == pregunta->RPTACORRECT) {
				user->PuntosDiarios += 5;
				user->PuntosTotales += 5;
				user->fechaUltimaActualizacion= DateTime::Today.ToString("yyyy-MM-dd");

				Respuestalbl->Visible = true;
				Respuestalbl->Text = "Respuesta correcta: !Muy bien!";

				pictureBox2->Image = Image::FromFile("pregunta check.jpg");

				if (user->PuntosDiarios >= maxpoints) {
					user->PuntosDiarios = maxpoints;
					pointslbl->Text = (user->PuntosDiarios).ToString();
					MessageBox::Show("Has alcanzado el máximos de puntos por hoy. Vuelve mañana para obtener más puntos.");
					this->Close();
				
				}
			}
			else {
				Respuestalbl->Visible = true;
				Respuestalbl->Text = "Respuesta incorrecta";
				pictureBox2->Image = Image::FromFile("pregunta mal.jpg");
			}

			Controller::Controller::AgregarValor(preguntas, numeropregunta);

			pressedBtn = true;
			pointslbl->Text = (user->PuntosDiarios).ToString();
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
		   numeropregunta = Controller::Controller::NumeroAleatorioRestante(cantidadPreguntas, user->PreguntasporDia);
		   pregunta = PreguntasList[numeropregunta];

		   this->EnunciadoBox1->Text = pregunta->Enunciado;
		   this->RespuestaA->Text = pregunta->Respuesta1;
		   this->RespuestaB->Text = pregunta->Respuesta2;
		   this->RespuestaC->Text = pregunta->Respuesta3;
		   pictureBox2->Image = Image::FromFile("TriviaForm.jpg");

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
				   Controller::Controller::AgregarValor(preguntas, numeropregunta);
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
	user->PreguntasporDia = preguntas;
	List<int>^ preguntaspordia = gcnew List<int>();
	preguntaspordia->Add(user->Id);
	preguntaspordia->AddRange(preguntas);
	Controller::Controller::UpdatePreguntasporDia(preguntaspordia);
	
	timerTimeout->Stop();
	this->Close();
}
};
}
