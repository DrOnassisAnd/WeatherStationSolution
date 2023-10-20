/**
 * Project Untitled
 */
#include "Membresia.h"
#include "Ajustes.h"

using namespace System;

namespace Model {
    [Serializable]
    public ref class User {
    public:
        property String^ Name;
        property String^ Password;
        property String^ Email;
        property int Id; 
        //property Membresia^ membresia;
        //property Ajustes^ Configuration;

        User(){}
        User(String^ Name, String^ Password, String^ Email, int Id, Membresia^ membresia);
    };
}

