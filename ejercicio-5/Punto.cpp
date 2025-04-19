#include "Punto.h"

Punto::Punto( double x, double y){

    controlRange(&x, &y);
    mx = x;
    my = y;
}

void Punto::controlRange(double* px, double* py){
    *px = (*px<=1000 && *px>=-1000) ? *px : (*px < -1000) ? -1000 : 1000;
    *py = (*py<=1000 && *py>=-1000) ? *py : (*py < -1000) ? -1000 : 1000;
}


Punto::Punto(){
    mx = 0;
    my = 0;
}

Punto::Punto( Punto &p ){
    // no vuelvo a hacer un control sobre los valores del punto
    // porque se supone que p es un objeto ya validado
    mx = p.getX();
    my = p.getY();
}

Punto::~Punto(){
//No hace nada especial
}

void Punto::setPunto( double x, double y ){
    mx = x;
    my = y; 
}

void Punto::setPunto( Punto p ){
    mx = p.getX();
    my = p.getY();
}

Punto* Punto::getPunto(){
    return this;
}

void Punto::setX(double x){
    mx = x;
}

void Punto::setY(double y){
    my = y;
}

double Punto::getX(){
    return mx;
}

double Punto::getY(){
    return my;
}

//No hace falta sobrecargar la asignación por la existencia del constructor de copia
// void Punto::operator=(Punto p){
//     mx = p.getX();
//     my = p.getY();
// }

Punto Punto::operator+(Punto p){ // a=b+c --> a.setPunto(b.sumaPunto(c))
    double x_aux = mx + p.getX();
    double y_aux = my + p.getY();

    controlRange(&x_aux, &y_aux);
    Punto aux(x_aux,y_aux);

    return aux;
}

Punto Punto::operator-(Punto p){ // a=b-c --> a.setPunto(b.restaPunto(c))
    double x_aux = mx - p.getX();
    double y_aux = my - p.getY();

    controlRange(&x_aux, &y_aux);
    Punto aux(x_aux,y_aux);

    return aux;
}