/**
 * Project Untitled
 */
using namespace System;

namespace Model {
    public ref class User {
    public:
        property String^ Name;
        property String^ Password;
        property String^ Email;
        property int Id;
        User(){}
        User(String^ Name, String^ Password, String^ Email, int Id);
    };
}

