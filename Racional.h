#include <iostream>
#include <string>

using namespace std;

#ifndef RACIONAL_H
#define RACIONAL_H
class Racional{
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

};
#endif