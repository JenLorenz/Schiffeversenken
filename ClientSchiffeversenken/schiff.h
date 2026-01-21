#ifndef SCHIFF_H
#define SCHIFF_H
#include<iostream>
#include<string>
class Schiff
{
public:
    Schiff();
    int Breite;
    int Länge;
    int PositionY;
    int PositionX;
    string Powerup;
    void setSpecial(void);
    string getSpecial(void);
    int getBreite(void);
    int getLänge(void);
    void setLänge(void);
    void setBreite(void);
    void setPositionY(int PositionY);
    void setPositionX(int PositionX);
    int getPositionY(void);
    int getPositionX(void);
};

#endif // SCHIFF_H
