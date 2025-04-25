#include <iostream>
#include "Punto.h"

using namespace std;


int main(){
    cout <<"1. Rango de punto: "<<Punto::getLimiteInf()<<":"<<Punto::getLimiteSup()<<endl;
    Punto p(-3000.12,5000);
    Punto r(12.34,34.56);
    cout <<"2. punto p: "<<p<<endl;
    cout <<"3. punto r: "<<r<<endl;
    Punto::setLimites(50,85);
    cout <<"4. Rango de punto: "<<p.getLimiteInf()<<":"<<p.getLimiteSup()<<endl;
    cout <<"5. punto p: "<<p<<endl;
    cout <<"6. punto r: "<<r<<endl;
    Punto t;
    cout <<"7. nuevo punto t: "<<t<<endl;
    r=p; // como la igualdad no esta redefinida, no se ve afectada por el nuevo límite
    cout <<"8. r=p r: "<<r<<endl;
    r.setPunto(p); // acá si deberia aplicar el nuevo rango
    cout <<"9. setPunto r: "<<r<<endl;
    r.setLimites(500,-85);
    cout <<"10. Rango de punto: "<<Punto::getLimiteInf()<< ":"<<Punto::getLimiteSup()<<endl<<endl;

    Punto::setLimites(-1000, 1000);
    cout <<"[Nuevo] Rango de punto: "<<p.getLimiteInf()<<":"<<p.getLimiteSup()<<endl;
    Punto Pa(5000,-5000);
    cout <<"Punto Pa(5000,-5000): "<<Pa<< endl;

    Punto::setLimites(-50,50);
    cout <<"[Nuevo] Rango de punto: "<<p.getLimiteInf()<<":"<<p.getLimiteSup()<<endl;
    Punto Pb(5000,-5000);
    cout <<"Punto Pb(5000,-5000): "<<Pb<< endl;
    cout <<"Punto Pa: "<<Pa<< endl;

    Pa = Pa + 100;
    cout <<"Pa + 100 -> Punto Pa: "<<Pa<< endl;


    return 0;
}