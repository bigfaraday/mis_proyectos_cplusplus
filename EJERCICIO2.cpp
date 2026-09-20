// Hacer un juego que adivine un numero aleatorio entre 1 y 100

#include <iostream>
#include <ctime>

int main()
{
    int num_aleatorio;
    int num_usuario;
    int intentos = 0;

    srand(time(NULL));

    num_aleatorio = rand() % 100 + 1; // Genera un número aleatorio entre 1 y 100

    do
    {
        std::cout << "Ingresa un numero entre 1 y 100: ";
        std::cin >> num_usuario;
        intentos++;
        if (num_usuario < num_aleatorio)
        {
            std::cout << "El numero es mayor\n";
        }
        else if (num_usuario > num_aleatorio)
        {
            std::cout << "El numero es menor\n";
        }
        else
        {
            std::cout << "ACERTASTE en " << intentos << " intentos\n";
        }
    } while (num_usuario != num_aleatorio && intentos <= 5); // se cumple mientras el numero ingresado sea diferente al numero aleatorio y los intentos sean menores o iguales a 5

    std::cout << "Perdiste, el numero aleatorio era: " << num_aleatorio << std::endl;
    return 0;
}