#include <istream>
#include <ostream>
#include <iostream>
// #include <cstdlib>
#include "Punto.h"
#include <cmath> 
using namespace std;

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

double Punto::Distancia(Punto P1){
    double x_temp = pow(P1.getX() - mx,2);
    double y_temp = pow(P1.getY() - my,2);

    return sqrt(x_temp + y_temp);
}

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

Punto operator+(int a, Punto p){
    return p+a;
}
Punto operator-(int a, Punto p){
    Punto aux(a);
    return aux-p;
}

bool Punto::operator==(Punto p){
    return (p.getX() == mx && p.getY() == my ? true : false);
}

bool Punto::operator!=(Punto p){
    return (p.getX() == mx && p.getY() == my ? false : true);
}

bool Punto::operator>(Punto p){  
    Punto origen;

    double dist_a = p.Distancia(origen);
    double dist_b = this->Distancia(origen);
    
    return (dist_b > dist_a);
}

bool Punto::operator<(Punto p){  
    Punto origen;

    double dist_a = p.Distancia(origen);
    double dist_b = this->Distancia(origen);
    
    return (dist_b < dist_a);
}

ostream& operator<<(ostream& os, Punto& _p){
    os << "("<<_p.getX()<<";"<< _p.getY()<<")";
    return os;
}

istream& operator>>(istream& is, Punto& _p){
    cout<<"-->Coordenada x:";
    is >> _p.mx ;
    cout<<"-->Coordenada y:";
    is >> _p.my ;
    // is.ignore();
    return is;
}