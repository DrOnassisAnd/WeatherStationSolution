/**
 * Project Untitled
 */


#include "Sensor.h"

using namespace System;

namespace Model {
    public ref class SensorCalidadAire : public Sensor {
    public:
        property int CalidadAire;
        SensorCalidadAire() {}
        SensorCalidadAire(int CalidadAire);
    };
}
