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

		int GetConfig() {
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
	private: System::Windows::Forms::Timer^ timer30sec;

		   //Timers





	private: System::Windows::Forms::RadioButton^ RespuestaA;
	private: System::Windows::Forms::RadioButton^ RespuestaB;
	private: System::Windows::Forms::RadioButton^ RespuestaC;
	private: System::Windows::Forms::Label^ Enunciadolabel;



	private: System::Windows::Forms::Button^ respuestaBtn;
	private: System::Windows::Forms::Button^ CerrarBtn;

	private: int points;
	private: int numeropregunta=0;
	private: List<Pregunta^>^ PreguntasList;
	private: System::Windows::Forms::RichTextBox^ EnunciadoBox1;
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
			this->timer30sec = (gcnew System::Windows::Forms::Timer(this->components));
			this->respuestaBtn = (gcnew System::Windows::Forms::Button());
			this->CerrarBtn = (gcnew System::Windows::Forms::Button());
			this->EnunciadoBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(23, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(84, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Trivia";
			// 
			// RespuestaA
			// 
			this->RespuestaA->AutoSize = true;
			this->RespuestaA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RespuestaA->Location = System::Drawing::Point(105, 153);
			this->RespuestaA->Name = L"RespuestaA";
			this->RespuestaA->Size = System::Drawing::Size(177, 26);
			this->RespuestaA->TabIndex = 1;
			this->RespuestaA->TabStop = true;
			this->RespuestaA->Text = L"radiorespuestaBtn";
			this->RespuestaA->UseVisualStyleBackColor = true;
			// 
			// RespuestaB
			// 
			this->RespuestaB->AutoSize = true;
			this->RespuestaB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RespuestaB->Location = System::Drawing::Point(105, 229);
			this->RespuestaB->Name = L"RespuestaB";
			this->RespuestaB->Size = System::Drawing::Size(149, 26);
			this->RespuestaB->TabIndex = 2;
			this->RespuestaB->TabStop = true;
			this->RespuestaB->Text = L"radioCerrarBtn";
			this->RespuestaB->UseVisualStyleBackColor = true;
			// 
			// RespuestaC
			// 
			this->RespuestaC->AutoSize = true;
			this->RespuestaC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RespuestaC->Location = System::Drawing::Point(105, 298);
			this->RespuestaC->Name = L"RespuestaC";
			this->RespuestaC->Size = System::Drawing::Size(177, 26);
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
			this->Enunciadolabel->Location = System::Drawing::Point(38, 81);
			this->Enunciadolabel->Name = L"Enunciadolabel";
			this->Enunciadolabel->Size = System::Drawing::Size(92, 32);
			this->Enunciadolabel->TabIndex = 5;
			this->Enunciadolabel->Text = L"label2";
			// 
			// timer30sec
			// 
			this->timer30sec->Interval = 4000;
			this->timer30sec->Tick += gcnew System::EventHandler(this, &TriviaForm::timer_tick);
			// 
			// respuestaBtn
			// 
			this->respuestaBtn->Location = System::Drawing::Point(647, 232);
			this->respuestaBtn->Name = L"respuestaBtn";
			this->respuestaBtn->Size = System::Drawing::Size(75, 23);
			this->respuestaBtn->TabIndex = 6;
			this->respuestaBtn->Text = L"respuestaBtn";
			this->respuestaBtn->UseVisualStyleBackColor = true;
			this->respuestaBtn->Click += gcnew System::EventHandler(this, &TriviaForm::respuestaBtn_Click);
			// 
			// CerrarBtn
			// 
			this->CerrarBtn->Location = System::Drawing::Point(987, 12);
			this->CerrarBtn->Name = L"CerrarBtn";
			this->CerrarBtn->Size = System::Drawing::Size(75, 23);
			this->CerrarBtn->TabIndex = 7;
			this->CerrarBtn->Text = L"CerrarBtn";
			this->CerrarBtn->UseVisualStyleBackColor = true;
			// 
			// EnunciadoBox1
			// 
			this->EnunciadoBox1->Location = System::Drawing::Point(252, 29);
			this->EnunciadoBox1->Name = L"EnunciadoBox1";
			this->EnunciadoBox1->Size = System::Drawing::Size(386, 96);
			this->EnunciadoBox1->TabIndex = 8;
			this->EnunciadoBox1->Text = L"";
			// 
			// TriviaForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1074, 369);
			this->Controls->Add(this->EnunciadoBox1);
			this->Controls->Add(this->CerrarBtn);
			this->Controls->Add(this->respuestaBtn);
			this->Controls->Add(this->Enunciadolabel);
			this->Controls->Add(this->RespuestaC);
			this->Controls->Add(this->RespuestaB);
			this->Controls->Add(this->RespuestaA);
			this->Controls->Add(this->label1);
			this->Name = L"TriviaForm";
			this->Text = L"TriviaForm";
			this->Load += gcnew System::EventHandler(this, &TriviaForm::TriviaForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void TriviaForm_Load(System::Object^ sender, System::EventArgs^ e) {
		timer30sec->Start();
		PreguntasList = gcnew List<Pregunta^>();
		PreguntasList = Controller::Controller::QueryAllPregunta();
		
	}

	private: System::Void timer_tick(System::Object^ sender, System::EventArgs^ e) { //cada 30s

			Pregunta^ pregunta = PreguntasList[numeropregunta];

			this->EnunciadoBox1->Text = pregunta->Enunciado;
			this->RespuestaA->Text = pregunta->Respuesta1;
			this->RespuestaB->Text = pregunta->Respuesta2;
			this->RespuestaC->Text = pregunta->Respuesta3;
			numeropregunta++;

			if (numeropregunta >= PreguntasList->Count) {
				numeropregunta = 0;
			}


//hola mundo
//RS
//atributos
//Puntos
//PuntosporDia
//Dia (ultimo dia donde se ganaron puntos)

//puntos maximos: ???
//puntos para estandar: ???
//puntos para premium: ???
	}


private: System::Void respuestaBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	//if(correcta){
	points+=5;

	//}



}
};
}
