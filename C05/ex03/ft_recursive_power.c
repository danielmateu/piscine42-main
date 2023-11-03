/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:31:52 by damateu-          #+#    #+#             */
/*   Updated: 2023/11/03 12:54:32 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    Escribe una funcion recursiva que devuelva una potencia de un numero usado como parametro.

    Una potencia inferior a 0 devuelve 0.

    No hay que gestionar los “int overflow”, el retorno de la función será indefinido.

    Se ha decidido que 0 elevado a 0 es 1.
*/

int ft_recursive_power(int nb, int power)
{
    if (power < 0)
        return (0);
    if (power == 0)
        return (1);
    return (nb * ft_recursive_power(nb, power - 1));
}

#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("%d\n", ft_recursive_power(2, 4));
    return 0;
}

