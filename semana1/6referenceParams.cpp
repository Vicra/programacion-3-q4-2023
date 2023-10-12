#include <iostream>

using std::cout;
using std::endl;
// parametros por referencia
int addition(int factor1, int factor2, int & result) {
    result = factor1 + factor2;
    return 0;
}

int main()
{
    int fa = 10;
    int fb = 5;
    int result;

    addition(fa, fb, result);
    cout << "result: " << result << endl;
    /* code */
    return 0;
}
