/**
 * Project Untitled
 */


#include "Sensor.h"

using namespace System;

namespace Model {
    [Serializable]
    public ref class SensorCalidadAire : public Sensor {
    public:
        property int CalidadAire;
        SensorCalidadAire() {}
        SensorCalidadAire(int IdSensor, int CalidadAire);
    };
}
