// un bucle foreach es como un bucle for pero menos flexible, sirve para cualquier conjunto de datos iterable ya que recorre todo el conjunto de uno en uno

#include <iostream>

int main()
{

    double decimales[] = {1.1, 2.2, 3.3, 4.4, 5.5};

    for (double arreglo : decimales) // for(nueva variable : arreglo a iterar), la nueva variable debe ser del mismo tipo que el arreglo
    {
        std::cout << arreglo << "\n";
    }

    return 0;
}