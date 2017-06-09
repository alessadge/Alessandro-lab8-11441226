#include <iostream>
#include <string>
#include "Real.h"

using namespace std;

#ifndef RACIONAL_H
#define RACIONAL_H

class Racional:public Real{
protected:
    int numerador;
    int denominador;
public:
    Racional(int,int);
    Racional();

    int getNumerador();
    void setNumerador(int);

    int getDenominador();
    void setDenominador(int);

    string sumaRacional(Real*);
    string restaRacional(Real*);
    string multRacional(Real*);
    string divRacional(Real*);     

    string sumaRadical(Real*);
    string restaRadical(Real*);
    string multRadical(Real*);
    string divRadical(Real*);

};
#endif