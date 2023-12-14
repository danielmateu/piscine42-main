// Uniones en C

// Las uniones son un tipo de dato que permite almacenar diferentes tipos de datos en una misma variable.

// Las uniones son similares a las estructuras, pero con una diferencia fundamental: mientras que en las estructuras cada campo tiene su propia dirección de memoria, en las uniones todos los campos comparten la misma dirección de memoria.

// Esto significa que, si modificamos el valor de un campo, el valor de los demás campos también cambiará.

// Las uniones se definen de la siguiente forma:

#include <stdio.h>

union mi_union_t
{
    int entero;
    float flotante;
};

int main()
{
    union mi_union_t u;
    u.entero = 123456789;
    u.flotante = 2.5;
    printf("Entero = %d\n", u.entero);
    return 0;
}