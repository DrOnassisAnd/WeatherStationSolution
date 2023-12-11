#pragma once


#include "MembershipMaintenanceForm.h"
#include "AirQMaintenanceForm.h"
#include "COMaintenanceForm.h"
#include "TempHumMaintenanceForm.h"
#include "UserMaintenance.h"
#include "WeatherWarningMaintenance.h"
#include "ErrorWarning.h"
#include "SensorMaintenanceForm.h"
#include "CardMaintenanceForm.h"
//Reporte
#include "TemperaturaReportForm.h"
#include "HumedadReporteForm.h"
#include "COReportForm.h"
#include "CalidadAireForm.h"

#include "SensorsReport.h"
#include "StatisticsForm.h"
#include "UserReport2.h"

#include "PreguntasMaintenanceForm.h"


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
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ pbImage;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label8;

	private: System::Windows::Forms::Button^ btnCard;
	private: System::Windows::Forms::Label^ lblCards;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

















	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(WeatherStationFormAdmin::typeid));
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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pbImage = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->btnCard = (gcnew System::Windows::Forms::Button());
			this->lblCards = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbUser))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbReport))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbSensors))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbImage))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->toolStripMenuItem1,
					this->userToolStripMenuItem, this->ambienteToolStripMenuItem, this->reporteToolStripMenuItem
			});
			resources->ApplyResources(this->menuStrip1, L"menuStrip1");
			this->menuStrip1->Name = L"menuStrip1";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->salirToolStripMenuItem });
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			resources->ApplyResources(this->toolStripMenuItem1, L"toolStripMenuItem1");
			this->toolStripMenuItem1->Click += gcnew System::EventHandler(this, &WeatherStationFormAdmin::toolStripMenuItem1_Click);
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			resources->ApplyResources(this->salirToolStripMenuItem, L"salirToolStripMenuItem");
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &WeatherStationFormAdmin::salirToolStripMenuItem_Click);
			// 
			// userToolStripMenuItem
			// 
			this->userToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->userToolStripMenuItem1 });
			this->userToolStripMenuItem->Name = L"userToolStripMenuItem";
			resources->ApplyResources(this->userToolStripMenuItem, L"userToolStripMenuItem");
			// 
			// userToolStripMenuItem1
			// 
			this->userToolStripMenuItem1->Name = L"userToolStripMenuItem1";
			resources->ApplyResources(this->userToolStripMenuItem1, L"userToolStripMenuItem1");
			this->userToolStripMenuItem1->Click += gcnew System::EventHandler(this, &WeatherStationFormAdmin::userToolStripMenuItem1_Click);
			// 
			// ambienteToolStripMenuItem
			// 
			this->ambienteToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->sensorToolStripMenuItem1 });
			this->ambienteToolStripMenuItem->Name = L"ambienteToolStripMenuItem";
			resources->ApplyResources(this->ambienteToolStripMenuItem, L"ambienteToolStripMenuItem");
			// 
			// sensorToolStripMenuItem1
			// 
			this->sensorToolStripMenuItem1->Name = L"sensorToolStripMenuItem1";
			resources->ApplyResources(this->sensorToolStripMenuItem1, L"sensorToolStripMenuItem1");
			this->sensorToolStripMenuItem1->Click += gcnew System::EventHandler(this, &WeatherStationFormAdmin::sensorToolStripMenuItem1_Click);
			// 
			// reporteToolStripMenuItem
			// 
			this->reporteToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->reportesUsuarioToolStripMenuItem });
			this->reporteToolStripMenuItem->Name = L"reporteToolStripMenuItem";
			resources->ApplyResources(this->reporteToolStripMenuItem, L"reporteToolStripMenuItem");
			// 
			// reportesUsuarioToolStripMenuItem
			// 
			this->reportesUsuarioToolStripMenuItem->Name = L"reportesUsuarioToolStripMenuItem";
			resources->ApplyResources(this->reportesUsuarioToolStripMenuItem, L"reportesUsuarioToolStripMenuItem");
			this->reportesUsuarioToolStripMenuItem->Click += gcnew System::EventHandler(this, &WeatherStationFormAdmin::reportesUsuarioToolStripMenuItem_Click);
			// 
			// btnLogOut
			// 
			this->btnLogOut->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			resources->ApplyResources(this->btnLogOut, L"btnLogOut");
			this->btnLogOut->ForeColor = System::Drawing::SystemColors::Control;
			this->btnLogOut->Name = L"btnLogOut";
			this->btnLogOut->UseVisualStyleBackColor = false;
			this->btnLogOut->Click += gcnew System::EventHandler(this, &WeatherStationFormAdmin::btnLogOut_Click);
			// 
			// btnUser
			// 
			this->btnUser->BackColor = System::Drawing::Color::Black;
			resources->ApplyResources(this->btnUser, L"btnUser");
			this->btnUser->ForeColor = System::Drawing::Color::White;
			this->btnUser->Name = L"btnUser";
			this->btnUser->UseVisualStyleBackColor = false;
			this->btnUser->Click += gcnew System::EventHandler(this, &WeatherStationFormAdmin::btnUser_Click);
			// 
			// btnUserReport
			// 
			this->btnUserReport->BackColor = System::Drawing::Color::Black;
			resources->ApplyResources(this->btnUserReport, L"btnUserReport");
			this->btnUserReport->ForeColor = System::Drawing::Color::White;
			this->btnUserReport->Name = L"btnUserReport";
			this->btnUserReport->UseVisualStyleBackColor = false;
			this->btnUserReport->Click += gcnew System::EventHandler(this, &WeatherStationFormAdmin::btnUserReport_Click);
			// 
			// btnSensors
			// 
			this->btnSensors->BackColor = System::Drawing::Color::Black;
			resources->ApplyResources(this->btnSensors, L"btnSensors");
			this->btnSensors->ForeColor = System::Drawing::Color::White;
			this->btnSensors->Name = L"btnSensors";
			this->btnSensors->UseVisualStyleBackColor = false;
			this->btnSensors->Click += gcnew System::EventHandler(this, &WeatherStationFormAdmin::btnSensors_Click);
			// 
			// pbUser
			// 
			resources->ApplyResources(this->pbUser, L"pbUser");
			this->pbUser->Name = L"pbUser";
			this->pbUser->TabStop = false;
			this->pbUser->Click += gcnew System::EventHandler(this, &WeatherStationFormAdmin::pbUser_Click);
			// 
			// pbReport
			// 
			resources->ApplyResources(this->pbReport, L"pbReport");
			this->pbReport->Name = L"pbReport";
			this->pbReport->TabStop = false;
			this->pbReport->Click += gcnew System::EventHandler(this, &WeatherStationFormAdmin::pbReport_Click);
			// 
			// pbSensors
			// 
			resources->ApplyResources(this->pbSensors, L"pbSensors");
			this->pbSensors->Name = L"pbSensors";
			this->pbSensors->TabStop = false;
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Name = L"label1";
			// 
			// label2
			// 
			resources->ApplyResources(this->label2, L"label2");
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Name = L"label2";
			// 
			// label3
			// 
			resources->ApplyResources(this->label3, L"label3");
			this->label3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Name = L"label3";
			// 
			// label4
			// 
			resources->ApplyResources(this->label4, L"label4");
			this->label4->BackColor = System::Drawing::SystemColors::Control;
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Name = L"label4";
			// 
			// label5
			// 
			resources->ApplyResources(this->label5, L"label5");
			this->label5->BackColor = System::Drawing::SystemColors::Control;
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Name = L"label5";
			// 
			// label6
			// 
			resources->ApplyResources(this->label6, L"label6");
			this->label6->BackColor = System::Drawing::SystemColors::Control;
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Name = L"label6";
			// 
			// label7
			// 
			resources->ApplyResources(this->label7, L"label7");
			this->label7->BackColor = System::Drawing::SystemColors::Control;
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Name = L"label7";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->pbImage);
			this->panel1->Controls->Add(this->label2);
			resources->ApplyResources(this->panel1, L"panel1");
			this->panel1->Name = L"panel1";
			// 
			// pbImage
			// 
			resources->ApplyResources(this->pbImage, L"pbImage");
			this->pbImage->Name = L"pbImage";
			this->pbImage->TabStop = false;
			this->pbImage->Click += gcnew System::EventHandler(this, &WeatherStationFormAdmin::pbImage_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::Control;
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->btnCard);
			this->panel2->Controls->Add(this->lblCards);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->pbSensors);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->pbReport);
			this->panel2->Controls->Add(this->btnLogOut);
			this->panel2->Controls->Add(this->pbUser);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->btnSensors);
			this->panel2->Controls->Add(this->btnUser);
			this->panel2->Controls->Add(this->btnUserReport);
			this->panel2->Controls->Add(this->label5);
			resources->ApplyResources(this->panel2, L"panel2");
			this->panel2->Name = L"panel2";
			// 
			// pictureBox2
			// 
			resources->ApplyResources(this->pictureBox2, L"pictureBox2");
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			resources->ApplyResources(this->pictureBox1, L"pictureBox1");
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Black;
			resources->ApplyResources(this->button1, L"button1");
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Name = L"button1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &WeatherStationFormAdmin::button1_Click);
			// 
			// label8
			// 
			resources->ApplyResources(this->label8, L"label8");
			this->label8->BackColor = System::Drawing::SystemColors::Control;
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Name = L"label8";
			// 
			// btnCard
			// 
			this->btnCard->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			resources->ApplyResources(this->btnCard, L"btnCard");
			this->btnCard->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnCard->Name = L"btnCard";
			this->btnCard->UseVisualStyleBackColor = false;
			this->btnCard->Click += gcnew System::EventHandler(this, &WeatherStationFormAdmin::btnCard_Click);
			// 
			// lblCards
			// 
			resources->ApplyResources(this->lblCards, L"lblCards");
			this->lblCards->Name = L"lblCards";
			// 
			// WeatherStationFormAdmin
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->panel1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"WeatherStationFormAdmin";
			this->Load += gcnew System::EventHandler(this, &WeatherStationFormAdmin::WeatherStationFormAdmin_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbUser))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbReport))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbSensors))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbImage))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void WeatherStationFormAdmin_Load(System::Object^ sender, System::EventArgs^ e) {


		pbImage->Image = Image::FromFile("logoadminzz.png");
		pbUser->Image = Image::FromFile("User.png");
		pbReport->Image = Image::FromFile("Report.png");
		pbSensors->Image = Image::FromFile("Sensors.png");


		pictureBox1->Image = Image::FromFile("Preguntas.png");
		pictureBox2->Image = Image::FromFile("tarjetas.jpeg");
		pbImage->Image = Image::FromFile("logoadmin.jpg");
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
private: System::Void pbReport_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pbUser_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	PreguntasMaintenanceForm^ obj = gcnew PreguntasMaintenanceForm();
	obj->ShowDialog();


}

	private: System::Void btnCard_Click(System::Object^ sender, System::EventArgs^ e) {
		CardMaintenanceForm^ obj = gcnew CardMaintenanceForm();
		obj->ShowDialog();

	}

};
}