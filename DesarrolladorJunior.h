#ifndef DESARROLLADORJUNIOR_H
#define DESARROLLADORJUNIOR_H

#include "Empleado.h"

class DesarrolladorJunior : public Empleado {

public:
    DesarrolladorJunior(std::string nombre, float salarioBase);

    float calcularSalario() override;

    void mostrarInformacion() override;
};

#endif
