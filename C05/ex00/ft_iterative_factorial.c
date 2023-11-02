/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:28:24 by damateu-          #+#    #+#             */
/*   Updated: 2023/11/02 17:30:19 by damateu-         ###   ########.fr       */
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
    if (nb < 0 || nb > 12)
        return (0);
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
    printf("%d\n", ft_iterative_factorial(5));
    return (0);
}