/**
 * Project Untitled
 */
#include "Membresia.h"

using namespace System;

namespace Model {
    public ref class User {
    public:
        property String^ Name;
        property String^ Password;
        property String^ Email;
        property int Id;
        property Membresia^ Membresia;
        User(){}
        User(String^ Name, String^ Password, String^ Email, int Id);
    };
}

