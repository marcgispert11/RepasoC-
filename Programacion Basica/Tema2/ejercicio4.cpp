// 4. Pregúntale al usuario por su nombre, su edad y su comida favorita. A continuación muestra por pantalla los 3 datos en orden.

#include <string>
#include <iostream>

int main() {

	int edad;
	std::string nombreUsuario;
	std::string comidaFavorita;

	std::cout << "¿Cual es tu nombre?" << std::endl;
	std::cin >> nombreUsuario;

	std::cout << "¿Cuantos años tienes?" << std::endl;
	std::cin >> edad;

	std::cout << "¿Cual es tu comida favorita?" << std::endl;
	std::cin >> comidaFavorita;

	std::cout << "Nombre: " << nombreUsuario << std::endl;
	std::cout << "Edad: " << edad << std::endl;
	std::cout << "Comida Favorita: " << comidaFavorita << std::endl;

	return 0;

}