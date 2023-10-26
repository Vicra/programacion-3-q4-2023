#include <QCoreApplication>
#include <iostream>
using std::cout;
using std::endl;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int edades [] = {1,2,3,4,5,6,7,8,9,10};
    for (int i = 0; i < 10; ++i) {
        cout << edades[i] << " ";
    }
//    for(int edad : edades)
//    {
//        cout << edad << " ";
//    }
    return a.exec();
}
