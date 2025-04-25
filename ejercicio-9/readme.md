*Ejercicio 9*

Agregar un método público:

    set_limites (float,float)

que modifique el rango válido de x e y de la clase.

Esto significa que el rango de todos los objetos existentes y de los objetos por crear se verán afectados por este método.

Este método no debe modificar los valores de coordenadas x;y. (No importa que  estos queden fuera de rango).

El primer parámetro corresponde al límite inferior y el segundo al superior. Si el límite inferior no es menor al superior, se debe omitir el cambio del rango.

Implementar además las funciones “getLimiteSup” y “getLimiteInf”, del tipo inline, para saber cuáles son los valores de estos límites.

Por omisión, los límites son +/- 1000.

*Ejemplos*
Punto Pa(5000,-5000); toma el valor (1000;-1000) por los límites definidos por omisión.

Si luego ejecuto:

    Punto::set_limites (50,-50);

Punto Pb(5000,-5000); toma el valor (50;-50) por los límites definidos explícitamente.
Pa mantendrá el valor (1000;-1000), sin embargo si ejecuto Pa=Pa+100, su nuevo valor será (50;-50) pues se ve afectado por el nuevo rango definido.