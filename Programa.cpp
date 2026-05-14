#include <iostream>

#include "Programa.h"
#include "DesarrolladorJunior.h"
#include "DesarrolladorSenior.h"
#include "LiderTecnico.h"
#include "Tester.h"

Programa::Programa() {
}

void Programa::inicializarDatos() {

    vectorEmpleados.push_back(
            new DesarrolladorJunior(
                    "Juan Perez",
                    2500000));

    vectorEmpleados.push_back(
            new DesarrolladorJunior(
                    "Laura Gomez",
                    2800000));

    vectorEmpleados.push_back(
            new DesarrolladorSenior(
                    "Carlos Ruiz",
                    4500000));

    vectorEmpleados.push_back(
            new DesarrolladorSenior(
                    "Ana Torres",
                    5000000));

    vectorEmpleados.push_back(
            new LiderTecnico(
                    "Miguel Castro",
                    6000000));

    vectorEmpleados.push_back(
            new LiderTecnico(
                    "Sofia Martinez",
                    7000000));

    vectorEmpleados.push_back(
            new Tester(
                    "Camila Diaz",
                    3000000));

    vectorEmpleados.push_back(
            new Tester(
                    "Andres Lopez",
                    3200000));
}

void Programa::procesarNomina() {

    std::cout << std::endl;
    std::cout << "===== NOMINA ====="
              << std::endl << std::endl;

    for(auto & empleado : vectorEmpleados) {

        empleado->mostrarInformacion();
    }
}

float Programa::calcularTotalNomina() {

    float total = 0;

    for(auto & empleado : vectorEmpleados) {

        total += empleado->calcularSalario();
    }

    return total;
}
