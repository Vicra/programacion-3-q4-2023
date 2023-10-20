#include <QCoreApplication>
#include <iostream>

using std::cout;
using std::endl;

struct Rectangle {
    int width;
    int height;
    char x;
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    cout << "size of int: " << sizeof(int) << endl;
    cout << "size of char: " << sizeof(char) << endl;

    struct Rectangle r;
    cout << "size of struct: " << sizeof(r) << endl;
    return a.exec();
}
