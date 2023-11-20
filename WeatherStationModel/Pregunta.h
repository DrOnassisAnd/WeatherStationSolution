/**
 * Project Untitled
 */


using namespace System;
using namespace System::Collections::Generic;

namespace Model {
    [Serializable]
    public ref class Pregunta {
    public:
        property int id;
        property String^ Enunciado;
        property String^ Respuesta1;
        property String^ Respuesta2;
        property String^ Respuesta3;
        property String^ RPTACORRECT;

    };
}
/* CO (segundo elemento (ind 1) es CO
List<Ambiente^>^ data = Controller::Controller::QueryAmbienteData():
for (i=0;data->Count;i++){
    dynamic_cast<SensorTemperaturaHumedad^>(data[i]->DataBase[0])->Temperatura
}


*/