// 7. Crea un programa que pida un número al usuario y muestra su valor negado
// (Si introduce 1 debe mostrar -1 y si introduce -1 debe mostrar 1).

#include <iostream>

int main () {
    
    int numero;
    std::cout << "Introduce un numero..." << std::endl;
    std::cin >> numero;
    
    std::cout << "El numero negado es: " << -numero << std::endl;
}