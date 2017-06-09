#include "Racional.h"

Racional::Racional(int numerador,int denominador){
    this->numerador=numerador;
    this->denominador=denominador;
}
Racional::Racional(){

}void Racional::setNumerador(int numerador){
   this-> numerador=numerador;
}
int Racional::getNumerador(){
   return numerador;
}
void Racional::setDenominador(int denominador){
   this-> denominador=denominador;
}
int Racional::getDenominador(){
   return denominador;
}
