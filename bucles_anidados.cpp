#include <iostream>

int main()
{
    int filas;
    int columnas;
    char simbolo;

    std::cout << "Ingrese el numero de filas: ";
    std::cin >> filas;
    std::cout << "Ingrese el numero de columnas: ";
    std::cin >> columnas;
    std::cout << "Ingrese el simbolo: ";
    std::cin >> simbolo;

    for (int i = 1; i <= filas; i++)
    {
        for (int j = 1; j <= columnas; j++)
        {
            std::cout << simbolo << " ";
        }
        std::cout << '\n';
    }

    return 0;
}