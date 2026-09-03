#include <iostream>

int main()
{

    /*
    //ESTE CODIGO PUEDE REDUCIRSE USANDO DO WHILE
    int numero;

    std::cout << "ingrese un numero menor a 10: ";
    std::cin >> numero;

    while (numero >= 10)
    {
        std::cout << "ingrese un numero menor a 10: ";
        std::cin >> numero;
    }

    std::cout << "el numero ingresado es: " << numero << std::endl;
    */

    // do while es como un while pero ejecuta el bloque de codigo al menos una vez antes de evaluar la condicion
    int numero;

    do
    {
        std::cout << "ingrese un numero menor a 10: ";
        std::cin >> numero;
    } while (numero >= 10);

    std::cout << "el numero ingresado es: " << numero << std::endl;

    return 0;
}