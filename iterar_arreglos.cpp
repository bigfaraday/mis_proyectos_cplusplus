// En lugar de imprimir uno por uno los elementos del arreglo, se puede aplicar un buble for

#include <iostream>

int main()
{
    std::string cientificos[] = {"einstein", "newton", "schrodinger", "bohr"};

    /* std::cout << cientificos[0] << "\n";
       std::cout << cientificos[1] << "\n";
       std::cout << cientificos[2] << "\n";
       std::cout << cientificos[3] << "\n";
    */

    // con este bucle for se puede imprimir todos los elementos del arreglo

    int longitud = sizeof(cientificos) / sizeof(cientificos[0]);

    for (int i = 0; i < longitud; i++)
    {
        std::cout << cientificos[i] << "\n";
    }

    return 0;
}