/**
 * Project Untitled
 */
#include "Membresia.h"
#include "Ajustes.h"
//#include "PreguntasDia.h"


using namespace System;
using namespace System::Collections::Generic;


namespace Model {
    [Serializable]
    public ref class User {
    public:
        property String^ Name;
        property String^ Password;
        property String^ Email;
        property int Id; 
        property Membresia^ membresia;
        property Ajustes^ ajustes;

        //Sistemas de Puntos
        property int PuntosTotales;
        property int PuntosDiarios;
        property String^ fechaUltimaActualizacion;

        //PreguntasConstestadas por dia
        property List<int>^ PreguntasporDia;

        //Numero de Cuenta
        property int IdTarjeta;

        static int CompareByPuntosTotales(User^ u1, User^ u2)
        {
            return u2->PuntosTotales.CompareTo(u1->PuntosTotales);
        }

        User(){}
        User(String^ Name, String^ Password, String^ Email, int Id, Membresia^ membresia, Ajustes^ ajustes);
    };
}

