#include <QCoreApplication>
#include <iostream>

using std::cout;
using std::endl;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int num = 10;
    //
    int * pointerNum = &num;
    // & se lee como "address of" num
    cout << "a:" << num << endl;
    cout << "direccion de a:" << pointerNum << endl;
    cout << "valor por desreferencia: "
         << * pointerNum << endl;
    return a.exec();
}
