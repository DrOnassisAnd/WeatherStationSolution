/**
 * Project Untitled
 */

using namespace System;

namespace Model {
    public ref class Membresia {
    public:
        property String^ TipoMembresia;
        property int Id;
        property DateTime^ fechaInicio;
        property DateTime^ fechaFinalizacion;

        Membresia() {}
        Membresia(int Id, DateTime^ fechaInicio, DateTime^ fechaFinalizacion);

    };

}