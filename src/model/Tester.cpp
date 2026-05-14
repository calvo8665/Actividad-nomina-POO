#include <iostream>
#include "Tester.h"

Tester::Tester(
        std::string nombre,
        float salarioBase)

: Empleado(nombre, salarioBase) {
}

float Tester::calcularSalario() {

    salarioFinal = salarioBase + (salarioBase * 0.05);

    return salarioFinal;
}

void Tester::mostrarInformacion() {

    std::cout << "Empleado: "
              << nombre << std::endl;

    std::cout << "Cargo: Tester"
              << std::endl;

    std::cout << "Salario final: "
              << calcularSalario()
              << std::endl;

    std::cout << std::endl;
}
