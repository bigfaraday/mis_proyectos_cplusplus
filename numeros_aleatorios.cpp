#include <iostream>
int main()
{
    srand(time(NULL));                                        // Inicializa la semilla para la generación de números aleatorios
    int numero = rand() % 6 + 1;                              // Genera un número aleatorio entre 1 y 6
    std::cout << "Numero aleatorio: " << numero << std::endl; // Muestra el número aleatorio generado
    return 0;
}