// los arreglos son como un conjunto de cosas (todas del mismo tipo)

#include <iostream>

int main()
{

    double numerosPares[] = {2, 4, 10, 20}; // arreglo de tipo double, se coloca [] despues del nombre del arreglo, los elementos del arreglo deben estar entre llaves

    std::string cientificos[] = {"einstein", "bohr", "planck"}; // arreglo de tipo string

    std::cout << numerosPares << "\n";    // debemos especificar el elemento que queremos imprimir, caso contrario se mostrara la direccion del arreglo
    std::cout << numerosPares[0] << "\n"; // nos muestra el numero 2 ya que es el elemento 0 del arreglo numerosPares

    std::cout << cientificos[0] << "\n";
    std::cout << cientificos[1] << "\n";
    std::cout << cientificos[2] << "\n";

    // Se puede declarar un arreglo sin definir sus elementos
    int primos[3]; // se debe poner en los corchetes el numero de elementos que tendra el arreglo

    // se puede asignar los elementos al arreglo luego
    primos[0] = 7;

    return 0;
}