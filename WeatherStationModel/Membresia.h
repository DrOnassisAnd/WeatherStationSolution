/**
 * Project Untitled
 */

using namespace System;

namespace Model {
    [Serializable]
    public ref class Membresia {
    public:
        property String^ TipoMembresia;
        property String^ fechaInicio;
        property String^ fechaFinalizacion;

        Membresia() {}
        Membresia(String^ TipoMembresia, String^ fechaInicio, String^ fechaFinalizacion);

    };

}