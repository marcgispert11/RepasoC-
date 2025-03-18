// Crea un programa que determine si un número introducido por el usuario es
//positivo, negativo o cero.

#include <iostream>

int main() {
    
    int numero = 0;
    
    std::cout << "Introduce un numero" << std::endl;
    std::cin >> numero;
    
    if(numero > 0){
        std::cout << "El numero es positivo" << std::endl;
    }
    else if(numero == 0){
        std::cout << "El numero que has introducido es 0" << std::endl;
    }
    else{
        std::cout << "El numero es negativo" << std::endl;
    }
}