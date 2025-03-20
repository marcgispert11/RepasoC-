// 6. Crea un programa que pedirá al usuario los 3 lados de un triángulo. El
//programa debe de categorizar este triángulo como equilátero, isósceles o
//escaleno.

#include <iostream>

int main() {

    float lado1, lado2, lado3;

    std::cout << "Introduce el primer lado del triangulo" << std::endl;
    std::cin >> lado1;

    std::cout << "Introduce el segundo lado del triangulo" << std::endl;
    std::cin >> lado2;

    std::cout << "Introduce el tercer lado del triangulo" << std::endl;
    std::cin >> lado3;

    if(lado1 == lado2 == lado3){
        std::cout << "El triangulo es equilatero" << std::endl;
    }else if(lado1 == lado2 != lado3 || lado1 != lado2 == lado3){
        std::cout << "El triangulo es equilatero" << std::endl;
    }else
    {
        std::cout << "El triangulo es isosceles" << std::endl;
    }
}
