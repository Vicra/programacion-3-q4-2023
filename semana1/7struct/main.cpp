#include <QCoreApplication>
#include <iostream>

using std::cout;
using std::endl;

struct Rectangle {
    int height; // 4 bytes
    int width; // 4 bytes
    char x; // 1 byte
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    struct Rectangle r1;
    struct Rectangle r2 = {10, 5, 'c'};
    cout << "size: " << sizeof(r1) << endl;
    cout << "size: " << sizeof(r2) << endl;
    // result is 12 because of memory padding
    // Padding is unused memory and you cannot assume its value.
    return a.exec();
}
