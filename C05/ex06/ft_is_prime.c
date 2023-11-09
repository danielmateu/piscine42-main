/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 13:39:00 by damateu-          #+#    #+#             */
/*   Updated: 2023/11/09 12:28:35 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    Escribe una funcion que devuelva 1 si el numero es primo y 0 si no lo es.
*/
/*Un número primo es un número natural mayor que 1 que no tiene otros divisores positivos aparte de 1 y él mismo.*/
int ft_is_prime(int nb)
{
    int i;

    i = 2;
    if (nb <= 1)
        return (0);
    while (i < nb)
    {
        /*
         Si nb es divisible por i (es decir, nb % i es igual a 0), la función devuelve inmediatamente 0, 
        */
        if (nb % i == 0)
            return (0);
        i++;
    }
    return (1);
}

//main

#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("%d\n", ft_is_prime(2));
    return 0;
}