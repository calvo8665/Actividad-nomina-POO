cmake_minimum_required(VERSION 3.26)
project(ProyectoNomina)

set(CMAKE_CXX_STANDARD 17)

add_executable(ProyectoNomina

        Main.cpp

        Model/Empleado.cpp
        Model/DesarrolladorJunior.cpp
        Model/DesarrolladorSenior.cpp
        Model/LiderTecnico.cpp
        Model/Tester.cpp
        Model/Programa.cpp

        View/View.cpp
)
