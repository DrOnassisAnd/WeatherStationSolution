/**
 * Project Untitled
 */
using namespace System;

namespace Model {
    public ref class Ambiente {
    public:
        property double Temperatura;
        property int Humedad;
        property int NivelCO;
        property int CalidadAire;
        property DateTime Tiempo;
        property String^ UbicacionGeografica;
    };
}
