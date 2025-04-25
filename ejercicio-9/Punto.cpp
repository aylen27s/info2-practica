#include <istream>
#include <ostream>
#include <iostream>
// #include <cstdlib>
#include "Punto.h"
#include <cmath> 


using namespace std;

int Punto::counterObjects = 0;
int Punto::counterInstances = 0;
double Punto::minValue = -1000;
double Punto::maxValue = 1000;

void Punto::controlValue(double* v){
    *v = (*v <= maxValue && *v >= minValue) ? *v : (*v < minValue) ? minValue : maxValue;
}



Punto::Punto( double x, double y){

    controlValue(&x);
    controlValue(&y);
    mx = x;
    my = y;
    counterInstances++;
    counterObjects = counterInstances;
}

Punto::Punto(){
    mx = 0;
    my = 0;
    counterInstances++;
    counterObjects = counterInstances;

}

Punto::Punto( Punto &p ){
    
    double x_aux = p.getX();
    double y_aux = p.getY();

    controlValue(&x_aux);
    controlValue(&y_aux);

    mx = x_aux;
    my = y_aux;

    counterInstances++;
    counterObjects = counterInstances;

}

Punto::~Punto(){
    counterObjects-- ;
}

void Punto::setPunto( double x, double y ){
    controlValue(&x);
    controlValue(&y);
    mx = x;
    my = y; 
}

void Punto::setPunto( Punto p ){
    double x_aux = p.getX();
    double y_aux = p.getY();

    controlValue(&x_aux);
    controlValue(&y_aux);
    mx = x_aux;
    my = y_aux;
}

Punto* Punto::getPunto(){
    return this;
}

void Punto::setX(double x){
    controlValue(&x);
    mx = x;
}

void Punto::setY(double y){
    controlValue(&y);
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

    controlValue(&x_aux);
    controlValue(&y_aux);

    Punto aux(x_aux,y_aux);

    return aux;
}

Punto Punto::operator-(Punto p){ // a=b-c --> a.setPunto(b.restaPunto(c))
    double x_aux = mx - p.getX();
    double y_aux = my - p.getY();

    controlValue(&x_aux);
    controlValue(&y_aux);

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

int Punto::getCantCreada(){
    return counterInstances;
}

int Punto::getCantExistente(){
    return counterObjects;
}

bool Punto::setLimites(float _min, float _max){

    if( _min < _max){
        minValue = _min;
        maxValue = _max;
        return true;
    } else {
        return false;
    }
    
}

double Punto::getLimiteInf(){
    return minValue;
}

double Punto::getLimiteSup(){
    return maxValue;
}
