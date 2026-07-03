// switch es una alternativa a if y a los else if

#include <iostream>

int main()
{

    int mes;
    std::cout << "ingrese un numero del 1 al 12: ";
    std::cin >> mes;

    switch (mes) // se pone dentro del parentesis la variable a evaluar y la condicion se pone a lado de los case
    {
    case 1: // esto es equivalente a decir "si mes es igual a 1 entonces imprime es enero"
        std::cout << "es enero";
        break;
    case 2:
        std::cout << "es febrero";
        break;
    case 3:
        std::cout << "es marzo";
        break;
    case 4:
        std::cout << "es abril";
        break;
    case 5:
        std::cout << "es mayo";
        break;
    case 6:
        std::cout << "es junio";
        break;
    case 7:
        std::cout << "es julio";
        break;
    case 8:
        std::cout << "es agosto";
        break;
    case 9:
        std::cout << "es septiembre";
        break;
    case 10:
        std::cout << "es octubre";
        break;
    case 11:
        std::cout << "es noviembre";
        break;
    case 12:
        std::cout << "es diciembre";
        break;
    default: // default es el equivalente al else, si no se cumple ningun case entonces se ejecuta lo que esta en default
        std::cout << "solo ingrese un numero del 1 al 12";
    }
    /*
        // ejemplo 2
        char calificacion;

        std::cout << "mete tu calificacion: ";
        std::cin >> calificacion;

        switch (calificacion)
        {
        case 'A':
            std::cout << "excelente!";
            break;
        case 'B':
            std::cout << "Bueno";
            break;
        case 'C':
            std::cout << "Regular";
            break;
        case 'F':
            std::cout << "Reprobado";
            break;
        default:
            std::cout << "ingrese solo las letras A B C F";
        }
    */
    return 0;
}