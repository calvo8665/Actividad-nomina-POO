#include <iostream>
#include "LiderTecnico.h"

LiderTecnico::LiderTecnico(
        std::string nombre,
        float salarioBase)

: Empleado(nombre, salarioBase) {
}

float LiderTecnico::calcularSalario() {

    salarioFinal = salarioBase + (salarioBase * 0.25);

    return salarioFinal;
}

void LiderTecnico::mostrarInformacion() {

    std::cout << "Empleado: "
              << nombre << std::endl;

    std::cout << "Cargo: Lider Tecnico"
              << std::endl;

    std::cout << "Salario final: "
              << calcularSalario()
              << std::endl;

    std::cout << std::endl;
}
