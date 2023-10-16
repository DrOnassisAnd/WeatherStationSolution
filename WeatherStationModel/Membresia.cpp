/**
 * Project Untitled
 */


#include "Membresia.h"

 /**
  * Membresia implementation
  */



Model::Membresia::Membresia(int Id, String^ TipoMembresia,DateTime^ fechaInicio, DateTime^ fechaFinalizacion)

{

	this->Id = Id;
	this->TipoMembresia = TipoMembresia;
	this->fechaInicio = fechaInicio;
	this->fechaFinalizacion = fechaFinalizacion;
	// throw gcnew System::NotImplementedException();
}