/*
    Escribe un programa que tome una cadena de caracteres y muestre el primer caracter de la cadena que sea una h seguido de un salto de linea. Si no hay ninguna h, el programa debe mostrar una h seguido de un salto de linea.
    Si el numero de parametros es diferente de 1, el programa debe mostrar h seguido de un salto de linea.
*/

#include <unistd.h>

char ft_first(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == 'h')
        {
            write(1, &str[i], 1);
            break;
        }
        i++;
    }
    write(1, "\n", 1);
    return (0);
}

int main()
{
    char *str = "Hello World how are you?";
    ft_first(str);
    return (0);
}
