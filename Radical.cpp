#include "Radical.h"

Radical::Radical(int coeficiente,int indice,int radicando){
    this->coeficiente=coeficiente;
    this->indice=indice;
    this->radicando=radicando;
}
Radical::Radical(){

}
void Radical::setCoeficiente(int coeficiente){
   this-> coeficiente=coeficiente;
}
int Radical::getCoeficiente(){
   return coeficiente;
}
void Radical::setIndice(int indice){
   this-> indice=indice;
}
int Radical::getIndice(){
   return indice;
}
void Radical::setRadicando(int radicando){
   this-> radicando=radicando;
}
int Radical::getRadicando(){
   return radicando;
}

string Radical::sumaRacional(Real*){

}
string Radical::restaRacional(Real*){

}
string Radical::multRacional(Real*){

}
string Radical::divRacional(Real*){

}     
//---------------
string Radical::sumaRadical(Real*){

}
string Radical::restaRadical(Real*){

}
string Radical::multRadical(Real*){

}
string Radical::divRadical(Real*){
	
}
