#include "Punto.h"

Punto::Punto( double x, double y){
    mx = x;
    my = y;
}
Punto::Punto(){
    mx = 0;
    my = 0;
}

Punto::~Punto(){
//No hace nada especial
}

void Punto::setPunto( double x, double y ){
    mx = x;
    my = y; 
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

void Punto::operator=(Punto* p){
    mx = p->mx;
    my = p->my;
}