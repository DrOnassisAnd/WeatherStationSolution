

using namespace System;

namespace Model {
    [Serializable]
    public ref class Ajustes {
    public:
        property String^ UnidadTemp;
        property String^ FormatoHoras;
        property String^ FormatoFecha;

        Ajustes(){}
        Ajustes(String^ UnidadTemp, String^ FormatoHoras, String^ FormatoFecha);

    };

}
