#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::cin;

int main() {
    cout << "Enter your name: " << endl;
    string nameInput;
    cin >> nameInput;
    cout << "Your name is: " << nameInput << endl;

    cout << "Enter your age: " << endl;
    int age;
    cin >> age;
    cout << "Your age is: " << age << endl;
    return 0;
}