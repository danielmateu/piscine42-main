// Memoria dinámica en C

// La memoria dinámica es un tipo de memoria que se reserva en tiempo de ejecución. En C, la memoria dinámica se reserva con las funciones malloc, calloc y realloc, y se libera con la función free.

// La función malloc

// La función malloc permite reservar un bloque de memoria de un tamaño determinado. La función malloc recibe como parámetro el tamaño del bloque de memoria a reservar, y devuelve un puntero al inicio del bloque de memoria reservado.

// La función malloc se declara en la cabecera stdlib.h:

// void *malloc(size_t size);

// La función malloc recibe como parámetro el tamaño del bloque de memoria a reservar, y devuelve un puntero al inicio del bloque de memoria reservado. Si la función malloc no puede reservar el bloque de memoria solicitado, devuelve NULL.

// Ejemplo de uso de la función malloc:

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *puntero;
    puntero = malloc(sizeof(int));
    *puntero = 5;
    printf("Numero: %d", *puntero);
    free(puntero);
    return 0;
}