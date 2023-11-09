/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:21:40 by damateu-          #+#    #+#             */
/*   Updated: 2023/11/09 11:29:55 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    Escribe una funcion que devuelva el numero primo inmediatamente superior o igual al numero usado como parametro
*/

int ft_is_prime(int nb)
{
    int i;

    i = 2;
    if (nb <= 1)
        return (0);
    while (i < nb)
    {
        if (nb % i == 0)
            return (0);
        i++;
    }
    return (1);
}

int ft_find_next_prime(int nb)
{
    while (ft_is_prime(nb) == 0)
        nb++;
    return (nb);
}

//main

#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("%d\n", ft_find_next_prime(4));
    return 0;
}