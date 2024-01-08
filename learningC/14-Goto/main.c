// Goto statement in C

// Goto es una sentencia que permite saltar a una parte especifica del programa. Se suele usar para salir de un bucle anidado o para saltar a una parte especifica del programa en caso de error.

// El goto es bidireccional, es decir, se puede saltar hacia adelante o hacia atrás.

// Sintaxis:

// goto etiqueta;
// etiqueta:
//     // Código

#include <stdio.h>

int main()
{
    int i, j = 0;

    while (j < 500)
    {
        for (int i = 1; i < 10; i++)
        {
            /* code */
            j = j + i;
            printf("i = %d, j = %d\n", i, j);

            if (j > 100)
            {
                goto zona_interesante;
            }
        }
    }
zona_interesante:
    printf("Estoy en la zona interesante\n");
    printf("Fin del programa el valor de j es %d\n", j);
}