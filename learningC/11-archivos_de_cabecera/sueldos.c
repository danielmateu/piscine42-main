#include "empleados.h"
#include <stdio.h>



void pagar_sueldo(EMpleado* e)
{
    int sueldo = 20000;
    printf("Pagando %d a %s\n", sueldo, e->nombre, e->apellido);
}