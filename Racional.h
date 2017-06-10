#include <iostream>
#include <string>
#include "Real.h"
#include <typeinfo>
#include <sstream>

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

    string operator+(double num){
        int numTemp, denTemp;
        stringstream ss;
        string retValue;

            denTemp=denominador;
            numTemp=denominador*num;
            numTemp=numTemp+numerador;
        ss<<numTemp<<"/"<<denTemp;
        retValue=ss.str();
        return retValue;
    }
    string operator-(double num){
        int numTemp, denTemp;
        stringstream ss;
        string retValue;

            denTemp=denominador;
            numTemp=denominador*num;
            numTemp=numTemp-numerador;
        ss<<numTemp<<"/"<<denTemp;
        retValue=ss.str();
        return retValue;
    }
    string operator*(double num){
        int numTemp, denTemp;
        stringstream ss;
        string retValue;

            denTemp=denominador;
            numTemp=numerador*num;

        ss<<numTemp<<"/"<<denTemp;
        retValue=ss.str();
        return retValue;
    }
    string operator/(double num){
        int numTemp, denTemp;
        stringstream ss;
        string retValue;

            numTemp=numerador;
            denTemp=num*denominador;

        ss<<numTemp<<"/"<<denTemp;
        retValue=ss.str();
        return retValue;
    }  

    friend ostream& operator <<(ostream &escribir,Racional* doble){
        stringstream ss;
        string retValue;
        ss<<doble->getNumerador()<<"/"<<doble->getDenominador();
        retValue=ss.str();
        return escribir<<retValue;
    }
    
};
#endif