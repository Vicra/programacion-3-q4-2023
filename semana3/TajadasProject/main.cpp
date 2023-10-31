#include <QCoreApplication>
#include <iostream>
using std::cout;
using std::endl;

template <typename T>
class Tajadas {
private:
    int indice = 0;
    static const int tamanioActual = 10;
    T array[tamanioActual] = {};
public:
    Tajadas(){}
    void pushback(T nuevoValor){
        // caso 1: indice es menor que el tamano del arreglo
        if(this->indice < this->tamanioActual){
            this->array[this->indice] = nuevoValor;
        } // TODO: hace falta codigo
        // caso2: indice es igual al size
        if(this->indice == this->tamanioActual){
            return;
        this->indice ++;
    }

    // print
    void fry(){
        cout << "Frying..." << endl;
        for (int i = 0; i < this->indice; i++) {
            cout << this->array[i] << ", ";
        }
        cout << endl;
    }

    int size() {
        return this->indice;
    }

};

int main()
{
    Tajadas<int> tajadasSuaves;
    tajadasSuaves.pushback(1);
    tajadasSuaves.pushback(5);
    tajadasSuaves.fry();
    cout << "size: " << tajadasSuaves.size() << endl;
    return 0;
}
