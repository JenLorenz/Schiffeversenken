#ifndef SPIELER_H
#define SPIELER_H
#include "schiff.h"
#include <vector>
#include <iostream>
class Spieler
{
public:
    Spieler(std::string name);
    std::string Name;
    int PositionXTarget;
    int PositionYTarget;
    std::vector<Schiff> schiffe;
    //    Schiff Schiffe[6];
    void addSchiffe(Schiff s);
    void setSchiffe();
    void schiffeAbschießen();
    void setPositionXTarget(int positionTargetX);
    void setPositionYTarget(int positionTargetY);
    std::vector<Schiff> getSchiffe();
    std::string getName();
    void setName(std::string name);
    //Spielfeld getSpielfeld();
    //Spielfeld Spielfeld
private:
    int SchiffAnzahl = 6;
};

#endif // SPIELER_H
