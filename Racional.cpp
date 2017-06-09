#include "Racional.h"
#include "Radical.h"
#include <typeinfo>

Racional::Racional(int numerador,int denominador){
	this->numerador=numerador;
	this->denominador=denominador;
}
Racional::Racional(){

}
void Racional::setNumerador(int numerador){
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

string Racional::suma(Real*num){
	string retValue;
	int denominador_temp,numerador_temp;
	if(typeid(num)==typeid(Racional)){

	}
	if(typeid(num)==typeid(Radical)){

	}
}	
string Racional::resta(Real*num){
	if(typeid(num)==typeid(Racional)){

	}
	if(typeid(num)==typeid(Radical)){

	}
}
string Racional::mult(Real*num){
	if(typeid(num)==typeid(Racional)){

	}
	if(typeid(num)==typeid(Radical)){

	}
}
string Racional::div(Real*num){
	if(typeid(num)==typeid(Racional)){

	}
	if(typeid(num)==typeid(Radical)){

	}
}     
