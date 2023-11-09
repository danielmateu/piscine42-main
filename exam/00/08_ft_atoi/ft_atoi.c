// Write a function that converts the string argument str to an integer (type int) and returns it. It works like the standar atoi(const char *str) function.

#include <unistd.h>

int ft_atoi(char *str)
{
    int i;
    int sign;
    int res;

    i = 0;
    sign = 1;
    res = 0;
    /* The `while` loop is checking if the current character `str[i]` is a whitespace character (`' '`,
    `'\t'`, `'\n'`, `'\v'`, `'\r'`, `'\f'`). If it is, the loop continues to the next character in
    the string. This loop is used to skip any leading whitespace characters in the string. */
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\r' || str[i] == '\f')
        i++;
    while (str[i] == '+' || str[i] == '-')
    {
        /* Este bloque de código está comprobando si el carácter actual str[i] es un signo menos ('-'). Si lo es, multiplica la variable sign por -1 para cambiar el signo del resultado. Después de eso, incrementa el valor de i para pasar al siguiente carácter en la cadena. */
        if (str[i] == '-')
            sign *= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        /* 
            Convertimos el carácter str[i] a su valor entero correspondiente y añadiéndolo al resultado.
         */
        res = res * 10 + (str[i] - '0');
        i++;
    }
    /* 
        La línea return (res * sign); está devolviendo el resultado final de la función ft_atoi. Multiplica el resultado res por el signo sign para tener en cuenta cualquier signo menos encontrado en la cadena. Si el número de signos menos es impar, el signo será negativo, y si el número de signos menos es par, el signo será positivo.
     */
    return (res * sign);
}