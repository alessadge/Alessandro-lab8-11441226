#include "Radical.h"
#include "Racional.h"
#include <typeinfo>
#include <sstream>

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
	int numeradorTemp, denominadorTemp, coeficienteTemp, radicandoTemp;
	string retValue="";
	stringstream temp1, temp2, temp3;
	if(typeid(*num)==typeid(Racional)){
		Racional* racional = dynamic_cast<Racional*>(num);
		denominadorTemp=racional->getDenominador();
		coeficienteTemp=denominadorTemp*coeficiente;
		temp1 << coeficienteTemp << "(" << radicando << ")^(1/" <<
			indice << ") + " << racional->getNumerador() <<
			"/" << denominadorTemp;
		retValue= temp1.str();
	}
	if(typeid(*num)==typeid(Radical)){
		Radical* racional = dynamic_cast<Radical*>(num);
		if(indice==racional->getIndice()&&radicando==racional->getRadicando()){
			temp1<<coeficiente+racional->getCoeficiente()<<"("<<
				racional->getRadicando()<<")^(1/"<<indice<<")";
		}else{
			temp1<<coeficiente<<"("<<radicando<<")^(1/"<<indice<<") + "
				<<racional->getCoeficiente()<<"("<<racional->getRadicando();
				temp1<<")^(1/"<<racional->getIndice()<<")";
		}
		retValue=temp1.str();
	}
	return retValue;
}
string Radical::resta(Real*num){
	int numeradorTemp, denominadorTemp, coeficienteTemp, radicandoTemp;
	string retValue="";
	stringstream temp1, temp2, temp3;
	if(typeid(num)==typeid(Racional)){
		Racional* racional = dynamic_cast<Racional*>(num);
		
		denominadorTemp=racional->getDenominador();
		coeficienteTemp=denominadorTemp*coeficiente;
		temp2 << coeficienteTemp << "(" << radicando << ")^(1/" <<
			indice << ") - " << racional->getNumerador() <<
			"/" << denominadorTemp;
		retValue= temp2.str();
	}
	if(typeid(num)==typeid(Radical)){
		Radical* racional = dynamic_cast<Radical*>(num);
		if(indice==racional->getIndice()&&radicando==racional->getRadicando()){
			temp1<<coeficiente-racional->getCoeficiente()<<"("<<
				racional->getRadicando();
				temp1<<")^(1/"<<indice<<")";
		}else{
			temp1<<coeficiente<<"("<<radicando<<")^(1/"<<indice<<") - "
				<<racional->getCoeficiente()<<"("<<racional->getRadicando();
				temp1<<
				")^(1/"<<racional->getIndice()<<")";
		}
		retValue=temp1.str();
	}
}
string Radical::mult(Real*num){
	int numeradorTemp, denominadorTemp, coeficienteTemp, radicandoTemp;
	string retValue="";
	stringstream temp1, temp2, temp3;

	if(typeid(num)==typeid(Racional)){
		Racional* racional = dynamic_cast<Racional*>(num);
		numeradorTemp = coeficiente * racional -> getNumerador();

		temp1 << numeradorTemp << "(" << radicando << ")^(1/"<<indice<<")";
		retValue = temp1.str();

	}
	if(typeid(num)==typeid(Radical)){
		Radical* radical = dynamic_cast<Radical*>(num);
		coeficienteTemp=coeficiente* radical->getCoeficiente();
		if(indice==radical->getIndice()){
			radicandoTemp = radicando * radical->getRadicando();
			temp2 << coeficiente << "("<<radicandoTemp<<")^(1/"<<indice<<")";
			retValue = temp2.str();

		}else{
			temp3 << coeficiente << "(" << radicando << ")^(1/" << indice 
					<<") * " + radical->getCoeficiente() << "(" 
					<<radical->getRadicando()+")^(1/"<<radical->getIndice()<<")";
			retValue = temp3.str();
		}
	}
	return retValue;
}
string Radical::div(Real*num){
	int numeradorTemp, denominadorTemp, coeficienteTemp, radicandoTemp;
	string retValue="";
	stringstream temp1, temp2, temp3;
	if(typeid(num)==typeid(Racional)){
		Racional* racional = dynamic_cast<Racional*>(num);
		coeficienteTemp = coeficiente * racional-> getDenominador();
		denominadorTemp = racional->getNumerador();

		temp1<< coeficienteTemp << "(" << radicando << ")^(1/"<<indice<<")/"
		<<denominadorTemp;
		retValue=temp1.str(); 

	}
	if(typeid(num)==typeid(Radical)){
		Radical* radical = dynamic_cast<Radical*>(num);
		temp2<< coeficiente << "(" << radicando << ")^(1/"<<indice<<")/"
			<< radical->getCoeficiente()<<"("<<radical->getRadicando();
			temp1<<")^(1/"<<radical->getIndice()<<")";
		retValue= temp2.str();
	}
	return retValue;
}     
