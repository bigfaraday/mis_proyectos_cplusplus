// Una funcion es un bloque de codigo reutilizable que realiza una tarea especifica. Se puede invocar desde cualquier parte del programa y puede recibir parametros de entrada y devolver un valor de salida.

#include <iostream>

void felizCumpleanos(std::string name, int edad, double torta); // declaramos antes de la funcion main, para que el compilador sepa que existe una funcion llamada felizCumpleanos que recibe 3 parametros de entrada y no devuelve ningun valor

int main()
{
    std::string nombre = "dan"; // es una variable local que solo existe dentro de la funcion main, no se puede acceder desde otra funcion
    int edad = 20;
    double torta = 0.5;

    felizCumpleanos(nombre, edad, torta); // invocamos la funcion felizCumpleanos y le pasamos como argumentos las variables nombre, edad y torta

    return 0;
}

void felizCumpleanos(std::string name, int edad, double torta) // los parametros de entrada no tienen que tener el mismo nombre que las variables locales de la funcion main, pero si pueden tener el mismo tipo de dato
{
    std::cout << "Feliz cumpleanos a ti\n";
    std::cout << "feliz cumpleanos a ti\n";
    std::cout << "feliz cumpleanos querido " << name << "\n";
    std::cout << "feliz cumpleanos a ti\n";
    std::cout << "Felicidades por tus " << edad << " anios\n";
    std::cout << "te toca comer " << torta << " de torta\n";
}