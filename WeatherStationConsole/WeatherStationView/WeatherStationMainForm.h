#pragma once

namespace WeatherStationView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de WeatherStationMainForm
	/// </summary>
	public ref class WeatherStationMainForm : public System::Windows::Forms::Form
	{
	public:
		WeatherStationMainForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			IsMdiContainer = true;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~WeatherStationMainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ TitleBar;
	protected:
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::PictureBox^ btnClose;
	private: System::Windows::Forms::PictureBox^ btnMinimize;




	protected:

	protected:







	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;
	    bool holdedMouse = false;
	    Point lastLocation;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(WeatherStationMainForm::typeid));
			this->TitleBar = (gcnew System::Windows::Forms::Panel());
			this->btnMinimize = (gcnew System::Windows::Forms::PictureBox());
			this->btnClose = (gcnew System::Windows::Forms::PictureBox());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->TitleBar->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnMinimize))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnClose))->BeginInit();
			this->SuspendLayout();
			// 
			// TitleBar
			// 
			this->TitleBar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(57)));
			this->TitleBar->Controls->Add(this->btnMinimize);
			this->TitleBar->Controls->Add(this->btnClose);
			this->TitleBar->Dock = System::Windows::Forms::DockStyle::Top;
			this->TitleBar->Location = System::Drawing::Point(0, 0);
			this->TitleBar->Name = L"TitleBar";
			this->TitleBar->Size = System::Drawing::Size(374, 50);
			this->TitleBar->TabIndex = 0;
			this->TitleBar->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &WeatherStationMainForm::TitleBar_Paint);
			this->TitleBar->ResumeLayout(false);
			// 
			// btnMinimize
			// 
			this->btnMinimize->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnMinimize->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMinimize.Image")));
			this->btnMinimize->Location = System::Drawing::Point(314, 12);
			this->btnMinimize->Name = L"btnMinimize";
			this->btnMinimize->Size = System::Drawing::Size(16, 16);
			this->btnMinimize->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->btnMinimize->TabIndex = 1;
			this->btnMinimize->TabStop = false;
			this->btnMinimize->Click += gcnew System::EventHandler(this, &WeatherStationMainForm::btnMinimize_Click);
			// 
			// btnClose	
			// 
			this->btnClose->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnClose->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnClose.Image")));
			this->btnClose->Location = System::Drawing::Point(346, 12);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(16, 16);
			this->btnClose->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->btnClose->TabIndex = 0;
			this->btnClose->TabStop = false;
			this->btnClose->Click += gcnew System::EventHandler(this, &WeatherStationMainForm::btnClose_Click);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(57)));
			this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->flowLayoutPanel1->Location = System::Drawing::Point(0, 550);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(374, 50);
			this->flowLayoutPanel1->TabIndex = 1;
			// 
			// WeatherStationMainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(78)));
			this->ClientSize = System::Drawing::Size(374, 600);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->TitleBar);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &WeatherStationMainForm::WeatherStationMainForm_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &WeatherStationMainForm::WeatherStationMainForm_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &WeatherStationMainForm::WeatherStationMainForm_MouseUp);
			this->Name = L"WeatherStationMainForm";
			this->Opacity = 0.8;
			this->Text = L"  ";
			this->Load += gcnew System::EventHandler(this, &WeatherStationMainForm::WeatherStationMainForm_Load);
			this->TitleBar->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnMinimize))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnClose))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void WeatherStationMainForm_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void btnClose_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::Application::Exit();
	}
    private: System::Void btnMinimize_Click(System::Object^ sender, System::EventArgs^ e) {
		this->WindowState = System::Windows::Forms::FormWindowState::Minimized;
	} 
	private: System::Void WeatherStationMainForm_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e){
		if (e->Button == System::Windows::Forms::MouseButtons::Left) {
			holdedMouse = true;
			lastLocation = e->Location;
		}
	}
	private: System::Void WeatherStationMainForm_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e){
		if (holdedMouse) {
			this->Left += (e->X - lastLocation.X);
			this->Top += (e->Y - lastLocation.Y);
		}
	}
	private: System::Void WeatherStationMainForm_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Left) {
			holdedMouse = false;
		}
	}
private: System::Void TitleBar_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
