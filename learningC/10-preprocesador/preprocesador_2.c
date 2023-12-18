// Macros con argumentos
// Una macro puede tener argumentos, como una función. La diferencia es que una macro se expande en el código fuente, mientras que una función se compila en el programa. Por lo tanto, las macros con argumentos pueden ser más rápidas que las funciones, pero también pueden ser más peligrosas, ya que no se comprueban los tipos de datos de los argumentos.

// Para definir una macro con argumentos, se utiliza la directiva #define, como en el siguiente ejemplo:

// #define area_rectangulo(ancho, alto) (ancho * alto)

#include <stdio.h>

#define AREA_RECTANGULO(x, y) (x * y)
#define LIMITE 40
#define PREMIUM
// int area_rectangulo(int ancho, int alto)
// {
//     return ancho * alto;
// }

// #error -> genera un error de compilación

int main()
{
    int ancho = 10;
    int alto = 5;

#ifdef PREMIUM
    printf("El usuario tiene cuenta premium\n");
#else
    printf("El usuario no tiene cuenta premium\n");
#endif
    // #if defined(PREMIUM)
    //     printf("El usuario tiene cuenta premium\n");
    // #else
    //     printf("El usuario no tiene cuenta premium\n");

    // #if LIMITE > 100
    //     printf("El limite es mayor a 100\n");
    // #elif LIMITE < 100
    //     printf("El limite es menor a 100\n");
    // #else
    //     printf("El limite es 100\n");
    // #endif

    printf("El area del rectangulo es: %d\n", AREA_RECTANGULO(ancho, alto));
    return 0;
}