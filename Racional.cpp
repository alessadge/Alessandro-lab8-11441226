#include "Racional.h"
#include "Radical.h"
#include <typeinfo>
#include <sstream>

using namespace std;
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
	stringstream temp1;
	int denominador_temp,numerador_temp;
	if(typeid(*num)==typeid(Racional)){
		
		Racional* racional = dynamic_cast<Racional*>(num);
		if(denominador==racional->getDenominador()){
			
			denominador_temp=denominador;
			numerador_temp=numerador+racional->getNumerador();
			temp1<<numerador_temp<<"/"<<denominador_temp;
		}else{
			
			denominador_temp = denominador * racional->getDenominador();
			numerador_temp = (denominador*racional->getNumerador())
			+(numerador*racional->getDenominador());
			temp1<< numerador_temp << "/" << denominador_temp;
		}
	}
	if(typeid(*num)==typeid(Radical)){
		int raiz;
		
		if(denominador==1){
			
			Radical* radical = dynamic_cast<Radical*>(num);
			int raiz=radical->getRadicando()^(1/radical->getIndice());
			double raiz2=radical->getRadicando()^(1/radical->getIndice());
			if(raiz==raiz2){
				numerador_temp=(raiz*radical->getCoeficiente())+numerador;
				denominador_temp=denominador;
				temp1<<numerador_temp<<"/"<<denominador_temp;
			}else{
				temp1<<numerador<<"/";
				temp1<<denominador<<"+"<<radical->getCoeficiente();
				temp1<<"(";
				temp1<<radical->getRadicando();
				temp1<<")";
				temp1<<"^";
				temp1<<"(";
				temp1<<1+"/"<<radical->getIndice();
			}
		}	
	}
	retValue=temp1.str();
	return retValue;
}	
string Racional::resta(Real*num){
	string retValue="";
	stringstream temp1;
	int denominador_temp,numerador_temp;
	if(typeid(*num)==typeid(Racional)){
		Racional* racional = dynamic_cast<Racional*>(num);
		if(denominador==racional->getDenominador()){
			denominador_temp=denominador;
			numerador_temp=numerador-racional->getNumerador();
			temp1<<numerador_temp<<"/"<<denominador_temp;
		}else{
			denominador_temp = denominador * racional->getDenominador();
			numerador_temp = (denominador*racional->getNumerador())
			-(numerador*racional->getDenominador());
			temp1<< numerador_temp << "/" <<temp1<<denominador_temp;
		}
	}
	if(typeid(*num)==typeid(Radical)){
		int raiz;
		if(denominador==1){
			Radical* radical = dynamic_cast<Radical*>(num);
			int raiz=radical->getRadicando()^(1/radical->getIndice());
			double raiz2=radical->getRadicando()^(1/radical->getIndice());
			if(raiz==raiz2){
				numerador_temp=numerador-(raiz*radical->getCoeficiente());
				denominador_temp=denominador;
				temp1<<numerador_temp<<"/"<<denominador_temp;
			}else{
				temp1<<numerador<<"/";
				temp1<<denominador<<"-"<<radical->getCoeficiente();
				temp1<<"(";
				temp1<<radical->getRadicando();
				temp1<<")";
				temp1<<"^";
				temp1<<"(";
				temp1<<1<<"/"<<radical->getIndice();
			}
		}
	}
	retValue=temp1.str();
	return retValue;
}
string Racional::mult(Real*num){
	string retValue="";
	stringstream temp1;
	int denominador_temp,numerador_temp;
	if(typeid(*num)==typeid(Racional)){
		Racional* racional = dynamic_cast<Racional*>(num);
		denominador_temp=denominador*racional->getDenominador();
		numerador_temp=numerador*racional->getNumerador();
		temp1<<numerador_temp<<"/"<<denominador_temp;		
	}
	if(typeid(*num)==typeid(Radical)){
		Radical* radical = dynamic_cast<Radical*>(num);
		int raiz=radical->getRadicando()^(1/radical->getIndice());
		double raiz2=radical->getRadicando()^(1/radical->getIndice());
		if(raiz==raiz2){
			numerador_temp=numerador*(raiz*radical->getCoeficiente());
			denominador_temp=denominador;
			temp1<<numerador_temp<<"/"<<denominador_temp;
		}else{
			temp1<<numerador<<"/";
			temp1<<denominador<<"*"<<radical->getCoeficiente();
			temp1<<"(";
			temp1<<radical->getRadicando();
			temp1<<")";
			temp1<<"^";
			temp1<<"(";
			temp1<<1<<"/"<<radical->getIndice();
		}		
	}
	retValue=temp1.str();
	return retValue;
}
string Racional::div(Real*num){
	string retValue="";
	stringstream temp1;
	int denominador_temp,numerador_temp;
	if(typeid(*num)==typeid(Racional)){
		Racional* racional = dynamic_cast<Racional*>(num);
		denominador_temp=denominador*racional->getNumerador();
		numerador_temp=numerador*racional->getDenominador();
		temp1<<numerador_temp<<"/"<<denominador_temp;		
	}
	if(typeid(*num)==typeid(Radical)){
		Radical* radical = dynamic_cast<Radical*>(num);
		int raiz=radical->getRadicando()^(1/radical->getIndice());
		double raiz2=radical->getRadicando()^(1/radical->getIndice());
		if(raiz==raiz2){
			numerador_temp=numerador;
			denominador_temp=denominador*(raiz*radical->getCoeficiente());
			temp1<<numerador_temp+"/"+denominador_temp;
		}else{
			temp1<<numerador<<"/";
			temp1<<denominador<<"/"<<radical->getCoeficiente();
			temp1<<"(";
			temp1<<radical->getRadicando();
			temp1<<")";
			temp1<<"^";
			temp1<<"(";
			temp1<<1<<"/"<<radical->getIndice();
		}
	}
	return retValue;
}     
