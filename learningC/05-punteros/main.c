// punteros -> variables que almacenan direcciones de memoria de otras variables
// Los punteros se declaran con el operador * (asterisco)

// Los punteros se usan para:
// 1. Pasar argumentos por referencia
// 2. Reservar memoria dinamicamente
// 3. Construir estructuras de datos avanzadas

#include <stdio.h>

void jugar(int* n)
{
    // n = (n + 3) * 2 + 1;
    // printf("El valor de n en la funcion es: %d\n", n);
    int y = *n;
    y = (y + 3) * 2 + 1;
    printf("El valor de y en la funcion es: %d\n", y);

}

int main()
{
    int x;
    x = 10;
    // Obterner la direccion de memoria de la variable x
    &x;
    // Para guardar la direccion de memoria de una variable se usa el operador *
    int *dirX = &x;

    jugar(&x);
    printf("Valor de x = %d\n", x);
    // printf("Direccion de memória = %p\n", &x);
    printf("Valor de direccion de memoria = %p\n", dirX);

}