/**
 * Project Untitled
 */

using namespace System;

namespace Model {
    public ref class Membresia {
    public:
        property String^ tipoMembresia;
        property String^ nombreMiembro;
        property String^ fechaInicio;
        property String^ fechaFinalizacion;
        property String^ Metododepago;
        Membresia() {}
        Membresia(String^ tipoMembresia, String^ nombreMiembro, String^ fechaInicio, String^ fechaFinalizacion, String^ Metododepago);

    };

}
