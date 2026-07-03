#include <iostream>

//si queremos usar el mismo nombre para muchas variables usamos namespace
//a namespace lo declaramos fuera del main
//ahora podemos usar el mismo nombre para muchas variables

namespace wilson{
    int edad = 26;
}

namespace hanaka{
    int edad = 27;
}

int main(){

    //int edad = 25;
    //std::cout<<edad<<'\n';//al imprimir edad por defecto imprime el valor dentro del main
    //std::cout<<wilson::edad<<'\n';//debemos escribir el nombre del namespace delante de la variable para mostrarla
    //std::cout<<hanaka::edad<<'\n';

    //Para fijar un namespace usamos using namespace
    using namespace wilson; //fijamos a edad con su valor del namespace wilson
    std::cout<<edad<<'\n'; //ya no nececito escribir "wilson::edad" para que me de su valor
    std::cout<<hanaka::edad<<'\n';//para imprimir el valor de edad de hanaka necesito escribirlo


    return 0;
}