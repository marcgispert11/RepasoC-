// 17. Crea un programa donde el usuario ingresa una cantidad económica, unas tasas de interés y unos meses. El programa debe de mostrar los intereses y
//el total con los intereses

#include <iostream>

int main(){
    
    float cantidadEconomica;
    int meses;
    float interes;
    float interesTotal = 0;
    
    std::cout << "Ingresa una cantidad economica" << std::endl;
    std::cin >> cantidadEconomica;
    
    std::cout << "Ingresa el tiempo (en meses)" << std::endl;
    std::cin >> meses;
    
    std::cout << "Ingresa el interes" << std::endl;
    std::cin >> interes;
    
    interesTotal = interes / 100 * cantidadEconomica;
    
    std::cout << "Interes segun la cantidad economica entrada: " << interesTotal << std::endl;
    std::cout << "La canidad total es: " << interesTotal + cantidadEconomica << std::endl;
    
}