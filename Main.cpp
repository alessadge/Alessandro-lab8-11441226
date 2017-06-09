#include <iostream>
#include <string>
#include <vector>
#include "Real.h"
#include "Radical.h"
#include "Racional.h"
#include <typeinfo>

using namespace std;

int main(){
    int opcion=0;
    vector<Real*> reales;
    vector<string> operaciones;
    string acum;

    while (opcion != 5){
        cout<<"MENU"<<endl;
        cout<<"1.) Banco de numeros "<<endl;
        cout<<"2.) Calculadora "<<endl;
        cout<<"3.) Listar"<<endl;
        cout<<"4.) Guardar "<<endl;
        cout<<"5.) Salir "<<endl;
        cin>>opcion;
        if(opcion==1){
            int opcion1=0;
            while (opcion1 != 4){
                 cout<<"BANCO DE NUMEROS"<<endl;
                 cout<<"1.) Agregar Racional"<<endl;
                 cout<<"2.) Agregar Radical"<<endl;
                 cout<<"3.) Salir del programa"<<endl;
                 cout<<"4.) Salir del menu"<<endl;
                 cin>>opcion1;

                 if(opcion1==1){
                    int denominador, numerador;
                    Real* racional=new Racional();

                    cout<<"Ingrese un denominador"<<endl;
                    cin>>denominador;
                    cout<<"Ingrese un numerador"<<endl;
                    cin>>numerador;

                    racional.setDenominador(denominador);
                    racional.setNumerador(numerador);
                    reales.push_back(racional);
                 }//fin opcion1 1

                 if(opcion1==2){
                    int coeficiente, indice, radicando;
                    Real* radical=new Radical();

                    cout<<"Ingrese un coeficiente"<<endl;
                    cin>>coeficiente;
                    cout<<"Ingrese un indice"<<endl;
                    cin>>indice;
                    cout<<"Ingrese un denominador"<<endl;
                    cin>>radicando;

                    radical.setCoeficiente(coeficiente);
                    radical.setIndice(indice);
                    radical.setRadicando(radicando);
                    reales.push_back(coeficiente, indice, radicando);
                 }//fin opcion1 2

                if(opcion1==3){
                    exit(0);
                }


            }//fin while opcion1

        }//fin opcion     4(2)^1/2
        
        if(opcion==2){
          string acumulador;
          acumulador="";
          for (int i = 0; i < reales.size(); ++i)//imprime el vector
          {
              if(typeid(reales[i])==typeid(Racional)){
                   //acumulador+= reales[i]->getNumerador()+"/"+reales[i]->getDenominador()
                   cout<<i<<".) "<<reales[i]->getNumerador()<<"/"<<reales[i]->getDenominador()<<endl;
                    
              }
              if(typeid(reales[i])==typeid(Radical)){
                   //acumulador+= reales[i]->getNumerador()+"/"+reales[i]->getDenominador()
                   cout<<i<<".) "<<reales[i]->getCoeficiente()<<"("<<reales[i]->getRadicando()<<")"<<"^1/"<<reales[i]->getIndice()<<endl;
                    
              }

          }//fin for

            int pos;
            cout<<endl;
            cout<<"Ingrese posicion del vector:"<<endl;
            cin>>pos;
            Real* numReal;
            numReal=reales[pos];
            if(typeid(reales[pos])==typeid(Racional)){
                acumulador+= reales[pos]->getNumerador()+"/"+reales[pos]->getDenominador()
                
              }
            if(typeid(reales[pos])==typeid(Radical)){
                acumulador+= reales[pos]->getCoeficiente()+"("+reales[pos]->getRadicando()+")"+"^1/"+reales[pos]->getIndice();
                   
              }
                 int opcionCalcu;
                 cout<<"BANCO DE NUMEROS"<<endl;
                 cout<<"1.) Sumar"<<endl;
                 cout<<"2.) Restar"<<endl;
                 cout<<"3.) Multiplicar"<<endl;
                 cout<<"4.) Dividir"<<endl;
                 cin>>opcionCalcu;

                 if(opcionCalcu==1){
                    acumulador=acumulador+"+";
                    
                        int opcionU;
                        cout<<"Que desea?:"<<endl;
                        cout<<"1.) Escoger un numero del banco"<<endl;
                        cout<<"2.) Ingresar numero real o decimal"<<endl;
                        cin>>opcionU;

                        if(opcionU==1){
                            for (int i = 0; i < reales.size(); ++i)//imprime el vector
                            {
                                 if(typeid(reales[i])==typeid(Racional)){
                                      //acumulador+= reales[i]->getNumerador()+"/"+reales[i]->getDenominador()
                                     cout<<i<<".) "<<reales[i]->getNumerador()<<"/"<<reales[i]->getDenominador()<<endl;
                    
                                 }
                                if(typeid(reales[i])==typeid(Radical)){
                                      //acumulador+= reales[i]->getNumerador()+"/"+reales[i]->getDenominador()
                                     cout<<i<<".) "<<reales[i]->getCoeficiente()<<"("<<reales[i]->getRadicando()<<")"<<"^1/"<<reales[i]->getIndice()<<endl;
                    
                                 }
                                int pos1;
                                cout<<endl;
                                cout<<"Ingrese posicion del vector:"<<endl;
                                cin>>pos1;
                                if(typeid(reales[pos1])==typeid(Racional)){
                                    acumulador+= reales[pos1]->getNumerador()+"/"+reales[pos1]->getDenominador()
                
                                }
                                if(typeid(reales[pos1])==typeid(Radical)){
                                    acumulador+= reales[pos1]->getCoeficiente()+"("+reales[pos1]->getRadicando()+")"+"^1/"+reales[pos1]->getIndice();
                   
                                }
                                string resultado;
                                resultado="";
                                if(typeid(reales[realRaiz])==typeid(Racional)){
                                    resultado= "=" +  realRaiz->suma(reales[pos1]);
                                    acumulador+=resultado;              
                                 }
                                if(typeid(reales[realRaiz])==typeid(Radical)){
                                    resultado= "=" +  realRaiz->suma(reales[pos1]);
                                    acumulador+=resultado; 
                                 }
                            }

                        }
                    
                 }//fin opcionCalcu
                 if(opcionU==2){
                    double numero;
                    cout<<"Ingrese un numero entero o decimal: "<<endl;
                    cin>>numero;

                    acumulador+=""+numero;

                    string resultado;
                    string resultadoFinal;
                    resultadoFinal= "=";
                    resultado = numReal + numero;
                    
                    resultadoFinal=resultadoFinal+resultado;

                 }


        }//fin opcion
        if(opcion==3){
            
        }//fin opcion

    }//fin while
return 0;
}
