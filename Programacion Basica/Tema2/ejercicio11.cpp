// 11. Crea un programa que haga la conversación de € a ¥, $ y £ usando valores actuales.

#include <iostream>

int main() {
    
    // Equivalencias del euro con ¥, £ y $
    
    float libras = 0.84;
    float yenes = 162;
    float dolares = 1.09;
    float dineroUsuario = 0; // (En euros)
    
    std::cout << "Introduce el valor de dinero en euros" << std::endl;
    std::cin >> dineroUsuario;
    
    std::cout << "Equivalencia en libras: " << libras * dineroUsuario << std::endl;
    std::cout << "Equivalencia en yenes: " << yenes * dineroUsuario << std::endl;
    std::cout << "Equivalencia en dolares: " << dolares * dineroUsuario << std::endl;
}