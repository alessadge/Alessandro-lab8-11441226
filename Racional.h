#include <iostream>
#include <string>
#include "Real.h"
#include <typeinfo>

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

    string suma(Real*);
    string resta(Real*);
    string mult(Real*);
    string div(Real*);     
};
#endif