#include <iostream>

int buscarLetra(char abecedario[], int tamano, char letra);

int main()
{

    char abecedario[] = {'A', 'B', 'C', 'D', 'E'};
    int tamano = sizeof(abecedario) / sizeof(abecedario[0]);
    int posicion; // indice de la letra que quiere buscar el usuario
    char letra;   // letra que el usuario pedira mostrar su indice

    std::cout << "Escriba una letra\n";
    std::cin >> letra;

    posicion = buscarLetra(abecedario, tamano, letra);
    if (posicion != -1)
    {
        std::cout << "La letra " << letra << " se encuentra en la posicion " << posicion << "\n";
    }
    else
    {
        std::cout << "la letra que escribiste no esta en la lista\n";
    }
    return 0;
}

int buscarLetra(char abecedario[], int tamano, char letra)
{
    for (int i = 0; i < tamano; i++)
    {
        if (abecedario[i] == letra)
        {
            return i;
        }
    }
    return -1; // por convencion -1 significa que algo no se encontro
}
