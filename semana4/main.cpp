#include <QCoreApplication>
#include <iostream>
#include <string>

using std::ifstream;
using std::ofstream;
using std::cin;
using std::cout;
using std::string;

void registrar_score(string name, int p){
    //PASO 1:OBT LISTA ACT ARCH
    ifstream archivosScores("scores.bin",std::ios::binary);

}
struct Score{
    int index;
    string name;
    int punt;
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    return a.exec();
}
