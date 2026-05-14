#include <iostream>
#include "DesarrolladorJunior.h"

DesarrolladorJunior::DesarrolladorJunior(
        std::string nombre,
        float salarioBase)

: Empleado(nombre, salarioBase) {
}

float DesarrolladorJunior::calcularSalario() {

    salarioFinal = salarioBase;

    return salarioFinal;
}

void DesarrolladorJunior::mostrarInformacion() {

    std::cout << "Empleado: "
              << nombre << std::endl;

    std::cout << "Cargo: Desarrollador Junior"
              << std::endl;

    std::cout << "Salario final: "
              << calcularSalario()
              << std::endl;

    std::cout << std::endl;
}
