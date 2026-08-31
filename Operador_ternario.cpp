#include <iostream>

int main()
{
    int calificacion;
    int nota_extra;
    std::cout << "Ingrese la calificacion: ";
    std::cin >> calificacion;

    calificacion >= 51 ? std::cout << "Aprobaste mano" << std::endl : std::cout << "Reprobaste asi que ingresa una nota extra de una tarea: " << std::endl;
    std::cin >> nota_extra;
    calificacion + nota_extra >= 51 ? std::cout << "Aprobaste con la nota extra" << std::endl : std::cout << "Reprobaste de nuevo" << std::endl;
    return 0;
}
