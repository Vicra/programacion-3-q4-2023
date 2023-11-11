#include <QCoreApplication>
#include "linkedlist.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    LinkedList L;
    L.add(1);
    L.add(2);
    L.add(3);
    L.add(4);
    L.add(5);
    L.print();


    return a.exec();
}
