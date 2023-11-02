/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:21:45 by damateu-          #+#    #+#             */
/*   Updated: 2023/11/02 12:07:27 by damateu-         ###   ########.fr       */
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
        /* This code block is checking if the current character `str[i]` is a minus sign (`'-'`). If it
        is, it multiplies the `sign` variable by -1 to change the sign of the result. After that, it
        increments the value of `i` to move to the next character in the string. */
        if (str[i] == '-')
            sign *= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        /* The line `res = res * 10 + (str[i] - '0');` is converting the character `str[i]` to its
        corresponding integer value and adding it to the result. */
        res = res * 10 + (str[i] - '0');
        i++;
    }
    /* The line `return (res * sign);` is returning the final result of the `ft_atoi` function. It
    multiplies the result `res` by the sign `sign` to account for any minus signs encountered in the
    string. If the number of minus signs is odd, the sign will be negative, and if the number of
    minus signs is even, the sign will be positive. */
    return (res * sign);
}
