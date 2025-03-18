// 13.Crea un programa que pida una cantidad en gramos y muestre de resultado
// su equivalencia en kilogramos y miligramos.

#include <iostream>

int main() {
    
    float peso = 0;
    std::cout << "Introduce un peso en gramos" << std::endl;
    std::cin >> peso;
    
    std::cout << "Equivalencia en kilogramos: " << peso / 1000 << std::endl;
    std::cout << "Equivalencia en miligramos: " << peso * 1000 << std::endl;
    
}