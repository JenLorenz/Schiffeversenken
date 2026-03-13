#include "schiff.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

Schiff::Schiff(int id) {

    Id = id;
    setBreite();
    setLänge();
    setSpecial();
}

void Schiff::setSpecial(void){
    std::srand(static_cast<unsigned>(std::time(nullptr)));
    std::string arr[3] = {"Spiegel","Atombombe","Granate","Nebel","Zivilbot","Radar","Doppelschuss","Schild","Spiegel"};
    Powerup = arr[std::rand()%3];
}

std::string Schiff::getSpecial(void){
    return Powerup;
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
int Schiff::getPositionX(void){
    return PositionX;
}
