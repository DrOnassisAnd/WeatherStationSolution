/**
 * Project Untitled
 */
using namespace System;

namespace Model {
    [Serializable]
    public ref class Sensor {
    public:
        property int IdMedicion;
        property String^ IdSensor;
        Sensor() {}
        Sensor(int IdMedicion, String^ IdSensor);

    };
}

