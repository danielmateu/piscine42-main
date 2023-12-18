// El preprocessador es un programa que se ejecuta antes de compilar el codigo
// El preprocesador se encarga de buscar las directivas del preprocesador y ejecutarlas
// Las directivas del preprocesador son las que empiezan con #, como #include, #define, etc
// El preprocesador no es parte del compilador, es un programa aparte

// #include <stdio.h> // Incluye el archivo stdio.h Busca en los directorios del sistema operativo (en este caso linux) el archivo stdio.h y lo incluye en este archivo (main.c)

// #include "stdio.h" // Incluye el archivo stdio.h Busca en el directorio actual el archivo stdio.h y lo incluye en este archivo (main.c)

#include <stdio.h>

int main(int arg, char **argv)
{
    printf("Hola mundo\n");
    return 0;
}