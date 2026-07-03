#include <iostream>

int main()
{

    int edad;
    std::cout << "ingresa tu edad: ";
    std::cin >> edad;

    if (edad >= 60) // la condicion se pone dentro del parentesis, y si se cumple la condicion entonces se ejecuta lo que esta dentro de la llave
    {
        std::cout << "Eres muy viejo para beber";
    }
    else if (edad >= 18) // si la condicion del 1er if no se cumple entonces pasa al else if y si se cumple la condicion del else if entonces se ejecuta lo que esta adentro de la llave, sino pasa al siguiente else if o else
    {
        std::cout << "Tienes edad para beber";
    }
    else // si no se cumple la o las condiciones anteriores pasa a ejecutarse lo que hay dentro de la llave de else
    {
        std::cout << "no tienes edad para beber";
    }

    return 0;
}