#include <iostream>
#include "Punto.h"
using namespace std;

int main(){

    Punto p(12.34,-56.78);
    Punto r(1,4);
    Punto q;
    cout <<"1. punto p= ("<<p.getX()<<";"<<p.getY()<<")"<<endl;
    cout <<"2. punto r= ("<<r.getX()<<";"<<r.getY()<<")"<<endl;
    cout <<"3. punto q= ("<<q.getX()<<";"<<q.getY()<<")"<<endl;

    q=p+r;
    cout <<"3. punto p+r: q= ("<<q.getX()<<";"<<q.getY()<<")"<<endl;
    q=p-r;
    cout <<"4. punto p-r: q= ("<<q.getX()<<";"<<q.getY()<<")"<<endl;
    Punto s(990,-990);
    cout <<"5. punto s= ("<<s.getX()<<";"<<s.getY()<<")"<<endl;
    q=s+p;
    cout <<"6. punto s+p: q= ("<<q.getX()<<";"<<q.getY()<<")"<<endl;
    q=r+47;
    cout <<"7. punto r+47: q= ("<<q.getX()<<";"<<q.getY()<<")"<<endl;
    // cout <<"Prueba de compilación con makefile"<<endl;


    return 0;
}