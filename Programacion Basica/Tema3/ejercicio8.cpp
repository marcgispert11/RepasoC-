#include <iostream>
#include <cctype> 

int main() {
    int numeroDni;
    char letraDni;
    char letras[23] = {'T', 'R', 'W', 'A', 'G', 'M', 'Y', 'F', 'P', 'D', 'X', 'B', 'N', 'J',
                       'Z', 'S', 'Q', 'V', 'H', 'L', 'C', 'K', 'E'}; // Letras en orden paraa verificar dni

    std::cout << "Introduce tu número de DNI (sin letra): ";
    std::cin >> numeroDni;

    // Comprobar si el número de DNI tiene 8 dígitos
    if (numeroDni < 10000000 || numeroDni > 99999999) { 
        std::cout << "Has introducido un número erróneo." << std::endl;
    }

    std::cout << "Introduce la letra de tu DNI: ";
    std::cin >> letraDni;

    letraDni = toupper(letraDni);

    // Calculamos la letra correcta
    int numeroLetra = numeroDni % 23;
    char letraCorrecta = letras[numeroLetra];


    if (letraDni == letraCorrecta) {
        std::cout << "El DNI es correcto." << std::endl;
    } else {
        std::cout << "DNI incorrecto. La letra correcta es: " << letraCorrecta << std::endl;
    }

    return 0;
}
