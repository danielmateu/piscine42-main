// El preprocessador es un programa que se ejecuta antes de compilar el codigo
// El preprocesador se encarga de buscar las directivas del preprocesador y ejecutarlas
// Las directivas del preprocesador son las que empiezan con #, como #include, #define, etc
// El preprocesador no es parte del compilador, es un programa aparte

#include <stdio.h>
// #include <stdio.h> // Incluye el archivo stdio.h Busca en los directorios del sistema operativo (en este caso linux) el archivo stdio.h y lo incluye en este archivo (main.c)

// #include "stdio.h" // Incluye el archivo stdio.h Busca en el directorio actual el archivo stdio.h y lo incluye en este archivo (main.c)

#define PI 3.1416
// #define PI 3.1416 // Define una constante llamada PI con el valor 3.1416

// #define -> Directiva del preprocesador que define una constante. Se usa para definir constantes que se usaran en el codigo y que no cambiaran durante la ejecucion del programa (constantes de compilacion). Tiene 2 parametros, el nombre de la constante y el valor de la constante

// #undef -> Directiva del preprocesador que elimina una constante definida con #define. Tiene 1 parametro, el nombre de la constante

int main(int arg, char **argv)
{
    printf("El valor de PI es: %f\n", PI);
    printf("Hola mundo\n");
    return 0;
}