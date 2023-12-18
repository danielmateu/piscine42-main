#include <stdio.h>
#include <string.h>

#include "empleados.h"

void print_empleado(Empleado *empl)
{
    char *cargo;

    printf("Nombre: %s\n", empl->nombre);
    printf("Apellido: %s\n", empl->apellido);
    printf("ID: %s\n", empl->id);
    printf("Cargo: %d\n", empl->cargo);

    switch (empl->cargo)
    {
    case PROGRAMADOR:
        cargo = "Programador";
        break;
    case ANALISTA:
        cargo = "Analista";
        break;
    case GERENTE:
        cargo = "Gerente";
        break;
    default:
        cargo = "No especificado";
        break;
    }

    printf("Cargo: %s\n", cargo);
}