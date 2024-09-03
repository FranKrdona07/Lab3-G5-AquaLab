#include <iostream>

int FuncionExponente(int base, int expo);

int FuncionExponente(int base, int exponente)
{
    if (exponente == 0)
    {
        return 1;
    }
    if (exponente > 1)
    {
        return base * FuncionExponente(base, exponente - 1);
    }
}

int SumaNaturales(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n + SumaNaturales(n - 1);
    }
}

int main()
{
    int base, exp, resultado, opc=0;
    do
    {
        std::cout << "Escoja que problema quiere revisar:  " << std::endl;
        std::cout << "1-Calcular el exponente de una base  " << std::endl;
        std::cout << "2-Sumar n cantidad de numeros naturales:  " << std::endl;
        std::cout << "3- Salir:  " << std::endl;
        std::cin >> opc;
        switch (opc)
        {
        case 1:
            std::cout << "Digite la base del numero: " << std::endl;
            std::cin >> base;
            std::cout << "Digite el exponente del numero: " << std::endl;
            std::cin >> exp;

            resultado = FuncionExponente(base, exp);

            std::cout << "El resultado de la base " << base << " y el exponente " << exp << " es: " << resultado << std::endl;

            break;
        case 2:
            int n;
            std::cout << "Ingrese la cantidad de enteros a sumar" << std::endl;
            std::cin >> n;

            if (n <= 0)
            {
                std::cout << "No es un numero natural, ingresa otro" << std::endl;
                break;
            }

            std::cout << "La suma de los " << n << "primeros numeros enteros es de " << SumaNaturales(n) << std::endl;
            break;
        case 3:
        break;
        default:
            std::cout << "opcion no valida";
        }

    } while (opc !=3);

    return 0;
}


