// 1. Crea un programa que determine si un número introducido por el usuario es
// par o impar.


#include <iostream>

int main() {
    
    int numero;
    
    std::cout << "Introduce un numero" <<  std::endl;
    std::cin >> numero;
    
    if(numero % 2 == 0){
        std::cout << "El numero es par" << std::endl;
    }
    else{
        std::cout << "El numero NO es par" << std::endl;
    }
    
}
