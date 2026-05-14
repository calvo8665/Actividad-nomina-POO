#ifndef DESARROLLADORSENIOR_H
#define DESARROLLADORSENIOR_H

#include "Empleado.h"

class DesarrolladorSenior : public Empleado {

public:
    DesarrolladorSenior(std::string nombre, float salarioBase);

    float calcularSalario() override;

    void mostrarInformacion() override;
};

#endif
