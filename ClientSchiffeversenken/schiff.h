#ifndef SCHIFF_H
#define SCHIFF_H
#include<iostream>
#include<string>
class Schiff
{
public:
    Schiff(int id);
    int Id;
    int Breite;
    int Länge;
    int PositionY;
    int PositionX;
    std::string Powerup;
    std::string getSpecial(void);
    int getBreite(void);
    int getLänge(void);
    void setPositionY(int PositionY);
    void setPositionX(int PositionX);
    int getPositionY(void);
    int getPositionX(void);

protected:
    void setLänge(void);
    void setBreite(void);
    void setSpecial(void);
};

#endif // SCHIFF_H
