//14. Crea un programa que pida 3 números al usuario y muestre el valor
// promedio de ellos.

#include <iostream>

int main() {
    
    int numero1 = 0;
    int numero2 = 0;
    int numero3 = 0;
    
    std::cout << "Introduce el primer numero" << std::endl;
    std::cin >> numero1;
    
    std::cout << "Introduce el segundo numero" << std::endl;
    std::cin >> numero2;
    
    std::cout << "Introduce el tercer numero" << std::endl;
    std::cin >> numero3;
    
    std::cout << "El promedio de los 3 numeros es: " << (numero1 + numero2 + numero3) / 3 << std::endl;
    
    
}