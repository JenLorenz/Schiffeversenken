#ifndef SPIELER_H
#define SPIELER_H
#include "schiff.h"
#include <iostream>
class Spieler
{
public:
    Spieler(std::string name);
    std::string Name;
    int PositionXTarget;
    int PositionYTarget;
    Schiff Schiffe[6];
    void setSchiffe();
    void schiffeAbschießen(PositionXTarget,PositionYTarget);
    void setPositionXTarget(int positionTargetX);
    void setPositionYTarget(int positionTargetY);
    //Spielfeld getSpielfeld();
    //Spielfeld Spielfeld
private:
    int SchiffAnzahl = 6;
}

#endif // SPIELER_H
