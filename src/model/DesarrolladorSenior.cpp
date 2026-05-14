#include <iostream>
#include "DesarrolladorSenior.h"

DesarrolladorSenior::DesarrolladorSenior(
        std::string nombre,
        float salarioBase)

: Empleado(nombre, salarioBase) {
}

float DesarrolladorSenior::calcularSalario() {

    salarioFinal = salarioBase + (salarioBase * 0.20);

    return salarioFinal;
}

void DesarrolladorSenior::mostrarInformacion() {

    std::cout << "Empleado: "
              << nombre << std::endl;

    std::cout << "Cargo: Desarrollador Senior"
              << std::endl;

    std::cout << "Salario final: "
              << calcularSalario()
              << std::endl;

    std::cout << std::endl;
}
