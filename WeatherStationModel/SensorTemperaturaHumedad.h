/**
 * Project Untitled
 */
#include "Sensor.h"

using namespace System;

namespace Model {
    [Serializable]
    public ref class SensorTemperaturaHumedad : public Sensor {
    public:
        property int Temperatura;
        property String^ UnidadTemp;
        property int Humedad;
        SensorTemperaturaHumedad() {}
        SensorTemperaturaHumedad(int IdSensor, int Temperatura, String^ UnidadTemp, int Humedad);
    };

}
