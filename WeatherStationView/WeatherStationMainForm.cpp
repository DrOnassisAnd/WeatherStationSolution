#include "WeatherStationMainForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	//WeatherStationView is your project name
	WeatherStationView::WeatherStationMainForm form;
	Application::Run(% form);
}

