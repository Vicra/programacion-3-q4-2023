#include <string>
#include <iostream>

using std::cout;
using std::endl;
using std::string;

// Documentation: https://www.geeksforgeeks.org/rot13-cipher/

#define a 97
#define m 109
#define z 122

#define A 65
#define M 77
#define Z 90

#define ROT_13_CONSTANT 13

// operation = 1 add
// operation = 0 subs
void appendEncryptedChar(char asciiCharacter, bool operation, string & result) {
    int encryptedAscii;
    operation ?
        encryptedAscii = asciiCharacter + ROT_13_CONSTANT :
        encryptedAscii = asciiCharacter - ROT_13_CONSTANT;
    char encryptedAsciiChar = char(encryptedAscii);
    result += encryptedAsciiChar;
}

string rot13(string wordToEncrypt) {
    string result = "";
    for (int i = 0; i < wordToEncrypt.size(); i++) {
        int asciiCharacter = int(wordToEncrypt[i]);
        if (
            (asciiCharacter >= a && asciiCharacter <= m) ||
            (asciiCharacter >= A && asciiCharacter <= M)
        ) {
            appendEncryptedChar(asciiCharacter, true, result);
        } else if (
            (asciiCharacter > m && asciiCharacter <= z) ||
            (asciiCharacter > M && asciiCharacter <= Z)
        ) {
            appendEncryptedChar(asciiCharacter, false, result);
        } else {
            result += wordToEncrypt[i];
        }
    }
    return result;
}

int main() {
    // "UBYN/"
    string hola = "Hola/";
    string encryptedWord = rot13(hola);
    cout << "Encrypted word: " << encryptedWord << endl;
    return 0;
}