#include "complexnumber.h"

// parametros por defecto
ComplexNumber::ComplexNumber(int real,
    int imaginary)
{
    this->_imaginary = imaginary;
    this->_real = real;
}

// valor de retorno
ComplexNumber
    ComplexNumber::operator+(ComplexNumber& obj){
    ComplexNumber resultado(this->_real + obj._real,
        this->_imaginary + obj._imaginary);
    return resultado;
}
