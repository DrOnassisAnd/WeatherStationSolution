#include "pch.h"

using namespace System;
using namespace Model;

int main(array<System::String ^> ^args)
{
    User^ User01 = gcnew User("Onassis", "Elia", "onassis.jesus.c@uni.pe", 1);
    User^ User02 = gcnew User();
    User02->Name = "Andree";
    User02->Password = "pipipi";
    User02->Email = "onassis.jesus@pucp.edu.pe";
    User02->Id = 2;

    Console::WriteLine("Datos de los usuarios:");
    Console::WriteLine("User01 " + User01->Password);
    Console::WriteLine("User02 " + User02->Password);
    return 0;
}
