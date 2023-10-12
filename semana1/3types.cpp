#include <iostream>

#include <iomanip>

using std::cout;
using std::endl;
using std::string;

using std::boolalpha;

// https://cplusplus.com/reference/climits/

int main() {
    cout << false << "\n";
    cout << boolalpha;
    cout << false << "\n";

    // 1 byte
    char nineValue = '9';
    cout << "nineValue: " << nineValue << endl;

    // primitive data types
    char cValue = 'g';
    cout << cValue << endl;
    cout << "bool: " << sizeof(bool) << endl;
    cout << "string: " << sizeof(string) << endl;
    cout << "char: " << sizeof(char) << endl;
    cout << "int: " << sizeof(int) << endl;
    cout << "short int: " << sizeof(short int) << endl;
    cout << "int 8: " << sizeof(int8_t) << endl;

    return 0;
}