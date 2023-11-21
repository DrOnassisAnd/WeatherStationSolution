#pragma once

using namespace System;

namespace Model {
    [Serializable]
        public ref class BancoTarjetas {
        public:
            //Numero de Cuenta
            property int NumeroDeCuenta;
            property int CCV;

    };
}

