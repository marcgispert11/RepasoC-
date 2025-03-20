// 9. Crea un programa que pida al usuario el lado de un cuadrado y con ello calcule su area

#include <iostream>

int main() {
    float ladoCuadrado;

    std::cout << "Introduce el tamaño del lado del cuadrado:" << std::endl;
    std::cin >> ladoCuadrado;

    std::cout << "El area del cuadrado es de: " << ladoCuadrado * ladoCuadrado; 
}
