// bucles en C

#include <stdio.h>
#include <unistd.h>

int main()
{
    // bucle while. Evaluamos la condicion. Si es verdadera, ejecutamos el codigo
    // dentro del bucle. Si es falsa, salimos del bucle.
    int i = 0;
    while (i < 10)
    {
        printf("i = %d\n", i);
        i++;
    }

    // bucle do-while. Ejecutamos el codigo dentro del bucle. Evaluamos la condicion.
    // Si es verdadera, volvemos a ejecutar el codigo dentro del bucle. Si es falsa,
    // salimos del bucle.
    int j = 0;
    char buffer[10];
    do
    {
        sprintf(buffer, "%d", j);                     // Convertir j a cadena
        write(1, buffer, strlen(buffer)); // Imprimir j
        write(1, "\n", 1);                // Imprimir nueva línea
        j++;
    } while (j < 10);

    // bucle for. Inicializamos la variable de control. Evaluamos la condicion. Si es
    // verdadera, ejecutamos el codigo dentro del bucle. Actualizamos la variable de
    // control. Volvemos a evaluar la condicion. Si es verdadera, ejecutamos el codigo
    // dentro del bucle. Actualizamos la variable de control. Si es falsa, salimos del
    // bucle.

    for (int k = 0; k < 10; k++)
    {
        printf("k = %d\n", k);
    }

    return 0;
}