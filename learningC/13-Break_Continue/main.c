#include <stdio.h>

// continue: salta a la siguiente iteración sin ejecutar el código que sigue
// break: sale del ciclo

int main()
{
    int valores[] = {5, 14, 20, 6, 7, 8, 9, 10, 11, 12};
    for (int i = 0; i < 10; i++)
    {
        // Imprimir valores pares
        if (valores[i] % 2 != 0)
            continue;

        if (valores[i] % 3 != 0)
            continue;
        printf("Valor: %d\n", valores[i]);
    }

    int valor;
    while (1)
    {
        scanf("%d", &valor);
        if (valor == 0)
            break;
        printf("Has insertado : %d\n", valor);
    }
}