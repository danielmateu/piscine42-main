/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:28:24 by damateu-          #+#    #+#             */
/*   Updated: 2023/11/03 09:37:50 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    Escribe una funcion iterativa que devuelva un numero. Este numero es el resultado de un factorial de un numero que se pasa como parametro.

    Si hay un error, la funcion debe devolver 0.

    No hay que gestionar el desbordamiento.
*/

int ft_iterative_factorial(int nb)
{
    int i;
    int res;

    i = 1;
    res = 1;
    /* comprobando si el número de entrada nb es menor que 0 o mayor que 12. Si alguna de estas condiciones es verdadera, significa que el factorial de nb no puede ser calculado con precisión porque resultaría en un desbordamiento o subdesbordamiento. En tales casos, la función devuelve 0 para indicar un error. */
    if (nb < 0 || nb > 12)
        return (0);
    /* El código while (i <= nb) es un bucle que itera desde i hasta nb. Dentro del bucle, multiplica el valor actual de res por i e incrementa i en 1. Esto se hace nb veces, calculando efectivamente el factorial de nb.*/
    while (i <= nb)
    {
        res *= i;
        i++;
    }
    return (res);
}

#include <stdio.h>

int main(void)
{
    printf("%d\n", ft_iterative_factorial(3));
    return (0);
}