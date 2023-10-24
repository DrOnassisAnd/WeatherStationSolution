/**
 * Project Untitled
 */
using namespace System;

namespace Model {
    [Serializable]
    public ref class AlertaMeteorologica {
    public:
        property String^ IdAlerta;
        property int IdSensor;
        property double ValorRef;
        property DateTime FechaHora;
        // CAMBIAR EL DATETIME A STRING
        AlertaMeteorologica() {}
        AlertaMeteorologica(String^ IdAlerta, int IdSensor, double ValorRef, DateTime FechaHora);
    };
}



