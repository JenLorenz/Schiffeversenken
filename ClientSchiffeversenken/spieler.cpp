#include "spieler.h"
#include "iostream"
#include "schiff.h"

Spieler::Spieler(std::string name) {
    Name = name;
}
/*void Spieler::setSchiffe(){
    for(int i=0;i++;i<SchiffAnzahl ){
        Schiffe[i]= new Schiff(i);
    }
}*/
void Spieler::schiffeAbschießen(){
//noch nicht klar was passieren wird
}
void Spieler::setPositionXTarget(int targetPositionX){
    PositionXTarget = targetPositionX;
}
void Spieler::setPositionYTarget(int targetPositionY){
    PositionYTarget = targetPositionY;
}
/*Spielfeld Spieler::getSpielfeld(){
    return Spielfeld;
}*/
/*std::array<Schiff,6> Spieler::getSchiffe(){
    return Schiffe;
}*/
std::string Spieler::getName(){
    return Name;
}
