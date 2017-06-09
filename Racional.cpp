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
	string retValue="";
	int denominador_temp,numerador_temp;
	if(typeid(num)==typeid(Racional)){
		Racional* racional = dynamic_cast<Racional*>(num);
		if(denominador==racional->getDenominador()){
			denominador_temp=denominador;
			numerador_temp=numerador+racional->getNumerador();
			retValue+=numerador_temp+"/"+denominador_temp;
		}
	}
	if(typeid(num)==typeid(Radical)){

	}
	return retValue;
}	
string Racional::resta(Real*num){
	string retValue="";
	int denominador_temp,numerador_temp;
	if(typeid(num)==typeid(Racional)){
		Racional* racional = dynamic_cast<Racional*>(num);
		if(denominador==racional->getDenominador()){
			denominador_temp=denominador;
			numerador_temp=numerador-racional->getNumerador();
			retValue+=numerador_temp+"/"+denominador_temp;
		}
	}
	if(typeid(num)==typeid(Radical)){

	}
	return retValue;
}
string Racional::mult(Real*num){
	string retValue="";
	int denominador_temp,numerador_temp;
	if(typeid(num)==typeid(Racional)){
		Racional* racional = dynamic_cast<Racional*>(num);
		denominador_temp=denominador*racional->getDenominador();
		numerador_temp=numerador*racional->getNumerador();
		retValue+=numerador_temp+"/"+denominador_temp;		
	}
	if(typeid(num)==typeid(Radical)){

	}
	return retValue;
}
string Racional::div(Real*num){
	string retValue="";
	int denominador_temp,numerador_temp;
	if(typeid(num)==typeid(Racional)){
		Racional* racional = dynamic_cast<Racional*>(num);
		denominador_temp=denominador*racional->getNumerador();
		numerador_temp=numerador*racional->getDenominador();
		retValue+=numerador_temp+"/"+denominador_temp;		
	}
	if(typeid(num)==typeid(Radical)){

	}
return retValue;
}     
