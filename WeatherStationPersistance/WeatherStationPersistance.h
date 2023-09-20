#pragma once

using namespace System;
using namespace System;
using namespace Model;
using namespace System::Collections::Generic;

namespace WeatherStationPersistance {
	public ref class Persistance
	{
	private:
		static List<User^>^ UserList = gcnew List<User^>();
	public:	
		static String^ WEATHER_STATION = "users_weather.txt";
		static void PersistTextFile(String^, Object^);
		static Object^ LoadTextFile(String^);
		
		static void AddUser(User^ User);
		static List<User^>^ QueryAllUser();
	};
}
