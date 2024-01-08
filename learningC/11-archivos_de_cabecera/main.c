
#include <stdio.h>
#include <string.h>

#include "empleados.h"
// #include "sueldo.h"

int main()
{
    Empleado e;
    strncpy(e.nombre, "Dani", 30);
    strncpy(e.apellido, "Mateu", 40);
    strncpy(e.id, "66656", 9);
    e.cargo = PROGRAMADOR;
    print_empleado(&e);
    // pagar_sueldo(&e);
    return 0;
}