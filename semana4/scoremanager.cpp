#include "scoremanager.h"
#include <iostream>
#include <string>
#include <fstream>
using std::ifstream;
using std::ofstream;
using std::cin;
using std::cout;
using std::string;


ScoreManager::ScoreManager()
{
    //ofstream archivosScores("scores.bin",std::ios::binary);
    // archivosScores.write(reinterpret_cast<char*>(&this->scorelist), sizeof(this->scorelist));
    //archivosScores.close();
}
void ScoreManager::registrar_score(string name, int p){
    //PASO 1:OBT LISTA ACT ARCH
    ifstream archivosScores("scores.bin",std::ios::binary);
    if(archivosScores.read(reinterpret_cast<char*>(&this->scorelist), sizeof(this->scorelist))){

    }
}
