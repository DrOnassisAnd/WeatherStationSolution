/**
 * Project Untitled
 */

using namespace System;

namespace Model {
    [Serializable]
    public ref class Membresia {
    public:
        property int Id;
        property String^ TipoMembresia;
        property DateTime^ fechaInicio;
        property DateTime^ fechaFinalizacion;

        Membresia() {}
        Membresia(int Id, String^ TipoMembresia, DateTime^ fechaInicio, DateTime^ fechaFinalizacion);

    };

}