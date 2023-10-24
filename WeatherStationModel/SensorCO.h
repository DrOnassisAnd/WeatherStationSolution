/**
 * Project Untitled
 */

#include "Sensor.h"

using namespace System;

namespace Model {
	[Serializable]
	public ref class SensorCO : public Sensor {
	public:
		property int NivelCO;
		SensorCO() {}
		SensorCO(int IdSensor, int NivelCO);
	};

}