#include <iostream>
#include <string>
#include <vector>
#include "Real.h"
#include "Radical.h"
#include "Racional.h"
#include <typeinfo>
#include <sstream>

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

                    reinterpret_cast<Racional*>(racional)->setDenominador(denominador);
                    reinterpret_cast<Racional*>(racional)->setNumerador(numerador);
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

                    reinterpret_cast<Radical*>(radical)->setCoeficiente(coeficiente);
                    reinterpret_cast<Radical*>(radical)->setIndice(indice);
                    reinterpret_cast<Radical*>(radical)->setRadicando(radicando);
                    reales.push_back(radical);
                 }//fin opcion1 2

                if(opcion1==3){
                    
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
                   cout<<i<<".) "<<reinterpret_cast<Racional*>(reales[i])->getNumerador()<<"/"<<reinterpret_cast<Racional*>(reales[i])->getDenominador()<<endl;
                    
              }
              if(typeid(reales[i])==typeid(Radical)){
                   //acumulador+= reales[i]->getNumerador()+"/"+reales[i]->getDenominador()
                   cout<<i<<".) "<<reinterpret_cast<Radical*>(reales[i])->getCoeficiente()<<"("<<reinterpret_cast<Radical*>(reales[i])->getRadicando()<<")"<<"^1/"<<reinterpret_cast<Radical*>(reales[i])->getIndice()<<endl;
                    
              }

          }//fin for
            stringstream acumu;
            int pos;
            cout<<endl;
            cout<<"Ingrese posicion del vector:"<<endl;
            cin>>pos;
            Real* realRaiz;
            realRaiz=reales[pos];

            if(typeid(reales[pos])==typeid(Racional)){
                acumu << reinterpret_cast<Racional*>(realRaiz)->getNumerador()<<"/"<<   reinterpret_cast<Racional*>(realRaiz)->getDenominador();
                
              }
            if(typeid(reales[pos])==typeid(Radical)){
                acumu <<  reinterpret_cast<Radical*>(realRaiz)->getCoeficiente()<<"("<<reinterpret_cast<Radical*>(realRaiz)->getRadicando()<<")"<<"^1/"<<reinterpret_cast<Radical*>(realRaiz)->getIndice();
                   
              }

                 int opcionCalcu;
                 cout<<"BANCO DE NUMEROS"<<endl;
                 cout<<"1.) Sumar"<<endl;
                 cout<<"2.) Restar"<<endl;
                 cout<<"3.) Multiplicar"<<endl;
                 cout<<"4.) Dividir"<<endl;
                 cin>>opcionCalcu;

                 if(opcionCalcu==1){
                    acumu<<"+";
                    
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
                                     cout<<i<<".) "<<reinterpret_cast<Racional*>(reales[i])->getNumerador()<<"/"<<reinterpret_cast<Racional*>(reales[i])->getDenominador()<<endl;
                    
                                 }
                                if(typeid(reales[i])==typeid(Radical)){
                                      //acumulador+= reales[i]->getNumerador()+"/"+reales[i]->getDenominador()
                                     cout<<i<<".) "<<reinterpret_cast<Radical*>(reales[i])->getCoeficiente()<<"("<<reinterpret_cast<Radical*>(reales[i])->getRadicando()<<")"<<"^1/"<<reinterpret_cast<Radical*>(reales[i])->getIndice()<<endl;
                    
                                 }

                                int pos1;
                                cout<<endl;
                                cout<<"Ingrese posicion del vector:"<<endl;
                                cin>>pos1;

                                if(typeid(reales[pos1])==typeid(Racional)){
                                    acumu<< reinterpret_cast<Racional*>(reales[pos])->getNumerador()<<"/"<<reinterpret_cast<Racional*>(reales[pos])->getDenominador();
                
                                }
                                if(typeid(reales[pos1])==typeid(Radical)){
                                    acumu<< reinterpret_cast<Radical*>(reales[pos])->getCoeficiente()<<"("<<reinterpret_cast<Radical*>(reales[pos])->getRadicando()<<")"<<"^1/"<<reinterpret_cast<Radical*>(reales[pos])->getIndice();
                   
                                }
                                string resultado;
                                resultado="";
                                if(typeid(realRaiz)==typeid(Racional)){
                                    resultado= "=" +  reinterpret_cast<Racional*>(realRaiz)->suma(reales[pos1]);
                                    acumu<<resultado;              
                                 }
                                if(typeid(realRaiz)==typeid(Radical)){
                                    resultado= "=" +  reinterpret_cast<Radical*>(realRaiz)->suma(reales[pos1]);
                                    acumu<<resultado; 
                                 }
                            }
                            operaciones.push_back(acumu.str());

                        }
                    if(opcionU==2){
                        double numero;
                        cout<<"Ingrese un numero entero o decimal: "<<endl;
                        cin>>numero;

                        acumu<<numero;

                        string resultado;
                        string resultadoFinal;
                        resultadoFinal= "=";
                        //resultado = realRaiz + numero;
                          
                        resultadoFinal=resultadoFinal+resultado;
                        acumu<<resultadoFinal;
                        operaciones.push_back(acumu.str());

                     }
                    
                 }//fin opcionCalcu sumar
                 
                if(opcionCalcu==2){
                    acumu<<"+";
                    
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
                                     cout<<i<<".) "<<reinterpret_cast<Racional*>(reales[i])->getNumerador()<<"/"<<reinterpret_cast<Racional*>(reales[i])->getDenominador()<<endl;
                    
                                 }
                                if(typeid(reales[i])==typeid(Radical)){
                                      //acumulador+= reales[i]->getNumerador()+"/"+reales[i]->getDenominador()
                                     cout<<i<<".) "<<reinterpret_cast<Radical*>(reales[i])->getCoeficiente()<<"("<<reinterpret_cast<Radical*>(reales[i])->getRadicando()<<")"<<"^1/"<<reinterpret_cast<Radical*>(reales[i])->getIndice()<<endl;
                    
                                 }

                                int pos1;
                                cout<<endl;
                                cout<<"Ingrese posicion del vector:"<<endl;
                                cin>>pos1;

                                if(typeid(reales[pos1])==typeid(Racional)){
                                    acumu<< reinterpret_cast<Racional*>(reales[pos])->getNumerador()<<"/"<<reinterpret_cast<Racional*>(reales[pos])->getDenominador();
                
                                }
                                if(typeid(reales[pos1])==typeid(Radical)){
                                    acumu<< reinterpret_cast<Radical*>(reales[pos])->getCoeficiente()<<"("<<reinterpret_cast<Radical*>(reales[pos])->getRadicando()<<")"<<"^1/"<<reinterpret_cast<Radical*>(reales[pos])->getIndice();
                   
                                }
                                string resultado;
                                resultado="";
                                if(typeid(realRaiz)==typeid(Racional)){
                                    resultado= "=" +  reinterpret_cast<Racional*>(realRaiz)->resta(reales[pos1]);
                                    acumu<<resultado;              
                                 }
                                if(typeid(realRaiz)==typeid(Radical)){
                                    resultado= "=" +  reinterpret_cast<Radical*>(realRaiz)->resta(reales[pos1]);
                                    acumu<<resultado; 
                                 }
                            }
                            operaciones.push_back(acumu.str());

                        }
                    if(opcionU==2){
                        double numero;
                        cout<<"Ingrese un numero entero o decimal: "<<endl;
                        cin>>numero;

                        acumu<<numero;

                        string resultado;
                        string resultadoFinal;
                        resultadoFinal= "=";
                        //resultado = realRaiz - numero;
                          
                        resultadoFinal=resultadoFinal+resultado;
                        acumu<<resultadoFinal;
                        operaciones.push_back(acumu.str());

                     }
                }//fin opcionCalcu resta

                if(opcionCalcu==3){
                    acumu<<"+";
                    
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
                                     cout<<i<<".) "<<reinterpret_cast<Racional*>(reales[i])->getNumerador()<<"/"<<reinterpret_cast<Racional*>(reales[i])->getDenominador()<<endl;
                    
                                 }
                                if(typeid(reales[i])==typeid(Radical)){
                                      //acumulador+= reales[i]->getNumerador()+"/"+reales[i]->getDenominador()
                                     cout<<i<<".) "<<reinterpret_cast<Radical*>(reales[i])->getCoeficiente()<<"("<<reinterpret_cast<Radical*>(reales[i])->getRadicando()<<")"<<"^1/"<<reinterpret_cast<Radical*>(reales[i])->getIndice()<<endl;
                    
                                 }

                                int pos1;
                                cout<<endl;
                                cout<<"Ingrese posicion del vector:"<<endl;
                                cin>>pos1;

                                if(typeid(reales[pos1])==typeid(Racional)){
                                    acumu<< reinterpret_cast<Racional*>(reales[pos])->getNumerador()<<"/"<<reinterpret_cast<Racional*>(reales[pos])->getDenominador();
                
                                }
                                if(typeid(reales[pos1])==typeid(Radical)){
                                    acumu<< reinterpret_cast<Radical*>(reales[pos])->getCoeficiente()<<"("<<reinterpret_cast<Radical*>(reales[pos])->getRadicando()<<")"<<"^1/"<<reinterpret_cast<Radical*>(reales[pos])->getIndice();
                   
                                }
                                string resultado;
                                resultado="";
                                if(typeid(realRaiz)==typeid(Racional)){
                                    resultado= "=" +  reinterpret_cast<Racional*>(realRaiz)->mult(reales[pos1]);
                                    acumu<<resultado;              
                                 }
                                if(typeid(realRaiz)==typeid(Radical)){
                                    resultado= "=" +  reinterpret_cast<Radical*>(realRaiz)->mult(reales[pos1]);
                                    acumu<<resultado; 
                                 }
                            }
                            operaciones.push_back(acumu.str());

                        }
                    if(opcionU==2){
                        double numero;
                        cout<<"Ingrese un numero entero o decimal: "<<endl;
                        cin>>numero;

                        acumu<<numero;

                        string resultado;
                        string resultadoFinal;
                        resultadoFinal= "=";
                        //resultado = realRaiz * numero;
                          
                        resultadoFinal=resultadoFinal+resultado;
                        acumu<<resultadoFinal;
                        operaciones.push_back(acumu.str());

                     }
                }//multiplicacion opcionCalcu

                if(opcionCalcu==4){
                    acumu<<"+";
                    
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
                                     cout<<i<<".) "<<reinterpret_cast<Racional*>(reales[i])->getNumerador()<<"/"<<reinterpret_cast<Racional*>(reales[i])->getDenominador()<<endl;
                    
                                 }
                                if(typeid(reales[i])==typeid(Radical)){
                                      //acumulador+= reales[i]->getNumerador()+"/"+reales[i]->getDenominador()
                                     cout<<i<<".) "<<reinterpret_cast<Radical*>(reales[i])->getCoeficiente()<<"("<<reinterpret_cast<Radical*>(reales[i])->getRadicando()<<")"<<"^1/"<<reinterpret_cast<Radical*>(reales[i])->getIndice()<<endl;
                    
                                 }

                                int pos1;
                                cout<<endl;
                                cout<<"Ingrese posicion del vector:"<<endl;
                                cin>>pos1;

                                if(typeid(reales[pos1])==typeid(Racional)){
                                    acumu<< reinterpret_cast<Racional*>(reales[pos])->getNumerador()<<"/"<<reinterpret_cast<Racional*>(reales[pos])->getDenominador();
                
                                }
                                if(typeid(reales[pos1])==typeid(Radical)){
                                    acumu<< reinterpret_cast<Radical*>(reales[pos])->getCoeficiente()<<"("<<reinterpret_cast<Radical*>(reales[pos])->getRadicando()<<")"<<"^1/"<<reinterpret_cast<Radical*>(reales[pos])->getIndice();
                   
                                }
                                string resultado;
                                resultado="";
                                if(typeid(realRaiz)==typeid(Racional)){
                                    resultado= "=" +  reinterpret_cast<Racional*>(realRaiz)->div(reales[pos1]);
                                    acumu<<resultado;              
                                 }
                                if(typeid(realRaiz)==typeid(Radical)){
                                    resultado= "=" +  reinterpret_cast<Radical*>(realRaiz)->div(reales[pos1]);
                                    acumu<<resultado; 
                                 }
                            }
                            operaciones.push_back(acumu.str());

                        }
                    if(opcionU==2){
                        double numero;
                        cout<<"Ingrese un numero entero o decimal: "<<endl;
                        cin>>numero;

                        acumu<<numero;

                        string resultado;
                        string resultadoFinal;
                        resultadoFinal= "=";
                        //resultado = realRaiz / numero;
                          
                        resultadoFinal=resultadoFinal+resultado;
                        acumu<<resultadoFinal;
                        operaciones.push_back(acumu.str());

                     }
                }//division opcionCalcu

        }//fin opcion

        if(opcion==3){
            
        }//fin opcion

    }//fin while
return 0;
}
