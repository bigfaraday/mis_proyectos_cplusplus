#include <iostream>
#include <cmath>

// libreria cmath es para activar estas funciones
//  para mas funciones ver en la pagina cplusplus.com

int main()
{

    double x = 2;
    double y = 4;
    double w = 1.5;
    double z;

    // Funcion maximo y minimo
    // z = std::max(x, y); // devuelve el numero maximo entre dos numeros
    // std::cout << z;

    // z = std::min(x, y); //devuelve el numero minimo
    // std::cout << z;

    // z = std::pow(x, y); //eleva el 1er numero a la potencia del 2do numero
    // std::cout << z;

    // z = std::sqrt(y); // saca la raiz cuadrada
    // std::cout << z;

    // z = std::abs(w); // saca el valor absoluto
    // std::cout << z;

    // z = std::round(w); // redondea el numero
    // std::cout << z;

    // z = std::ceil(w); // redondea hacia el numero mas alto
    // std::cout << z;

    // z = std::floor(w); // redondea al numero mas bajo
    // std::cout << z;

    // ejercicio
    // Hallar la hipotenusa del triangulo de lado A y B

    double A;
    double B;
    double C;

    std::cout << "ingresa el valor de A: ";
    std::cin >> A;

    std::cout << "ingresa el valor de B: ";
    std::cin >> B;

    // No es necesario poner std
    A = pow(A, 2);
    B = pow(B, 2);
    C = sqrt(A + B);
    std::cout << "El valor de la hipotenusa es: " << C;

    return 0;
}
