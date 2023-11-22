#pragma once


#include "MembershipMaintenanceForm.h"
#include "AirQMaintenanceForm.h"
#include "COMaintenanceForm.h"
#include "TempHumMaintenanceForm.h"
#include "UserMaintenance.h"
#include "WeatherWarningMaintenance.h"
#include "ErrorWarning.h"
#include "SensorMaintenanceForm.h"

//Reporte
#include "TemperaturaReportForm.h"
#include "HumedadReporteForm.h"
#include "COReportForm.h"
#include "CalidadAireForm.h"

#include "SensorsReport.h"
#include "StatisticsForm.h"
#include "UserReport2.h"

namespace WeatherStationView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Model;

	/// <summary>
	/// Resumen de WeatherStationFormAdmin
	/// </summary>
	public ref class WeatherStationFormAdmin : public System::Windows::Forms::Form
	{
	public:
		WeatherStationFormAdmin(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->ControlBox = false;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~WeatherStationFormAdmin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ userToolStripMenuItem;





	private: System::Windows::Forms::ToolStripMenuItem^ ambienteToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;













	private: System::Windows::Forms::ToolStripMenuItem^ userToolStripMenuItem1;








	private: System::Windows::Forms::ToolStripMenuItem^ sensorToolStripMenuItem1;








	private: System::Windows::Forms::ToolStripMenuItem^ reporteToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^ reportesUsuarioToolStripMenuItem;
	private: System::Windows::Forms::Button^ btnLogOut;
	private: System::Windows::Forms::Button^ btnUser;
	private: System::Windows::Forms::Button^ btnUserReport;
	private: System::Windows::Forms::Button^ btnSensors;
	private: System::Windows::Forms::PictureBox^ pbImage;
	private: System::Windows::Forms::PictureBox^ pbUser;
	private: System::Windows::Forms::PictureBox^ pbReport;
	private: System::Windows::Forms::PictureBox^ pbSensors;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;










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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->userToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->userToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ambienteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sensorToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reporteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reportesUsuarioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btnLogOut = (gcnew System::Windows::Forms::Button());
			this->btnUser = (gcnew System::Windows::Forms::Button());
			this->btnUserReport = (gcnew System::Windows::Forms::Button());
			this->btnSensors = (gcnew System::Windows::Forms::Button());
			this->pbImage = (gcnew System::Windows::Forms::PictureBox());
			this->pbUser = (gcnew System::Windows::Forms::PictureBox());
			this->pbReport = (gcnew System::Windows::Forms::PictureBox());
			this->pbSensors = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbImage))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbUser))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbReport))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbSensors))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->toolStripMenuItem1,
					this->userToolStripMenuItem, this->ambienteToolStripMenuItem, this->reporteToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(1161, 30);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->Visible = false;
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->salirToolStripMenuItem });
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(73, 26);
			this->toolStripMenuItem1->Text = L"Archivo";
			this->toolStripMenuItem1->Visible = false;
			this->toolStripMenuItem1->Click += gcnew System::EventHandler(this, &WeatherStationFormAdmin::toolStripMenuItem1_Click);
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(121, 26);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &WeatherStationFormAdmin::salirToolStripMenuItem_Click);
			// 
			// userToolStripMenuItem
			// 
			this->userToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->userToolStripMenuItem1 });
			this->userToolStripMenuItem->Name = L"userToolStripMenuItem";
			this->userToolStripMenuItem->Size = System::Drawing::Size(56, 26);
			this->userToolStripMenuItem->Text = L"Perfil";
			this->userToolStripMenuItem->Visible = false;
			// 
			// userToolStripMenuItem1
			// 
			this->userToolStripMenuItem1->Name = L"userToolStripMenuItem1";
			this->userToolStripMenuItem1->Size = System::Drawing::Size(121, 26);
			this->userToolStripMenuItem1->Text = L"User";
			this->userToolStripMenuItem1->Click += gcnew System::EventHandler(this, &WeatherStationFormAdmin::userToolStripMenuItem1_Click);
			// 
			// ambienteToolStripMenuItem
			// 
			this->ambienteToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->sensorToolStripMenuItem1 });
			this->ambienteToolStripMenuItem->Name = L"ambienteToolStripMenuItem";
			this->ambienteToolStripMenuItem->Size = System::Drawing::Size(92, 26);
			this->ambienteToolStripMenuItem->Text = L"Ambiente ";
			this->ambienteToolStripMenuItem->Visible = false;
			// 
			// sensorToolStripMenuItem1
			// 
			this->sensorToolStripMenuItem1->Name = L"sensorToolStripMenuItem1";
			this->sensorToolStripMenuItem1->Size = System::Drawing::Size(150, 26);
			this->sensorToolStripMenuItem1->Text = L"Sensores";
			this->sensorToolStripMenuItem1->Click += gcnew System::EventHandler(this, &WeatherStationFormAdmin::sensorToolStripMenuItem1_Click);
			// 
			// reporteToolStripMenuItem
			// 
			this->reporteToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->reportesUsuarioToolStripMenuItem });
			this->reporteToolStripMenuItem->Name = L"reporteToolStripMenuItem";
			this->reporteToolStripMenuItem->Size = System::Drawing::Size(82, 26);
			this->reporteToolStripMenuItem->Text = L"Reportes";
			this->reporteToolStripMenuItem->Visible = false;
			// 
			// reportesUsuarioToolStripMenuItem
			// 
			this->reportesUsuarioToolStripMenuItem->Name = L"reportesUsuarioToolStripMenuItem";
			this->reportesUsuarioToolStripMenuItem->Size = System::Drawing::Size(205, 26);
			this->reportesUsuarioToolStripMenuItem->Text = L"Reportes Usuario";
			this->reportesUsuarioToolStripMenuItem->Click += gcnew System::EventHandler(this, &WeatherStationFormAdmin::reportesUsuarioToolStripMenuItem_Click);
			// 
			// btnLogOut
			// 
			this->btnLogOut->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnLogOut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLogOut->ForeColor = System::Drawing::Color::Aqua;
			this->btnLogOut->Location = System::Drawing::Point(1015, 610);
			this->btnLogOut->Margin = System::Windows::Forms::Padding(4);
			this->btnLogOut->Name = L"btnLogOut";
			this->btnLogOut->Size = System::Drawing::Size(133, 55);
			this->btnLogOut->TabIndex = 1;
			this->btnLogOut->Text = L"Log Out";
			this->btnLogOut->UseVisualStyleBackColor = false;
			this->btnLogOut->Click += gcnew System::EventHandler(this, &WeatherStationFormAdmin::btnLogOut_Click);
			// 
			// btnUser
			// 
			this->btnUser->BackColor = System::Drawing::Color::Black;
			this->btnUser->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUser->ForeColor = System::Drawing::Color::White;
			this->btnUser->Location = System::Drawing::Point(441, 115);
			this->btnUser->Margin = System::Windows::Forms::Padding(4);
			this->btnUser->Name = L"btnUser";
			this->btnUser->Size = System::Drawing::Size(148, 52);
			this->btnUser->TabIndex = 2;
			this->btnUser->Text = L"Usuario";
			this->btnUser->UseVisualStyleBackColor = false;
			this->btnUser->Click += gcnew System::EventHandler(this, &WeatherStationFormAdmin::btnUser_Click);
			// 
			// btnUserReport
			// 
			this->btnUserReport->BackColor = System::Drawing::Color::Black;
			this->btnUserReport->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUserReport->ForeColor = System::Drawing::Color::White;
			this->btnUserReport->Location = System::Drawing::Point(441, 237);
			this->btnUserReport->Margin = System::Windows::Forms::Padding(4);
			this->btnUserReport->Name = L"btnUserReport";
			this->btnUserReport->Size = System::Drawing::Size(180, 48);
			this->btnUserReport->TabIndex = 3;
			this->btnUserReport->Text = L"Reporte Usuario";
			this->btnUserReport->UseVisualStyleBackColor = false;
			this->btnUserReport->Click += gcnew System::EventHandler(this, &WeatherStationFormAdmin::btnUserReport_Click);
			// 
			// btnSensors
			// 
			this->btnSensors->BackColor = System::Drawing::Color::Black;
			this->btnSensors->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSensors->ForeColor = System::Drawing::Color::White;
			this->btnSensors->Location = System::Drawing::Point(441, 395);
			this->btnSensors->Margin = System::Windows::Forms::Padding(4);
			this->btnSensors->Name = L"btnSensors";
			this->btnSensors->Size = System::Drawing::Size(167, 55);
			this->btnSensors->TabIndex = 4;
			this->btnSensors->Text = L"Sensores";
			this->btnSensors->UseVisualStyleBackColor = false;
			this->btnSensors->Click += gcnew System::EventHandler(this, &WeatherStationFormAdmin::btnSensors_Click);
			// 
			// pbImage
			// 
			this->pbImage->Location = System::Drawing::Point(103, 237);
			this->pbImage->Margin = System::Windows::Forms::Padding(4);
			this->pbImage->Name = L"pbImage";
			this->pbImage->Size = System::Drawing::Size(201, 183);
			this->pbImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbImage->TabIndex = 5;
			this->pbImage->TabStop = false;
			this->pbImage->Click += gcnew System::EventHandler(this, &WeatherStationFormAdmin::pbImage_Click);
			// 
			// pbUser
			// 
			this->pbUser->Location = System::Drawing::Point(908, 75);
			this->pbUser->Margin = System::Windows::Forms::Padding(4);
			this->pbUser->Name = L"pbUser";
			this->pbUser->Size = System::Drawing::Size(109, 103);
			this->pbUser->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbUser->TabIndex = 6;
			this->pbUser->TabStop = false;
			// 
			// pbReport
			// 
			this->pbReport->Location = System::Drawing::Point(908, 211);
			this->pbReport->Margin = System::Windows::Forms::Padding(4);
			this->pbReport->Name = L"pbReport";
			this->pbReport->Size = System::Drawing::Size(109, 103);
			this->pbReport->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbReport->TabIndex = 7;
			this->pbReport->TabStop = false;
			// 
			// pbSensors
			// 
			this->pbSensors->Location = System::Drawing::Point(908, 359);
			this->pbSensors->Margin = System::Windows::Forms::Padding(4);
			this->pbSensors->Name = L"pbSensors";
			this->pbSensors->Size = System::Drawing::Size(109, 91);
			this->pbSensors->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbSensors->TabIndex = 8;
			this->pbSensors->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::WindowText;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(7, 30);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(177, 46);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Weather";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::WindowText;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(113, 75);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(152, 46);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Station";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::WindowText;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(240, 121);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(138, 46);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Admin";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Aqua;
			this->label4->Location = System::Drawing::Point(379, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(304, 22);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Realice el Mantenimiento que desee:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Aqua;
			this->label5->Location = System::Drawing::Point(390, 75);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(448, 22);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Accede a la base de Datos de los usuario Registrados:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Aqua;
			this->label6->Location = System::Drawing::Point(398, 211);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(343, 22);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Filtre los Usuario de acuerdo a su criterio:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Aqua;
			this->label7->Location = System::Drawing::Point(398, 359);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(432, 22);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Accede a una Base de Datos de los datos sensados:";
			// 
			// WeatherStationFormAdmin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Cyan;
			this->ClientSize = System::Drawing::Size(1161, 667);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pbSensors);
			this->Controls->Add(this->pbReport);
			this->Controls->Add(this->pbUser);
			this->Controls->Add(this->pbImage);
			this->Controls->Add(this->btnSensors);
			this->Controls->Add(this->btnUserReport);
			this->Controls->Add(this->btnUser);
			this->Controls->Add(this->btnLogOut);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"WeatherStationFormAdmin";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"WeatherStationFormAdmin";
			this->Load += gcnew System::EventHandler(this, &WeatherStationFormAdmin::WeatherStationFormAdmin_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbImage))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbUser))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbReport))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbSensors))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void WeatherStationFormAdmin_Load(System::Object^ sender, System::EventArgs^ e) {


		pbImage->Image = Image::FromFile("LogoReporte.png");
		pbUser->Image = Image::FromFile("User.png");
		pbReport->Image = Image::FromFile("Report.png");
		pbSensors->Image = Image::FromFile("Sensors.png");
	}
	private: System::Void toolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void userToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {

	}
