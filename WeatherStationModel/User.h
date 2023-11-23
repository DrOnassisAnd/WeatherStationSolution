/**
 * Project Untitled
 */
#include "Membresia.h"
#include "Ajustes.h"
#include "PreguntasDia.h"


using namespace System;

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
       //property PreguntasDia^ ajustes;
        

        //Numero de Cuenta
        property int NumeroDeCuentaUser;
        property int CCVUSER;

        static int CompareByPuntosTotales(User^ u1, User^ u2)
        {
            return u2->PuntosTotales.CompareTo(u1->PuntosTotales);
        }

        User(){}
        User(String^ Name, String^ Password, String^ Email, int Id, Membresia^ membresia, Ajustes^ ajustes);
    };
}

