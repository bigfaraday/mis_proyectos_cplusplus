// crear un programa para consultar saldo, retirar y depositar saldo

#include <iostream>

void consultar(double saldo);
double depositar();
double retirar(double saldo);

int main()
{
    int numero = 0;
    double saldo = 0;
    do
    {
        std::cout << "***********BIENVENIDO************\n";
        std::cout << "Seleccione la opcion\n";
        std::cout << "1. consultar saldo\n";
        std::cout << "2. depositar monto\n";
        std::cout << "3. retirar monto\n";
        std::cout << "4. salir\n";
        std::cin >> numero;

        if (numero == 1)
        {
            consultar(saldo);
        }
        else if (numero == 2)
        {
            saldo = saldo + depositar();
            consultar(saldo);
        }
        else if (numero == 3)
        {
            saldo = saldo - retirar(saldo);
            consultar(saldo);
        }

    } while (numero != 4);

    return 0;
}
void consultar(double saldo)
{
    std::cout << "tu saldo es " << saldo << "\n";
}
double depositar()
{
    double monto = 0;
    std::cout << "Ingrese el monto a depositar: \n";
    std::cin >> monto;
    return monto;
}
double retirar(double saldo)
{
    double monto = 0;
    std::cout << "Ingrese el monto a retirar: \n";
    std::cin >> monto;
    if (monto > saldo)
    {
        std::cout << "el monto a retirar excede su saldo \n";
        return 0;
    }
    else
    {
        return monto;
    }
}