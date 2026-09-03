#include <iostream>

int main()
{
    // AND && : todas las condiciones deben ser verdaderas para que se ejecute el bloque de codigo
    // OR || : al menos una de las condiciones debe ser verdadera para que se ejecute el bloque de codigo
    // NOT ! : niega la condicion, si es verdadera la hace falsa y si es falsa la hace verdadera

    int temperatura;
    std::cout << "Ingrese la temperatura: ";
    std::cin >> temperatura;

    if (temperatura <= 0 || temperatura >= 30)
    {

        std::cout << "la temperatura es mala" << std::endl;
    }
    else
    {
        std::cout << "la temperatura es buena" << std::endl;
    }
    return 0;
}