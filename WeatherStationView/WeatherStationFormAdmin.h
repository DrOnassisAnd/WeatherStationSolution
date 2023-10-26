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

namespace WeatherStationView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
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
	private: System::Windows::Forms::ToolStripMenuItem^ membresiaToolStripMenuItem1;











	private: System::Windows::Forms::ToolStripMenuItem^ estaditicaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ userToolStripMenuItem1;








	private: System::Windows::Forms::ToolStripMenuItem^ sensorToolStripMenuItem1;

	private: System::Windows::Forms::ToolStripMenuItem^ alertaToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ alertaMeteorologicaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ alertaErrorToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ graficosTempToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ graficosHumToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ graficosNivelCOToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ graficoCalidadAireToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reporteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reportesSensoresToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ pieToolStripMenuItem;









	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->userToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->membresiaToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->userToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ambienteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->estaditicaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->graficosTempToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->graficosHumToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->graficosNivelCOToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->graficoCalidadAireToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sensorToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->alertaToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->alertaMeteorologicaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->alertaErrorToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reporteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reportesSensoresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->toolStripMenuItem1,
					this->userToolStripMenuItem, this->ambienteToolStripMenuItem, this->reporteToolStripMenuItem, this->pieToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(871, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->salirToolStripMenuItem });
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(60, 20);
			this->toolStripMenuItem1->Text = L"Archivo";
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
			this->userToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->membresiaToolStripMenuItem1,
					this->userToolStripMenuItem1
			});
			this->userToolStripMenuItem->Name = L"userToolStripMenuItem";
			this->userToolStripMenuItem->Size = System::Drawing::Size(46, 20);
			this->userToolStripMenuItem->Text = L"Perfil";
			// 
			// membresiaToolStripMenuItem1
			// 
			this->membresiaToolStripMenuItem1->Name = L"membresiaToolStripMenuItem1";
			this->membresiaToolStripMenuItem1->Size = System::Drawing::Size(133, 22);
			this->membresiaToolStripMenuItem1->Text = L"Membresia";
			this->membresiaToolStripMenuItem1->Click += gcnew System::EventHandler(this, &WeatherStationFormAdmin::membresiaToolStripMenuItem1_Click);
			// 
			// userToolStripMenuItem1
			// 
			this->userToolStripMenuItem1->Name = L"userToolStripMenuItem1";
			this->userToolStripMenuItem1->Size = System::Drawing::Size(133, 22);
			this->userToolStripMenuItem1->Text = L"User";
			this->userToolStripMenuItem1->Click += gcnew System::EventHandler(this, &WeatherStationFormAdmin::userToolStripMenuItem1_Click);
			// 
			// ambienteToolStripMenuItem
			// 
			this->ambienteToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->estaditicaToolStripMenuItem,
					this->sensorToolStripMenuItem1, this->alertaToolStripMenuItem1
			});
			this->ambienteToolStripMenuItem->Name = L"ambienteToolStripMenuItem";
			this->ambienteToolStripMenuItem->Size = System::Drawing::Size(74, 20);
			this->ambienteToolStripMenuItem->Text = L"Ambiente ";
			// 
			// estaditicaToolStripMenuItem
			// 
			this->estaditicaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->graficosTempToolStripMenuItem,
					this->graficosHumToolStripMenuItem, this->graficosNivelCOToolStripMenuItem, this->graficoCalidadAireToolStripMenuItem
			});
			this->estaditicaToolStripMenuItem->Name = L"estaditicaToolStripMenuItem";
			this->estaditicaToolStripMenuItem->Size = System::Drawing::Size(129, 22);
			this->estaditicaToolStripMenuItem->Text = L"Estadistica";
			this->estaditicaToolStripMenuItem->Click += gcnew System::EventHandler(this, &WeatherStationFormAdmin::estaditicaToolStripMenuItem_Click);
			// 
			// graficosTempToolStripMenuItem
			// 
			this->graficosTempToolStripMenuItem->Name = L"graficosTempToolStripMenuItem";
			this->graficosTempToolStripMenuItem->Size = System::Drawing::Size(173, 22);
			this->graficosTempToolStripMenuItem->Text = L"GraficosTemp";
			this->graficosTempToolStripMenuItem->Click += gcnew System::EventHandler(this, &WeatherStationFormAdmin::graficosTempToolStripMenuItem_Click);
			// 
			// graficosHumToolStripMenuItem
			// 
			this->graficosHumToolStripMenuItem->Name = L"graficosHumToolStripMenuItem";
			this->graficosHumToolStripMenuItem->Size = System::Drawing::Size(173, 22);
			this->graficosHumToolStripMenuItem->Text = L"GraficosHum";
			this->graficosHumToolStripMenuItem->Click += gcnew System::EventHandler(this, &WeatherStationFormAdmin::graficosHumToolStripMenuItem_Click);
			// 
			// graficosNivelCOToolStripMenuItem
			// 
			this->graficosNivelCOToolStripMenuItem->Name = L"graficosNivelCOToolStripMenuItem";
			this->graficosNivelCOToolStripMenuItem->Size = System::Drawing::Size(173, 22);
			this->graficosNivelCOToolStripMenuItem->Text = L"GraficosNivelCO";
			this->graficosNivelCOToolStripMenuItem->Click += gcnew System::EventHandler(this, &WeatherStationFormAdmin::graficosNivelCOToolStripMenuItem_Click);
			// 
			// graficoCalidadAireToolStripMenuItem
			// 
			this->graficoCalidadAireToolStripMenuItem->Name = L"graficoCalidadAireToolStripMenuItem";
			this->graficoCalidadAireToolStripMenuItem->Size = System::Drawing::Size(173, 22);
			this->graficoCalidadAireToolStripMenuItem->Text = L"GraficoCalidadAire";
			this->graficoCalidadAireToolStripMenuItem->Click += gcnew System::EventHandler(this, &WeatherStationFormAdmin::graficoCalidadAireToolStripMenuItem_Click);
			// 
			// sensorToolStripMenuItem1
			// 
			this->sensorToolStripMenuItem1->Name = L"sensorToolStripMenuItem1";
			this->sensorToolStripMenuItem1->Size = System::Drawing::Size(129, 22);
			this->sensorToolStripMenuItem1->Text = L"Sensores";
			this->sensorToolStripMenuItem1->Click += gcnew System::EventHandler(this, &WeatherStationFormAdmin::sensorToolStripMenuItem1_Click);
			// 
			// alertaToolStripMenuItem1
			// 
			this->alertaToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->alertaMeteorologicaToolStripMenuItem,
					this->alertaErrorToolStripMenuItem1
			});
			this->alertaToolStripMenuItem1->Name = L"alertaToolStripMenuItem1";
			this->alertaToolStripMenuItem1->Size = System::Drawing::Size(129, 22);
			this->alertaToolStripMenuItem1->Text = L"Alerta";
			// 
			// alertaMeteorologicaToolStripMenuItem
			// 
			this->alertaMeteorologicaToolStripMenuItem->Name = L"alertaMeteorologicaToolStripMenuItem";
			this->alertaMeteorologicaToolStripMenuItem->Size = System::Drawing::Size(182, 22);
			this->alertaMeteorologicaToolStripMenuItem->Text = L"AlertaMeteorologica";
			this->alertaMeteorologicaToolStripMenuItem->Click += gcnew System::EventHandler(this, &WeatherStationFormAdmin::alertaMeteorologicaToolStripMenuItem_Click);
			// 
			// alertaErrorToolStripMenuItem1
			// 
			this->alertaErrorToolStripMenuItem1->Name = L"alertaErrorToolStripMenuItem1";
			this->alertaErrorToolStripMenuItem1->Size = System::Drawing::Size(182, 22);
			this->alertaErrorToolStripMenuItem1->Text = L"AlertaError";
			this->alertaErrorToolStripMenuItem1->Click += gcnew System::EventHandler(this, &WeatherStationFormAdmin::alertaErrorToolStripMenuItem1_Click);
			// 
			// reporteToolStripMenuItem
			// 
			this->reporteToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->reportesSensoresToolStripMenuItem });
			this->reporteToolStripMenuItem->Name = L"reporteToolStripMenuItem";
			this->reporteToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->reporteToolStripMenuItem->Text = L"Reportes";
			// 
			// reportesSensoresToolStripMenuItem
			// 
			this->reportesSensoresToolStripMenuItem->Name = L"reportesSensoresToolStripMenuItem";
			this->reportesSensoresToolStripMenuItem->Size = System::Drawing::Size(169, 22);
			this->reportesSensoresToolStripMenuItem->Text = L"Reportes Sensores";
			this->reportesSensoresToolStripMenuItem->Click += gcnew System::EventHandler(this, &WeatherStationFormAdmin::reportesSensoresToolStripMenuItem_Click);
			// 
			// pieToolStripMenuItem
			// 
			this->pieToolStripMenuItem->Name = L"pieToolStripMenuItem";
			this->pieToolStripMenuItem->Size = System::Drawing::Size(35, 20);
			this->pieToolStripMenuItem->Text = L"Pie";
			this->pieToolStripMenuItem->Click += gcnew System::EventHandler(this, &WeatherStationFormAdmin::pieToolStripMenuItem_Click);
			// 
			// WeatherStationFormAdmin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(871, 401);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"WeatherStationFormAdmin";
			this->Text = L"WeatherStationFormAdmin";
			this->Load += gcnew System::EventHandler(this, &WeatherStationFormAdmin::WeatherStationFormAdmin_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void WeatherStationFormAdmin_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void toolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void userToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		UserMaintenance^ obj = gcnew UserMaintenance();
		obj->ControlBox = false;
		obj->ShowDialog();

	}
private: System::Void idToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void temporizadorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
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
	SensorMaintenanceForm^ obj = gcnew SensorMaintenanceForm();
	obj->ShowDialog();
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
	SensorsReport^ obj = gcnew SensorsReport();
	obj->ShowDialog();
}
private: System::Void pieToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	StatisticsForm^ obj = gcnew StatisticsForm();
	obj->ShowDialog();
}
};
}
