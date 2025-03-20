#include <iostream>

int main() {
    int numero1;
    int numero2;

    std::cout << "Introduce el primer numero" << std::endl;
    std::cin >> numero1;

    std::cout << "Introduce el segundo numero" << std::endl;
    std::cin >> numero2;

    std::cout << "Su suma es: " << numero1 + numero2 << std::endl;
    std::cout << "Su resta es: " << numero1 - numero2 << std::endl;
    std::cout << "Su multiplicacion es: " << numero1 * numero2 << std::endl;

    if (numero2 == 0) {
        std::cout << "No se puede dividir un numero entre cero!!!" << std::endl;
    } else {
        std::cout << "Su division es: " << numero1 / numero2 << std::endl;
        std::cout << "Su modulo es: " << numero1 % numero2 << std::endl;
    }

    return 0;
}
