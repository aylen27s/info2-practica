#include <iostream>
#include "Punto.h"
using namespace std;

int main(){

    Punto p(12.34,-56.78);
    Punto r(p);
    Punto q=p;
    cout <<"1. punto p: ("<<p.getX()<<";"<<p.getY()<<")"<<endl;
    cout <<"2. punto r: ("<<r.getX()<<";"<<r.getY()<<")"<<endl;
    cout <<"3. punto q: ("<<q.getX()<<";"<<q.getY()<<")"<<endl;

    return 0;
}