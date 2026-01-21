#include "schiff.h"
#include <cstdlib>
#include <ctime>

Schiff::Schiff() {
    Schiff *schiff = new Schiff();
}

void Schiff::setSpecial(void){

}
string Schiff::getSpecial(void){
    return "";
}
int Schiff::getBreite(void){
    return Breite;
}
int Schiff::getLänge(void){
    return Länge;
}
void Schiff::setLänge(void){
    std::srand(static_cast<unsigned>(std::time(nullptr)));
    Länge = std::rand() % 3 + 1;

}
void Schiff::setBreite(void){
    std::srand(static_cast<unsigned>(std::time(nullptr)));
    Breite =std::rand() % 3 + 1;
}
void Schiff::setPositionY(int positionY){
    PositionY = positionY;
}
void Schiff::setPositionX(int positionX){
    PositionX = positionX;
}

int Schiff::getPositionY(void){
    return PositionY;
}
int getPositionX(void){
    Schiff::return PositionX;
}
