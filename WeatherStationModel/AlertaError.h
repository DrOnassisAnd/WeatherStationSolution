/**
 * Project Untitled
 */
using namespace System;

namespace Model {
    [Serializable]
    public ref class AlertaError {
    public:
        property String^ IdError;
        property int IdSensor;
        property DateTime ErrorDate;
        property double limitValue;
        // CAMBIAR EL DATETIME A STRING
        AlertaError() {}
        AlertaError(String^ IdError, int IdSensor, double limitValue, DateTime ErrorDate);
    };
}

