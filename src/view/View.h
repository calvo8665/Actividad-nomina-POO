#ifndef VIEW_H
#define VIEW_H

#include "../Model/Programa.h"

class View {

private:
    Programa programa;

public:
    View();

    void iniciar();

    int mostrarMenu();
};

#endif
