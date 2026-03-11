#include "spieler.h"
#include "iostream"
#include "schiff.h"

Spieler::Spieler(std::string name) {
    Name = name;
    setSchiffe();
    setSpielfeld();
}
void Spieler::setSchiffe(){
    for (int i = 0; i ++; i<SchiffAnzahl){
        addSchiffe(Schiff(i));
    }
}
void Spieler::setSpielfeld(){
//    spielfeld = new Spielfeld();
}
void Spieler::addSchiffe(Schiff s){
    schiffe.push_back(s);
}
void Spieler::schiffeAbschießen(){
    //noch nicht klar was passieren wird
}
void Spieler::setPositionXTarget(int targetPositionX){
    PositionXTarget = targetPositionX;
}
void Spieler::setPositionYTarget(int targetPositionY){
    PositionYTarget = targetPositionY;
}
Spielfeld Spieler::getSpielfeld(){
    return spielfeld;
}
std::vector<Schiff> Spieler::getSchiffe(){
    return schiffe;
}
std::string Spieler::getName(){
    return Name;
}
