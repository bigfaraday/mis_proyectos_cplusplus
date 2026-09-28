// el operador sizeof() nos indica el tamaño en bytes de las variables sobre las que opera

#include <iostream>

int main()
{

    int entero = 1;               // un int pesa 4 bytes
    double decimal = 5.5;         // un double pesa 8 bytes
    std::string palabra = "hola"; // un string pesa 32 bytes
    char letra = 'A';             // un char pesa 1 byte

    double constantes[] = {3.14, 1.2, 9.9}; // un arreglo pesa igual al numero de elementos multiplicado por el peso del tipo del arreglo

    std::cout << sizeof(constantes) << " bytes\n";
    std::cout << sizeof(constantes) / sizeof(constantes[0]) << " elementos"; // dividir el tamano del arreglo entre el tamano del primer elemento del arreglo nos da el numero de elementos del arreglo

    return 0;
}