// return nos devuelve un valor al lugar donde se invoca la funcion, es decir a la funcion que lo contiene
// Recordemos paso a paso como crear una funcion

#include <iostream>
#include <cmath>

// paso 2 crear nuestra funcion
void CalculoHipotenusa(double cateto1, double cateto2); // paso 4 introducir las variables que usamos al llamar la funcion con su tipo de dato

double AreaCuadrado(double longitud);

int main()
{
    // paso 1 crear las variables de nuestra funcion
    double cateto1 = 3.5;
    double cateto2 = 2.5;

    // paso 3 llamar a la funcion dentro de main
    CalculoHipotenusa(cateto1, cateto2);

    // ejemplo para ver como funciona return
    double longitud = 4.5;

    double AreaTotal = AreaCuadrado(longitud); // paso 8 almacenamos en AreaTotal lo que retorna la funcion AreaCuadrado osea el valor area
    std::cout << "el area es " << AreaTotal << "cm\n";
    return 0;
}

// paso 5 copiar la funcion creada y escribir lo que hace la funcion
void CalculoHipotenusa(double cateto1, double cateto2) // se pone void delante del nombre de la funcion cuando la funcion no devuelve nada a main.
{
    // para hacer que la funcion nos devuelva un valor y lo mandemos a main debemos poner en lugar de void el tipo de dato del valor que nos devolvera la funcion
    double hipotenusa = std::sqrt(pow(cateto1, 2) + pow(cateto2, 2));
    std::cout << "hipotenusa = " << hipotenusa << "cm\n";
}

double AreaCuadrado(double longitud) // paso 6 cambiamos void por double ya que el valor "area" es el que queremos retornar a main y es de tipo double
{
    double area = pow(longitud, 2);
    return area; // paso 7 escribimos return y a lado lo que va a retornar a main
}
