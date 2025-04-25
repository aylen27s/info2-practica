#include <iostream>
#include "Punto.h"

using namespace std;

void ff (void)
{
    Punto p,q,w;
    Punto h(34);
    Punto r=h;
    cout<< "a. Puntos Creados:" << Punto::getCantCreada()
        << " - Existentes:" << r.getCantExistente() << endl; // 5 (ff) + 2 (main) = 7 creados, 7 existentes (objetos del main no se destruyen)
}

int main(){
    cout<< "1. Puntos Creados:" << Punto::getCantCreada()
        << " - Existentes:"<< Punto::getCantExistente() << endl; // 0 creados, 0 existentes
    
    Punto p(12.34,-56.78);
    
    cout<< "2. Puntos Creados:" << p.getCantCreada()
        << " - Existentes:" << p.getCantExistente() << endl; // 1 creado, 1 existente
    
    Punto h(p);
    
    cout<< "3. Puntos Creados:" << Punto::getCantCreada()
        << " - Existentes:" << Punto::getCantExistente() << endl; // 2 creados, 2 existentes
    
    ff(); // se crean N puntos mas ( 5 en el caso de ejemplo). Al salir de la funcion se destruyen
    
    cout<< "4. Puntos Creados:" << Punto::getCantCreada()
        << " - Existentes:" << Punto::getCantExistente() << endl; // 2 + N objetos creados, 2 existentes
    
    return 0;
}