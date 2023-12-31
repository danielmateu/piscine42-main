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
    printf("Cuantos elementos quieres reservar?");
    int longitud;
    scanf("%d", &longitud);

    float *valores = (float *)malloc(longitud * sizeof(float));
    if (valores == NULL)
    {
        printf("No se ha podido reservar memoria\n");
        return -1;
    }
    int i;
    for (i = 0; i < longitud; i++)
    {
        valores[i] = 5.55E5;
    }
    printf("Todo correcto\n");
    free(valores);
    return 0;
}

// Cada vez que usemos la función malloc, debemos incluir la cabecera stdlib.h. y liberar la memoria reservada con la función free. La función free recibe como parámetro un puntero al inicio del bloque de memoria que queremos liberar. Si no liberamos la memoria reservada, se producirá una fuga de memoria. 

//Una fuga de memoria ocurre cuando reservamos memoria dinámica y no la liberamos, por lo que el programa va consumiendo memoria hasta que se queda sin memoria disponible.