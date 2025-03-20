// 3. Pregunta por pantalla el nombre del usuario y luego le saludas mencionando su nombre

#include <iostream>
#include <string>

int main() {
	
	std::string nombreUsuario;

	std::cout << "¿Cual es tu nombre?" << std::endl;
	std::cin >> nombreUsuario;

	std::cout << "Buenos dias " << nombreUsuario << std::endl;

	return 0;

}