#include <iostream>
#include <string>
#include "Real.h"
#include <typeinfo>
#include <sstream>

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

    string operator+(double num){
        
        stringstream temp;
        string retValue;
        temp<<num<<"+"<<this->coeficiente<<"("<<this->radicando<<")^(1/"<<this->indice<<")";
        retValue=temp.str();

        return retValue;
    }
    string operator-(double num){
        
        stringstream temp;
        string retValue;
        temp<<num<<"-"<<coeficiente<<"("<<radicando<<")^(1/"<<indice<<")";
        retValue=temp.str();

        return retValue;
    }
    string operator*(double num){
        int coeTemp,indiTemp,radiTemp;
        stringstream temp;
        string retValue;
        int numero = num * coeficiente;
        temp<<numero<<"+"<<coeficiente<<"("<<radicando<<")^(1/"<<indice<<")";
        retValue=temp.str();

        return retValue;
    }
    string operator/(double num){
        int coeTemp,indiTemp,radiTemp;
        stringstream temp;
        string retValue;
        temp<<coeficiente<<"("<<radicando<<")^(1/"<<indice<<")/"
        <<num;
        retValue=temp.str();

        return retValue;
    } 

    friend ostream& operator <<(ostream &escribir,Radical* doble){
        stringstream ss;
        string retValue;
        ss<<doble->coeficiente<<"("<<doble->radicando<<")^(1/"<<doble->indice<<")";
        retValue=ss.str();
        return escribir<<retValue;
    }

};
#endif