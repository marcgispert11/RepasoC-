// 10.Crea un programa que pida el radio de un círculo al usuario y con ello calcule su area 
// y perimetro.

#include <iostream>

int main() {
    
    float radioCirculo;
    float areaCirculo = 0;
    std::cout << "Introduce el radio del circulo" << std::endl;
    std::cin >> radioCirculo;
    

    std::cout << "El area del circulo es: " << 3.1416 * radioCirculo * radioCirculo << std::endl;
    std::cout << "El perimetro del circulo es: " << 2 * 3.1416 * radioCirculo << std::endl;
}
