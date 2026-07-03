#include <iostream> //iostream es un encabezado que contiene funciones para operaciones de input y output

int main()
{ // main es la funcion principal donde el programa comienza

    // std::cout<<"hello world"<<'\n'; //std significa standard y cout caracter output
    // std::cout<<"hello bolivia"<<'\n'; //'\n' es salto de linea

    // int son variables de numeros enteros
    int x;
    x = 5;
    // std::cout<<"x = "<<x<<'\n';

    int y = 6;
    // std::cout<<"y = "<<y<<'\n';

    int sum = x + y;
    // std::cout<<sum;

    // double son numeros incluidos con decimales
    double pi = 3.1416;
    double radius = 1.2;

    // char (single character) es solo un caracter (letra, numero, simbolo)
    char nota_musical = 'C';
    char asterisco = '*';
    char numero = '1';
    // std::cout<<nota_musical<<'\n';
    // std::cout<<asterisco<<'\n';
    // std::cout<<numero<<'\n';

    // boolean (true or false)
    bool nota = true;
    bool luz = true;

    // string (objetos que representan una secuencia de texto)
    std::string name = "wilson"; // debe ir siempre con std::
    std::string apellido = "ramirez";
    std::string apodo = "wil";
    std::cout << "mi apodo es " << apodo;

    return 0; // si la ejecucion retorna 0 significa que funciona, si retorna 1 significa que no funciona
}