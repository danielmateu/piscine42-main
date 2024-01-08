// Enumeradores en C

// Los enumeradores son un tipo de dato que permite definir un conjunto de constantes enteras con nombre.

// Los enumeradores se definen de la siguiente forma:

#include <stdio.h>

enum diasemana
{
    LUNES,
    MARTES,
    MIERCOLES,
    JUEVES,
    VIERNES,
    SABADO,
    DOMINGO
};

int main()
{
    // int mes = 6; // Junio
    // int dia = 1; // Lunes
    enum diasemana dia;
    dia = MARTES;
    printf("Dia %d\n", dia);
    return 0;
}