#include <iostream>

int encontrarMaximo(int arreglo[], int tamano);

int main()
{
    int arreglo[] = {44, 10, 22, 8};
    int tamano = sizeof(arreglo) / sizeof(arreglo[0]);

    int maximo = encontrarMaximo(arreglo, tamano);
    std::cout << "el maximo es " << maximo;

    return 0;
}

int encontrarMaximo(int arreglo[], int tamano)
{
    int maximo = arreglo[0];
    int indiceMaximo = 0;
    for (int i = 1; i < tamano; i++)
    {
        if (arreglo[i] > maximo)
        {
            maximo = arreglo[i];
            indiceMaximo = i;
        }
    }
    return maximo;
}