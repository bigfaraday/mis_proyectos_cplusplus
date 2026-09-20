// Las variables locales son aquellas que se encuentran dentro de una funcion o dentro de {}, las globales se encuentran fuera de cualquier funcion
// Las funciones son incapaces de ver las variables de otras funciones a menos que se las invoque
// si hay una variable global y una funcion tiene la misma variable pero local, este preferira la variable local

#include <iostream>

std::string nombre = "willo"; // variable global

void MiNombre();

int main()
{
    // std::string nombre = "daniel"; // variable local

    // std::cout << "mi nombre es " << nombre << "\n";
    std::cout << "mi nombre es " << ::nombre << "\n"; // si colocamos :: en frente de la variable se preferira la variable global antes que la local

    MiNombre();
    return 0;
}

void MiNombre()
{
    std::string nombre = "wil"; // variable local

    std::cout << "my name is " << nombre << "\n";
}