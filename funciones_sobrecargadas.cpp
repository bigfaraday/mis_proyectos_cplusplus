// una funcion puede escribirse varias veces y dar resultados distintos dependiendo del numero de entradas que le demos

#include <iostream>
#include <cmath>

void CalculoEnergia(double velocidad_luz, double masa);        // definimos una funcion para calcular la energia de einstein
void CalculoEnergia(int velocidad, double masa);               // volvemos a definir la misma funcion para calcular la energia cinetica
void CalculoEnergia(double gravedad, double masa, int altura); // volvemos a definir la misma funcion para calcular la energia potencial

int main()
{

    const double c = 300000;
    double m = 10;
    int v = 30;
    const double g = 9.81;
    int h = 10;

    // solo debemos cambiar las entradas dentro de la funcion que llamamos en main y nos calculara la respectiva energia dependiendo de las entradas
    // si pones dentro de CalculoEnergia() las entradas c,m calcula la energia de einstein
    // si pones dentro de CalculoEnergia() las entradas v,m calcula la energia cinetica
    // si pones dentro de CalculoEnergia() las entradas g,m,h calcula la energia potencial

    CalculoEnergia(g, m, h); // se debe poner en orden las variables dentro de la funcion

    return 0;
}
void CalculoEnergia(double velocidad_luz, double masa)
{
    double Energia = masa * pow(velocidad_luz, 2);
    std::cout << "la energia es igual a " << Energia << " J\n";
}
void CalculoEnergia(int velocidad, double masa)
{
    int Energia = 0.5 * masa * pow(velocidad, 2);
    std::cout << "la energia cinetica es igual a " << Energia << " J\n";
}
void CalculoEnergia(double gravedad, double masa, int altura)
{
    int Energia = masa * gravedad * altura;
    std::cout << "la energia potencial es igual a " << Energia << " J\n";
}