/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:21:45 by damateu-          #+#    #+#             */
/*   Updated: 2023/11/02 15:26:55 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    Escribe una funcion que convierta el principio del string apuntado por str en un entero de tipo int.

    str puede empezar con un n'umero arbitrario de espacios.

    str puede ir seguido de un numero arbitrario de signos + y -. El signo - hara cambiar el signo del enero devuelto en funcion del numero de signos - y si este es par o impar. Si hay un numero impar de signos -, la funcion devolvera un numero negativo. Si hay un numero par de signos -, la funcion devolvera un numero positivo.

    str puede ir seguido de cualquier cantidad de numeros de digitos en base 10

    La funcion tendra que leer los caracteres de str, siempre que estos cumplan con las reglas anteriores y tendra que devolver el numero encontrado hasta entonces

    No se tendran en cuenta los desbordamientos, en estos casos el resultado se considerara indefinido

    ejemplo: ./a.out " ---+--+1234ab567" devolvera -1234
*/

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
