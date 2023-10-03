/**
 * Project Untitled
 */
using namespace System;

namespace Model {
    public ref class AlertaError {
    public:
        property String^ IdError;
        property int IdSensor;
        property DateTime ErrorDate;
        property double limitValue;

        AlertaError() {}
        AlertaError(String^ IdError, int IdSensor, double limitValue, DateTime ErrorDate);
    };
}

