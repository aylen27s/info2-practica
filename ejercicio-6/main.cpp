#include <iostream>
#include "Punto.h"
using namespace std;

int main(){

    Punto p(12.34,-56.78);
    Punto r,s;
    s=78+p;
    r=78-p;
    cout <<"1. punto p= ("<<p.getX()<<";"<<p.getY()<<")"<<endl;
    cout <<"2. punto 78+p: s= ("<<s.getX()<<";"<<s.getY()<<")"<<endl;
    cout <<"3. punto 78-p: r= ("<<r.getX()<<";"<<r.getY()<<")"<<endl;
    r=p+s-45;
    cout <<"4. punto p+s-45: r= ("<<r.getX()<<";"<<r.getY()<<")"<<endl;


    return 0;
}