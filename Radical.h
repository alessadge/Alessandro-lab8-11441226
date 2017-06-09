#include <iostream>
#include <string>
#include "Real.h"
#include <typeinfo>

using namespace std;

#ifndef RADICAL_H
#define RADICAL_H

class Radical:public Real{
protected:
    int coeficiente;
    int indice;
    int radicando;
public:
    Radical(int,int,int);
    Radical();

    int getCoeficiente();
    void setCoeficiente(int);

    int getIndice();
    void setIndice(int);

    int getRadicando();
    void setRadicando(int);

    string suma(Real*);
    string resta(Real*);
    string mult(Real*);
    string div(Real*);     
};
#endif