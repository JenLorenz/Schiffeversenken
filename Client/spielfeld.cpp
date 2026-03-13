#include "spielfeld.h"
#include <iostream>

Spielfeld::Spielfeld() {
    for (int y = 0; y < 10; y++) {
        for (int x = 0; x < 10; x++) {
            spielfeld[x][y] = 0;
            getroffeneFelder[x][y] = 0;
        }
    }
}
void Spielfeld::setSpielfeld(int x, int y, int wert) {
    if (x >= 0 && x < 10 && y >= 0 && y < 10) {
        spielfeld[x][y] = wert;
    }
}
int Spielfeld::getSpielfeld(int x, int y) const {
    if (x >= 0 && x < 10 && y >= 0 && y < 10) {
        return spielfeld[x][y];
    }
    return -1;
}
void Spielfeld::setGetroffenesFeld(int x, int y) {
    if (x >= 0 && x < 10 && y >= 0 && y < 10) {
        if (spielfeld[x][y] == 1)
            getroffeneFelder[x][y] = 2;
        // Spieler hat ein Schifffeld getroffen
        else
            getroffeneFelder[x][y] = 1;
        // Spieler hat nicht getroffen
    }
}
int Spielfeld::getGetroffenesFeld(int x, int y) const {
    if (x >= 0 && x < 10 && y >= 0 && y < 10) {
        return getroffeneFelder[x][y];
    }
    return -1;
}
bool Spielfeld::schuss(int x, int y) {
    if (x < 0 || x >= 10 || y < 0 || y >= 10)
        return false;
    setGetroffenesFeld(x, y);
    return spielfeld[x][y] == 1;
}
void Spielfeld::printSpielfeld(bool sichtbar) const {
    for (int y = 0; y < 10; y++) {
        for (int x = 0; x < 10; x++) {
            if (getroffeneFelder[x][y] == 2)
                std::cout << " # ";
            //  # Schiff getroffen
            else if (getroffeneFelder[x][y] == 1)
                std::cout << " O ";
            //  0 leeres Feld
            else if (sichtbar && spielfeld[x][y] == 1)
                std::cout << " X ";
            // X eigenes Schiff
            else
                std::cout << " ~ ";
            // ~ für leeres Feld
        }
        std::cout << std::endl;
    }
}