private: System::Void idToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void temporizadorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void estaditicaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void membresiaToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	MembershipMaintenanceForm obj;
	obj.ShowDialog();
}

private: System::Void calidadAireToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	AirQMaintenanceForm obj;
	obj.ShowDialog();
	//AirQMaintenanceForm^ airq = gcnew AirQMaintenanceForm();
	//airq->Show();
}
private: System::Void concentracionCOToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	COMaintenanceForm obj;
	obj.ShowDialog();
}
private: System::Void temperaturaYHumedadToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	TempHumMaintenanceForm obj;
	obj.ShowDialog();
}

private: System::Void alertaMeteorologicaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	WeatherWarningMaintenance obj;
	obj.ShowDialog();
}
private: System::Void alertaErrorToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	ErrorWarning obj;
	obj.ShowDialog();
}
private: System::Void sensorToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void graficosTempToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	TemperaturaReportForm^ obj = gcnew TemperaturaReportForm();
	obj->ShowDialog();
}
private: System::Void graficosHumToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	HumedadReporteForm^ obj = gcnew HumedadReporteForm();
	obj->ShowDialog();
}
private: System::Void graficosNivelCOToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	COReportForm^ obj = gcnew COReportForm();
	obj->ShowDialog();
}
private: System::Void graficoCalidadAireToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
	CalidadAireForm^ obj = gcnew CalidadAireForm();
	obj->ShowDialog();
}
private: System::Void reportesSensoresToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//SensorsReport^ obj = gcnew SensorsReport();
	//obj->ShowDialog();
}
private: System::Void pieToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	StatisticsForm^ obj = gcnew StatisticsForm();
	obj->ShowDialog();
}
private: System::Void reportesUsuarioToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void btnLogOut_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void btnUser_Click(System::Object^ sender, System::EventArgs^ e) {
	UserMaintenance^ obj = gcnew UserMaintenance();
	obj->ControlBox = false;
	obj->ShowDialog();

}
private: System::Void btnSensors_Click(System::Object^ sender, System::EventArgs^ e) {
	SensorMaintenanceForm^ obj = gcnew SensorMaintenanceForm();
	obj->ShowDialog();
}
private: System::Void btnUserReport_Click(System::Object^ sender, System::EventArgs^ e) {
	UserReport^ obj = gcnew UserReport();
	obj->ShowDialog();
}
private: System::Void pbImage_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
