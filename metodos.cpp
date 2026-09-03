#include <iostream>

int main()
{
    std::string mi_nombre;
    std::string apellido;
    char pos;

    mi_nombre = "daniel";
    apellido = "garciak";

    apellido.length();                                   // obtiene la longitud de la cadena "garcia"
    pos = mi_nombre.at(5);                               // accede al caracter en la posición 5 de la cadena "daniel"
    std::string correo = mi_nombre.append("@gmail.com"); // concatena "@gmail.com" al final de la cadena "daniel"
    apellido.erase(6, 1);                                // elimina el caracter en la posición 6 de la cadena "garciak",
                                                         // resultando en "garcia", formula variable.erase(posicion, cantidad_de_caracteres_a_eliminar)

    std::cout << "garcia tiene " << apellido.length() << " letras" << std::endl;
    std::cout << pos << std::endl;
    std::cout << correo << std::endl;

    return 0;
}