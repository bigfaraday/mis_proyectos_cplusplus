#include <iostream>

int main(){
    //podemos hacer que una variable se convierta en una constante
    //la constante no puede ser modificada
    //ponemos const delante de la variable para hacerla constante
    //Las constantes las escribimos con MAYUSCULAS
    const double PI = 3.1416;
    double radius = 10;
    double area = PI * radius*radius;

    std::cout<<area;

    return 0;
}