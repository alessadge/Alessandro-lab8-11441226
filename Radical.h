#include <iostream>
#include <string>
#include "Real.h"

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