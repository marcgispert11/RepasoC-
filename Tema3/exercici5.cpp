// 5. Crea un programa que pida al usuario dos números pares y si ambos lo son
// sume, de lo contrario reste.

#include <iostream>

int main() {

    int numero1, numero2;
    
    std::cout << "Introduce el primer numero" << std::endl;
    std::cin >> numero1;

    std::cout << "Introduce el segundo numero" << std::endl;
    std::cin >> numero2;

    if ( numero1 % 2 == 0 && numero2 % 2 == 0){
        std::cout << "Los numeros son pares, su suma es: " << numero1 + numero2 << std::endl;
    }
    else{
        std::cout << "Los numeros son impares, su resta es: " << numero1 - numero2 << std::endl;
    }
}