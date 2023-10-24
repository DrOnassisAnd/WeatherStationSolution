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
/* CO (segundo elemento (ind 1) es CO
List<Ambiente^>^ data = Controller::Controller::QueryAmbienteData():
for (i=0;data->Count;i++){
    dynamic_cast<SensorTemperaturaHumedad^>(data[i]->DataBase[0])->Temperatura
}


*/