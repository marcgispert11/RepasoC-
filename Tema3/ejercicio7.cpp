// 7. Crea un programa que pida al usuario un número del 1 al 12 e imprima la
//cantidad de días que tiene ese mes.


#include <iostream>

int main() {
    int numeroUsuario = 0;

    std::cout << "Introduce un numero del 1 al 12" << std::endl;
    std::cin >> numeroUsuario;

    if(numeroUsuario > 12){
        std::cout << "El numero que has introducido no es del 1 al 12" << std::endl;
    }
    
    else{
       switch (numeroUsuario)
       {
       case 1:
        std::cout << "El mes que has introducido es ENERO y tiene 31 dias" << std::endl;
        break;
        
        case 2:
        std::cout << "El mes que has introducido es FEBRERO y tiene 28 dias" << std::endl;
        break;

        case 3:
        std::cout << "El mes que has introducido es MARZO y tiene 31 dias" << std::endl;
        break;

        case 4:
        std::cout << "El mes que has introducido es ABRIL y tiene 30 dias" << std::endl;
        break;

        case 5:
        std::cout << "El mes que has introducido es MAYO y tiene 31 dias" << std::endl;
        break;

        case 6:
        std::cout << "El mes que has introducido es JUNIO y tiene 30 dias" << std::endl;
        break;

        case 7:
        std::cout << "El mes que has introducido es JULIO y tiene 31 dias" << std::endl;
        break;

        case 8:
        std::cout << "El mes que has introducido es AGOSTO y tiene 31 dias" << std::endl;
        break;

        case 9:
        std::cout << "El mes que has introducido es SEPTIEMBRE y tiene 30 dias" << std::endl;
        break;

        case 10:
        std::cout << "El mes que has introducido es OCTUBRE y tiene 31 dis" << std::endl;
        break;

        case 11:
        std::cout << "El mes que has introducido es NOVIEMBRE y tiene 30 dias" << std::endl;
        break;

        case 12:
        std::cout << "El mes que has introducido es DICIEMBRE y tiene 31 dias" << std::endl;
        break;
       
       default:
        break;
       }
    }
}
