#include <iostream>
#include "View.h"

View::View() {

    programa.inicializarDatos();
}

int View::mostrarMenu() {

    int opcion;

    std::cout << std::endl;
    std::cout << "===== MENU ====="
              << std::endl;

    std::cout << "1. Procesar nomina"
              << std::endl;

    std::cout << "2. Mostrar total nomina"
              << std::endl;

    std::cout << "0. Salir"
              << std::endl;

    std::cout << "Seleccione una opcion: ";

    std::cin >> opcion;

    return opcion;
}

void View::iniciar() {

    int opcion;

    do {

        opcion = mostrarMenu();

        switch(opcion) {

            case 1:

                programa.procesarNomina();
                break;

            case 2:

                std::cout << std::endl;

                std::cout << "Total nomina: "
                          << programa.calcularTotalNomina()
                          << std::endl;

                break;

            case 0:

                std::cout << "Saliendo..."
                          << std::endl;

                break;

            default:

                std::cout << "Opcion invalida"
                          << std::endl;
        }

    } while(opcion != 0);
}
