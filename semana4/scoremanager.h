#ifndef SCOREMANAGER_H
#define SCOREMANAGER_H
#include <string>
#include <iostream>
#include <vector>
using std::string;
using std::ifstream;
using std::vector;
struct Score{
    int index;
    string name;
    int punt;
};
class ScoreManager
{
private:
    vector<Score> scorelist;
public:
    ScoreManager();

    void registrar_score(string name, int p);
};

#endif // SCOREMANAGER_H
