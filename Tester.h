#ifndef TESTER_H
#define TESTER_H

#include "Empleado.h"

class Tester : public Empleado {

public:
    Tester(std::string nombre, float salarioBase);

    float calcularSalario() override;

    void mostrarInformacion() override;
};

#endif
