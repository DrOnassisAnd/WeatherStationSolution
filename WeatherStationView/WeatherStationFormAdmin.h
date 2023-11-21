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
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(871, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->Visible = false;
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->salirToolStripMenuItem });
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(60, 20);
			this->toolStripMenuItem1->Text = L"Archivo";
			this->toolStripMenuItem1->Visible = false;
			this->toolStripMenuItem1->Click += gcnew System::EventHandler(this, &WeatherStationFormAdmin::toolStripMenuItem1_Click);
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(96, 22);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &WeatherStationFormAdmin::salirToolStripMenuItem_Click);
			// 
			// userToolStripMenuItem
			// 
			this->userToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->userToolStripMenuItem1 });
			this->userToolStripMenuItem->Name = L"userToolStripMenuItem";
			this->userToolStripMenuItem->Size = System::Drawing::Size(46, 20);
			this->userToolStripMenuItem->Text = L"Perfil";
			this->userToolStripMenuItem->Visible = false;
			// 
			// userToolStripMenuItem1
			// 
			this->userToolStripMenuItem1->Name = L"userToolStripMenuItem1";
			this->userToolStripMenuItem1->Size = System::Drawing::Size(97, 22);
			this->userToolStripMenuItem1->Text = L"User";
			this->userToolStripMenuItem1->Click += gcnew System::EventHandler(this, &WeatherStationFormAdmin::userToolStripMenuItem1_Click);
			// 
			// ambienteToolStripMenuItem
			// 
			this->ambienteToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->sensorToolStripMenuItem1 });
			this->ambienteToolStripMenuItem->Name = L"ambienteToolStripMenuItem";
			this->ambienteToolStripMenuItem->Size = System::Drawing::Size(74, 20);
			this->ambienteToolStripMenuItem->Text = L"Ambiente ";
			this->ambienteToolStripMenuItem->Visible = false;
			// 
			// sensorToolStripMenuItem1
			// 
			this->sensorToolStripMenuItem1->Name = L"sensorToolStripMenuItem1";
			this->sensorToolStripMenuItem1->Size = System::Drawing::Size(120, 22);
			this->sensorToolStripMenuItem1->Text = L"Sensores";
			this->sensorToolStripMenuItem1->Click += gcnew System::EventHandler(this, &WeatherStationFormAdmin::sensorToolStripMenuItem1_Click);
			// 
			// reporteToolStripMenuItem
			// 
			this->reporteToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->reportesUsuarioToolStripMenuItem });
			this->reporteToolStripMenuItem->Name = L"reporteToolStripMenuItem";
			this->reporteToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->reporteToolStripMenuItem->Text = L"Reportes";
			this->reporteToolStripMenuItem->Visible = false;
			// 
			// reportesUsuarioToolStripMenuItem
			// 
			this->reportesUsuarioToolStripMenuItem->Name = L"reportesUsuarioToolStripMenuItem";
			this->reportesUsuarioToolStripMenuItem->Size = System::Drawing::Size(163, 22);
			this->reportesUsuarioToolStripMenuItem->Text = L"Reportes Usuario";
			this->reportesUsuarioToolStripMenuItem->Click += gcnew System::EventHandler(this, &WeatherStationFormAdmin::reportesUsuarioToolStripMenuItem_Click);
			// 
			// btnLogOut
			// 
			this->btnLogOut->BackColor = System::Drawing::Color::Black;
			this->btnLogOut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLogOut->ForeColor = System::Drawing::Color::White;
			this->btnLogOut->Location = System::Drawing::Point(759, 331);
			this->btnLogOut->Name = L"btnLogOut";
			this->btnLogOut->Size = System::Drawing::Size(100, 45);
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
			this->btnUser->Location = System::Drawing::Point(376, 34);
			this->btnUser->Name = L"btnUser";
			this->btnUser->Size = System::Drawing::Size(135, 84);
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
			this->btnUserReport->Location = System::Drawing::Point(376, 167);
			this->btnUserReport->Name = L"btnUserReport";
			this->btnUserReport->Size = System::Drawing::Size(135, 84);
			this->btnUserReport->TabIndex = 3;
			this->btnUserReport->Text = L"Reporte Usurario";
			this->btnUserReport->UseVisualStyleBackColor = false;
			this->btnUserReport->Click += gcnew System::EventHandler(this, &WeatherStationFormAdmin::btnUserReport_Click);
			// 
			// btnSensors
			// 
			this->btnSensors->BackColor = System::Drawing::Color::Black;
			this->btnSensors->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSensors->ForeColor = System::Drawing::Color::White;
			this->btnSensors->Location = System::Drawing::Point(376, 292);
			this->btnSensors->Name = L"btnSensors";
			this->btnSensors->Size = System::Drawing::Size(135, 84);
			this->btnSensors->TabIndex = 4;
			this->btnSensors->Text = L"Sensores";
			this->btnSensors->UseVisualStyleBackColor = false;
			this->btnSensors->Click += gcnew System::EventHandler(this, &WeatherStationFormAdmin::btnSensors_Click);
			// 
			// pbImage
			// 
			this->pbImage->Location = System::Drawing::Point(29, 155);
			this->pbImage->Name = L"pbImage";
			this->pbImage->Size = System::Drawing::Size(264, 221);
			this->pbImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbImage->TabIndex = 5;
			this->pbImage->TabStop = false;
			this->pbImage->Click += gcnew System::EventHandler(this, &WeatherStationFormAdmin::pbImage_Click);
			// 
			// pbUser
			// 
			this->pbUser->Location = System::Drawing::Point(577, 34);
			this->pbUser->Name = L"pbUser";
			this->pbUser->Size = System::Drawing::Size(126, 84);
			this->pbUser->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbUser->TabIndex = 6;
			this->pbUser->TabStop = false;
			// 
			// pbReport
			// 
			this->pbReport->Location = System::Drawing::Point(577, 167);
			this->pbReport->Name = L"pbReport";
			this->pbReport->Size = System::Drawing::Size(126, 84);
			this->pbReport->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbReport->TabIndex = 7;
			this->pbReport->TabStop = false;
			// 
			// pbSensors
			// 
			this->pbSensors->Location = System::Drawing::Point(577, 292);
			this->pbSensors->Name = L"pbSensors";
			this->pbSensors->Size = System::Drawing::Size(126, 84);
			this->pbSensors->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbSensors->TabIndex = 8;
			this->pbSensors->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(5, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(145, 37);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Weather";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(85, 61);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(124, 37);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Station";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(180, 98);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(114, 37);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Admin";
			// 
			// WeatherStationFormAdmin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Info;
			this->ClientSize = System::Drawing::Size(871, 401);
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
