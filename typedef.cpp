#include <iostream>
#include <vector>

// typedef sirve para crear un alias a cualquier tipo de dato (int, string, double, chart, etc.. o combinaicones)
// ayuda a que el codigo sea mas corto
// se declara fuera del main
// por convencion se pone "_t" despues del nombre del typedef
// se debe poner typedef y luego el tipo de variable y luego el alias que queremos asignarle

// Tambien podemos usar "using" en lugar de typedef ya que funciona mejor con los templates
// se debe poner using y luego el alias que queremos asignarle y luego = y luego el tipo de variable

typedef std::string texto_t;
typedef double decimales_t;
using enteros_t = int;
using letra_t = char;

int main()
{

    texto_t nombre = "wilson"; // no necesitamos escribir std::string, simplemente escribir texto_t
    std::cout << nombre << '\n';

    decimales_t decimales = 1.5;
    std::cout << decimales << '\n';

    enteros_t edad = 26;
    std::cout << edad << '\n';

    letra_t letra = 'A';
    std::cout << letra << '\n';

    return 0;
}