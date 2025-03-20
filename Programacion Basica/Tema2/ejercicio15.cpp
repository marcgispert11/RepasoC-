// 15.Crea un programa que al introducir una velocidad en km/h y un tiempo en
// horas nos indique que distancia habremos recorrido en m.

#include <iostream>

int main() {
    
    int velocidad = 0;
    int horas = 0;
    
    std::cout << "Introduce la velocidad en km por hora" << std::endl;
    std::cin >> velocidad;
    
    std::cout << "Introduce el tiempo en horas" << std::endl;
    std::cin >> horas;
    
    int metros = velocidad * 1000 * horas;
    std::cout << "Habras recorrido " << metros << " metros" << std::endl;

    
}