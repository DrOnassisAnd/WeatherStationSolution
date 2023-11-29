#pragma once
ref class Tarjetas
{
};


using namespace System;

namespace Model {
    [Serializable]
        public ref class Tarjetas {
        public:

            property int id;

            property int NumeroDeCuentaTarjeta;
            property int CCVTarjeta;
    };

}