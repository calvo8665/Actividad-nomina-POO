#ifndef LIDERTECNICO_H
#define LIDERTECNICO_H

#include "Empleado.h"

class LiderTecnico : public Empleado {

public:
    LiderTecnico(std::string nombre, float salarioBase);

    float calcularSalario() override;

    void mostrarInformacion() override;
};

#endif
