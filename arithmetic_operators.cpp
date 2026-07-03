#include <iostream>

// Las operaciones aritmeticas son +,-,*,/
// siguen la jerarquia de la aritmetica (primero resolvemos parentesis, luego multiplicacion, division, luego suma y resta)
// podemos hacer la operacion sobre una misma variable usando +=, -=, *=, /=
// podemos sumar o restar una unidad sobre una misma variable usando ++,--

int main()
{
    // suma
    int edad = 26;
    // edad = edad + 1;
    // edad += 1;
    edad++;

    // std::cout<<edad;

    // resta
    int manzanas = 5;
    // manzanas = manzanas - 1;
    // manzanas -= 1;
    manzanas--;
    // std::cout<<manzanas;

    // multiplicacion
    int peras = 10;
    // peras = peras * 2;
    peras *= 2;
    // std::cout<<peras;

    // division
    int grupo = 100; // divisiones de enteros da resultado entero
    // grupo = grupo / 3;
    grupo /= 3;
    // std::cout << grupo;

    // residuo
    int estudiantes = 3;
    estudiantes = estudiantes % 2; // el resultado es el residuo
    // std::cout<<estudiantes;

    return 0;
}