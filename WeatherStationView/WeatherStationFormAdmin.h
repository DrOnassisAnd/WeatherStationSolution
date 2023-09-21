#pragma once


#include "MembershipMaintenanceForm.h"
#include "UserMaintenance.h"

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
			//TODO: agregar código de constructor aquí
			//
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
	private: System::Windows::Forms::ToolStripMenuItem^ membresiaToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ austesToolStripMenuItem;










	private: System::Windows::Forms::ToolStripMenuItem^ estaditicaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ userToolStripMenuItem1;








	private: System::Windows::Forms::ToolStripMenuItem^ sensorToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ temporizadorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ alertaToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ alertaMeteorologicaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ alertaErrorToolStripMenuItem1;






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
			this->membresiaToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->austesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->userToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ambienteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->estaditicaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sensorToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->temporizadorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->alertaToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->alertaMeteorologicaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->alertaErrorToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->toolStripMenuItem1,
					this->userToolStripMenuItem, this->ambienteToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1161, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->salirToolStripMenuItem });
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(73, 24);
			this->toolStripMenuItem1->Text = L"Archivo";
			this->toolStripMenuItem1->Click += gcnew System::EventHandler(this, &WeatherStationFormAdmin::toolStripMenuItem1_Click);
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &WeatherStationFormAdmin::salirToolStripMenuItem_Click);
			// 
			// userToolStripMenuItem
			// 
			this->userToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->membresiaToolStripMenuItem1,
					this->austesToolStripMenuItem, this->userToolStripMenuItem1
			});
			this->userToolStripMenuItem->Name = L"userToolStripMenuItem";
			this->userToolStripMenuItem->Size = System::Drawing::Size(56, 24);
			this->userToolStripMenuItem->Text = L"Perfil";
			// 
			// membresiaToolStripMenuItem1
			// 
			this->membresiaToolStripMenuItem1->Name = L"membresiaToolStripMenuItem1";
			this->membresiaToolStripMenuItem1->Size = System::Drawing::Size(224, 26);
			this->membresiaToolStripMenuItem1->Text = L"Membresia";
			this->membresiaToolStripMenuItem1->Click += gcnew System::EventHandler(this, &WeatherStationFormAdmin::membresiaToolStripMenuItem1_Click);
			// 
			// austesToolStripMenuItem
			// 
			this->austesToolStripMenuItem->Name = L"austesToolStripMenuItem";
			this->austesToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->austesToolStripMenuItem->Text = L"Ajustes";
			// 
			// userToolStripMenuItem1
			// 
			this->userToolStripMenuItem1->Name = L"userToolStripMenuItem1";
			this->userToolStripMenuItem1->Size = System::Drawing::Size(224, 26);
			this->userToolStripMenuItem1->Text = L"User";
			this->userToolStripMenuItem1->Click += gcnew System::EventHandler(this, &WeatherStationFormAdmin::userToolStripMenuItem1_Click);
			// 
			// ambienteToolStripMenuItem
			// 
			this->ambienteToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->estaditicaToolStripMenuItem,
					this->sensorToolStripMenuItem1, this->temporizadorToolStripMenuItem, this->alertaToolStripMenuItem1
			});
			this->ambienteToolStripMenuItem->Name = L"ambienteToolStripMenuItem";
			this->ambienteToolStripMenuItem->Size = System::Drawing::Size(92, 24);
			this->ambienteToolStripMenuItem->Text = L"Ambiente ";
			// 
			// estaditicaToolStripMenuItem
			// 
			this->estaditicaToolStripMenuItem->Name = L"estaditicaToolStripMenuItem";
			this->estaditicaToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->estaditicaToolStripMenuItem->Text = L"Estadistica";
			this->estaditicaToolStripMenuItem->Click += gcnew System::EventHandler(this, &WeatherStationFormAdmin::estaditicaToolStripMenuItem_Click);
			// 
			// sensorToolStripMenuItem1
			// 
			this->sensorToolStripMenuItem1->Name = L"sensorToolStripMenuItem1";
			this->sensorToolStripMenuItem1->Size = System::Drawing::Size(185, 26);
			this->sensorToolStripMenuItem1->Text = L"Sensores";
			// 
			// temporizadorToolStripMenuItem
			// 
			this->temporizadorToolStripMenuItem->Name = L"temporizadorToolStripMenuItem";
			this->temporizadorToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->temporizadorToolStripMenuItem->Text = L"Temporizador";
			// 
			// alertaToolStripMenuItem1
			// 
			this->alertaToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->alertaMeteorologicaToolStripMenuItem,
					this->alertaErrorToolStripMenuItem1
			});
			this->alertaToolStripMenuItem1->Name = L"alertaToolStripMenuItem1";
			this->alertaToolStripMenuItem1->Size = System::Drawing::Size(185, 26);
			this->alertaToolStripMenuItem1->Text = L"Alerta";
			// 
			// alertaMeteorologicaToolStripMenuItem
			// 
			this->alertaMeteorologicaToolStripMenuItem->Name = L"alertaMeteorologicaToolStripMenuItem";
			this->alertaMeteorologicaToolStripMenuItem->Size = System::Drawing::Size(230, 26);
			this->alertaMeteorologicaToolStripMenuItem->Text = L"AlertaMeteorologica";
			// 
			// alertaErrorToolStripMenuItem1
			// 
			this->alertaErrorToolStripMenuItem1->Name = L"alertaErrorToolStripMenuItem1";
			this->alertaErrorToolStripMenuItem1->Size = System::Drawing::Size(230, 26);
			this->alertaErrorToolStripMenuItem1->Text = L"AlertaError";
			// 
			// WeatherStationFormAdmin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1161, 494);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
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
		UserMaintenance obj;
		obj.ShowDialog();

	}
private: System::Void idToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void temporizadorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void estaditicaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void membresiaToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	MembershipMaintenanceForm obj;
	obj.ShowDialog();
}
};
}
