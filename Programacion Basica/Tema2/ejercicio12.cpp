// 12. 12. Crea un programa que al pedir un número muestre su tabla de multiplicar
// entera del 1 al 10.

#include <iostream>

int main() {
    
    int numero;
    std::cout << "Introduce un numero" << std::endl;
    std::cin >> numero;
    
    std::cout << "====================" << std::endl;
    std::cout << "TABLA DE MULTIPLICAR" << std::endl;
    std::cout << "====================" << std::endl;
    
    std::cout << "1. " << numero * 1 << std::endl;
    std::cout << "2. " << numero * 2 << std::endl;
    std::cout << "3. " << numero * 3 << std::endl;
    std::cout << "4. " << numero * 4 << std::endl;
    std::cout << "5. " << numero * 5 << std::endl;
    std::cout << "6. " << numero * 6 << std::endl;
    std::cout << "7. " << numero * 7 << std::endl;
    std::cout << "8. " << numero * 8 << std::endl;
    std::cout << "9. " << numero * 9 << std::endl;
    std::cout << "10. " << numero * 10 << std::endl;
}
