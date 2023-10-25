#ifndef COMPLEXNUMBER_H
#define COMPLEXNUMBER_H


class ComplexNumber
{
public:
    int _real;
    int _imaginary;

    ComplexNumber(int real = 0,
        int imaginary = 0);
    ComplexNumber operator+(ComplexNumber& obj);
};

#endif // COMPLEXNUMBER_H
