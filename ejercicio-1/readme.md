Ejercicio 1

Definir e implementar una clase Punto, que posea los elementos públicos y privados:

Variables miembro privadas:
    mx y my - del tipo double, que representan las coordenadas (x; y) del punto.

Métodos miembro públicos:
    setPunto: recibe los valores de x e y en dos variables double.
    getPunto: devuelve el valor del punto (en formato class Punto). En formato inline
    setX y setY; que dan valor a x e y. En formato inline
    getX y getY; que devuelven los valores de x e y. En formato inline

La creación del objeto debe permitir o no, las siguientes expresiones:
Punto pa; // mx y my se inicializan en cero.
Punto pb (23.3,56.8); // mx se inicializa con 23.3 y my con 56.8.

La inicialización del objeto con un solo parámetro debe dar error de sintaxis, por ejemplo la línea:
    Punto pc (34.4); // error de sintaxis.