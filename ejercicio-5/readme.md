Ejercicio 5

Modificar el punto anterior para permitir la suma (+), resta (-) y asignación (=) de objetos tipo Punto.

Nota: tener en cuenta que las operaciones de deben controlar que los valores de x e y, no desborden el rango de +/- 1000.

No utilizar friend, para realizar la sobrecarga de los operadores suma (+) y resta (-).


Preguntas:
    - ¿Requiere sobrecargar el operador de asignación (=)? ¿Por qué?
    No es necesario ya que existe el constructor de copia.

    - Justifique la ejecución de la línea q=r+47; (como se produce la suma entre el objeto Punto
y el objeto int, suponiendo que mantuvo la consigna de escribir lo menos posible y no sobrecargó la suma de Punto con int)
    Esto es posible ya que existe el constructor:
        Punto( double x, double y=0)
    
    C++ intenta pasar el int 47 a objeto Punto para poder aplicar la sobrecarga de operator+.
    Si quitamos el parametro por defecto dejando el constructor como Punto( double x, double y), obtendremos error.