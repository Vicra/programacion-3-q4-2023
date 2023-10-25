#include <QCoreApplication>
#include <iostream>

using std::cout;
using std::endl;

//using namespace std;

#include "complexnumber.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    ComplexNumber complejoA(1, 3);
    ComplexNumber complejoB(3, 6);
    ComplexNumber complejoC = complejoA + complejoB;
    cout << complejoC._real
       << " + "
       << complejoC._imaginary << "i" << endl;
    return a.exec();
}
