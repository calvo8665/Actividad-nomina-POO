#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>

class Empleado {

protected:
    std::string nombre;
    float salarioBase;
    float salarioFinal;

public:
    Empleado(std::string nombre, float salarioBase);

    virtual ~Empleado();

    virtual float calcularSalario() = 0;

    virtual void mostrarInformacion() = 0;

    std::string getNombre();

    float getSalarioFinal();
};

#endif
