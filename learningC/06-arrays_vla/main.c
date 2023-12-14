// Arrays en C

// Los arrays son una estructura de datos que nos permiten almacenar varios datos del mismo tipo en una misma variable.

// Los identificadores de los arrays son punteros, es decir, son direcciones de memoria.

// Los arrays se declaran de la siguiente forma:

// tipo nombre_array[tamaño];

// Ejemplo:

// int numeros[10];

#include <stdio.h>

int main()
{
    // int edades[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Array de 10 elementos
    int tam;
    printf("Introduce el tamaño del array: ");
    scanf("%d", &tam);
    int i, edades[tam];
    for (i = 0; i < tam; i++)
    {
        printf("Introduce la edad de la persona %d: ", i + 1);
        scanf("%d", &edades[i]);
    }
    for (i = 0; i < tam; i++)
    {
        printf("La edad de la persona %d es %d\n", i + 1, edades[i]);
    }

    return 0;
}