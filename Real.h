#include <iostream>
#include <string>

using namespace std;

#ifndef REAL_H
#define REAL_H

class Real{
protected:

public:
    Real();
     
    virtual string suma(Real*)=0;
    virtual string resta(Real*)=0;
    virtual string mult(Real*)=0;
    virtual string div(Real*)=0;   


    virtual string operator+(double num){

    }
    virtual string operator-(double num){

    }
    virtual string operator*(double num){

    }
    virtual string operator/(double num){

    }
       
};
#endif