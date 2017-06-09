#include "Radical.h"
#include "Racional.h"
#include <typeinfo>

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

string Radical::suma(Real*num){
	if(typeid(num)==typeid(Racional)){

	}
	if(typeid(num)==typeid(Radical)){

	}
}
string Radical::resta(Real*num){
	if(typeid(num)==typeid(Racional)){

	}
	if(typeid(num)==typeid(Radical)){

	}
}
string Radical::mult(Real*num){
	if(typeid(num)==typeid(Racional)){

	}
	if(typeid(num)==typeid(Radical)){

	}
}
string Radical::div(Real*num){
	if(typeid(num)==typeid(Racional)){

	}
	if(typeid(num)==typeid(Radical)){

	}
}     
