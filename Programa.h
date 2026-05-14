#ifndef PROGRAMA_H
#define PROGRAMA_H

#include <vector>
#include "Empleado.h"

class Programa {

private:
    std::vector<Empleado*> vectorEmpleados;

public:
    Programa();

    void inicializarDatos();

    void procesarNomina();

    float calcularTotalNomina();
};

#endif
