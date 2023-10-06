#include "WeatherStationForm.h"



using namespace System;
using namespace System::Windows::Forms;
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	WeatherStationView::WeatherStationForm form;
	Application::Run(% form);
}