/**
 * Project Untitled
 */
#include "Sensor.h"


using namespace System;
using namespace System::Collections::Generic;

namespace Model {
    [Serializable]
    public ref class Ambiente {
    public:
        property int IdMedicion;
        property String^ UbicacionGeografica;
        property List<Sensor^>^ DataBase;
        property String^ TiempoMedicion;
        property String^ FechaMedicion;

    };
}
