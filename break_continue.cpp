#include <iostream>

int main()
{
    for (int i = 0; i <= 5; i++)
    {
        if (i == 3)
        {
            continue; // continue hace que el bucle continue con la siguiente iteracion, saltando el resto del codigo en la iteracion actual
        }
        std::cout << i << std::endl;
    }
    return 0;
}