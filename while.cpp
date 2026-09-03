#include <iostream>

int main()
{
    std::string nombre;

    while (nombre.empty()) // while es como un if que ejecuta un bloque de codigo mientras la condicion sea verdadera
    {
        std::cout << "ingrese su nombre: ";
        std::getline(std::cin, nombre);
    }

    std::cout << "Hola " << nombre << "!" << std::endl;

    return 0;
}