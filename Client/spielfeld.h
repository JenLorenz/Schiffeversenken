#ifndef SPIELFELD_H
#define SPIELFELD_H

class Spielfeld
{
private:
    int spielfeld[10][10];
    int getroffeneFelder[10][10];
public:
    Spielfeld();
    void setSpielfeld(int x, int y, int wert);
    int getSpielfeld(int x, int y) const;
    void setGetroffenesFeld(int x, int y);
    int getGetroffenesFeld(int x, int y) const;
    bool schuss(int x, int y); // true = Treffer, false = daneben
    void printSpielfeld(bool sichtbar = false) const;
};

#endif // SPIELFELD_H
