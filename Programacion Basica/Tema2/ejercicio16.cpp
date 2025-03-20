// 16.Crea un programa que pida al usuario una distancia en metros y muestre su
//equivalente en millas, yardas, pies y pulgadas (Sistema Imperial).

#include <iostream>

int main() {
    
    float millas = 0.000621371;
    float yardas = 1.09361;
    float pies = 3.28084;
    float pulgadas = 39.3701;
    int entradaUsuario;
    
    std::cout << "Introduce un valor en metros " << std::endl;
    std::cin >> entradaUsuario;
    
    std::cout << "El valor en millas es: " << millas * entradaUsuario << std::endl;
    std::cout << "El valor en yardas es: " << yardas * entradaUsuario << std::endl;
    std::cout << "El valor en pies es: " << pies * entradaUsuario << std::endl;
    std::cout << "El valor en pulgadas es:" << pulgadas * entradaUsuario << std::endl;
    
}