Ejercicio 9

Agregar un método público:
    - set_limites (float,float)
que modifique el rango válido de x e y de la clase.

Esto significa que el rango de todos los objetos existentes y de los objetos por crear se verán afectados por este método.

Este método no debe modificar los valores de coordenadas x;y. (No importa que  estos queden fuera de rango).

El primer parámetro corresponde al límite inferior y el segundo al superior. Si el límite inferior no es menor al superior, se debe omitir el cambio del rango.

Implementar además las funciones “getLimiteSup” y “getLimiteInf”, del tipo inline, para saber cuáles son los valores de estos límites.

Por omisión, los límites son +/- 1000.