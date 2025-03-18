// 5. Genera un programa que obtenga el siguiente resultado (incluyendo el aspecto visual)

#include <iostream>
#include <string>

int main() {

	std::string nombreUsuario;
	std::string calle;
	int edad;
	int numeroCalle;

	std::cout << "Dime tu nombre" << std::endl;
	std::cin >> nombreUsuario;

	std::cout << "Dime tu edad" << std::endl;
	std::cin >> edad;

	std::cout << "Dime tu calle" << std::endl;
	std::cin >> calle;

	std::cout << "Dime el numero de calle" << std::endl;
	std::cin >> numeroCalle;


	std::cout << "===============" << std::endl;
	std::cout << "   Sus Datos   " << std::endl;
	std::cout << "===============" << std::endl;

	std::cout << "Su nombre es: " << nombreUsuario << std::endl;
	std::cout << "Su edad es: " << edad << std::endl;
	std::cout << "Usted vive en: " << calle << " " << numeroCalle << std::endl;



}