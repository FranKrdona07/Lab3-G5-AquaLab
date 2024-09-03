#include <iostream>

int FuncionExponente(int base, int expo);

int main() {
    int base, exp, resultado;
    std::cout << "Digite la base del numero: " << std::endl;
    std::cin >> base;
    std::cout << "Digite el exponente del numero: " << std::endl;
    std::cin >> exp;

    resultado = FuncionExponente(base, exp);

    std::cout << "El resultado de la base " << base << " y el exponente " << exp << " es: " << resultado << std::endl;

    return 0;
}

int FuncionExponente(int base, int exponente) {
    if (exponente == 0) {
        return 1;
    } else {
        return base * FuncionExponente(base, exponente - 1); 
    }
}
