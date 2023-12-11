/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:42:55 by user              #+#    #+#             */
/*   Updated: 2023/12/11 14:55:47 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    Escribe una funcion que muesre el número que se ha usado como parámetro. La funcion deberá ser capaz de mostrar todos los valores posibles en una variable tipo int.
*/

#include <unistd.h>

void ft_putnbr(int nb)
{
    int div;
    int mod;
    int c = 48;

    if (nb < 0)
    {
        write(1, "-", 1);
        nb *= -1;
    }
    if (nb < 10)
    {
        mod = nb + c;
        write(1, &mod, 1);
    }
    else
    {
        div = nb / 10;
        mod = nb % 10 + c;
        ft_putnbr(div);
        write(1, &mod, 1);
    }
}

int main(void)
{
    ft_putnbr(42);
    return (0);
}