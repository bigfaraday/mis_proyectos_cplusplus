#include <iostream>

void ordenarArreglo(int arreglo[], int tamano);

int main()
{
    int arreglo[] = {8, 5, 6, 4, 2, 9, 7, 3, 10, 1};
    int tamano = sizeof(arreglo) / sizeof(arreglo[0]);

    ordenarArreglo(arreglo, tamano);

    for (int elementos : arreglo)
    {
        std::cout << elementos << " ";
    }

    return 0;
}

void ordenarArreglo(int arreglo[], int tamano)
{
    int cajita;                          // cajita srive para almacenar temporalmente un elemento del arreglo
    for (int i = 0; i < tamano - 1; i++) // este bucle recorre todo el arreglo, necesitamos un segundo bucle para que compare numeros adyacentes
    {
        for (int j = 0; j < tamano - i - 1; j++) // este bucle sirve para seleccionar dos elementos adyacentes del arreglo
        {
            if (arreglo[j] > arreglo[j + 1]) // si el elemento de la izquierda es mayor al de su derecha entonces el de la izquierda se guarda en cajita y el de la derecha se guarda en el de la izquierda y luego se guarda el de la cajita en el de la derecha
            {
                cajita = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = cajita;
            }
        }
    }
}