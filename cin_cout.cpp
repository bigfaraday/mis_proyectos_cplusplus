#include <iostream>

// cin usamos para ingresar valores y lo asignamos a una variable

int main()
{
    std::string name;
    std::string apellido;
    int age;
    std::cout << "Escribe tu nombre: ";
    std::cin >> name;
    std::cout << "Escribe tu edad: ";
    std::cin >> age;

    std::cout << "ingresa tu apellido completo: "; // cuando el string tiene espacios debemos usar getline
    std::getline(std::cin >> std::ws, apellido);   // esto sirve para evitar problemas al poner espacios en la entrada de texto
    // ponemos std::ws para evitar problemas cuando se usa getline despues de otro cin
    std::cout << "Hola " << name << " " << apellido << " tu edad es: " << age;
    return 0;
}