// Hacer un programa que sortee premios

#include <iostream>
#include <ctime>

int main()
{
    srand(time(0));

    int premio = rand() % 4 + 1; // Genera un número aleatorio entre 1 y 4

    switch (premio)
    {
    case 1:
        std::cout << "ganaste un auto\n";
        break;
    case 2:
        std::cout << "ganaste una casa\n";
        break;
    case 3:
        std::cout << "ganaste una motocicleta\n";
        break;
    case 4:
        std::cout << "ganaste una cena\n";
        break;
    }

    return 0;
}