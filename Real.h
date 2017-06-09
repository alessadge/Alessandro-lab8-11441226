#include <iostream>
#include <string>

using namespace std;

#ifndef REAL_H
#define REAL_H

class Real{
protected:

public:
    Real();
     
    virtual string sumaRacional(Real*)=0;
    virtual string restaRacional(Real*)=0;
    virtual string multRacional(Real*)=0;
    virtual string divRacional(Real*)=0;     

    virtual string sumaRadical(Real*)=0;
    virtual string restaRadical(Real*)=0;
    virtual string multRadical(Real*)=0;
    virtual string divRadical(Real*)=0;
};
#endif