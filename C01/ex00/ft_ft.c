/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:55:39 by damateu-          #+#    #+#             */
/*   Updated: 2023/11/03 14:10:05 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Escribe una funcion que reciba como parámetro un puntero a int, y ponga el valor de este int a 42.

#include <unistd.h>
#include <stdio.h>

void ft_ft(int *nbr)
{
    *nbr = 42;
    printf("%d", *nbr);
}

int main(void)
{
    int a;
    int *nbr;

    a = 0;
    nbr = &a;
    ft_ft(nbr);
    return (0);
}
