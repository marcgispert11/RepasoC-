// 8. Crea un programa que pida al usuario un numero de 6 cifras y muestre en orden
// que numero equivale a las unidades, decenas...

#include <iostream>

int main() {
    
    int numero;
    std::cout << "Introduce un numero de 6 cifras" << std::endl;
    std::cin >> numero;
    if (numero < 99999 || numero > 999999) {
        std::cout << "El numero que has introducido no tiene 6 cifras" << std::endl;
    }
    else {
        
     
        std::cout << "Centenas de millar: " << (numero / 100000) % 10 << std::endl;
        std::cout << "Decenas de millar: " << (numero / 10000) % 10 << std::endl;
        std::cout << "Millar: " << (numero / 1000) % 10 << std::endl;
        std::cout << "Centenas " << (numero / 100) % 10 << std::endl;
        std::cout << "Decenas: " << (numero / 10) % 10 << std::endl;
        std::cout << "Unidades: " << (numero / 1) % 10 << std::endl;
    }

}
