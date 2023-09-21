/**
 * Project Untitled
 */
#include "Sensor.h"

using namespace System;

namespace Model {

    public ref class SensorTemperaturaHumedad : public Sensor {
    public:
        property double Temperatura;
        property String^ UnidadTemp;
        property int Humedad;
        SensorTemperaturaHumedad() {}
        SensorTemperaturaHumedad(double Temperatura, String^ UnidadTemp, int Humedad);
    };

}
