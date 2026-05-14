#include "Empleado.h"

Empleado::Empleado(std::string nombre, float salarioBase) {

    this->nombre = nombre;
    this->salarioBase = salarioBase;
}

Empleado::~Empleado() {
}

std::string Empleado::getNombre() {

    return nombre;
}

float Empleado::getSalarioFinal() {

    return salarioFinal;
}
