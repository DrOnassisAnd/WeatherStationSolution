/**
 * Project Untitled
 */


#include "Membresia.h"

 /**
  * Membresia implementation
  */



Model::Membresia::Membresia(String^ TipoMembresia,String^ fechaInicio, String^ fechaFinalizacion)

{
	this->TipoMembresia = TipoMembresia;
	this->fechaInicio = fechaInicio;
	this->fechaFinalizacion = fechaFinalizacion;
	// throw gcnew System::NotImplementedException();
}