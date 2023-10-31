/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:39:03 by damateu-          #+#    #+#             */
/*   Updated: 2023/10/31 16:50:16 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    Escribe una función que muestre un número pasado como parámetro. La función
deberá ser capaz de mostrar todos los valores posibles en una variable de tipo int.
*/

#include <unistd.h>

void    ft_putnbr(int nb)
{
    char c;

    if (nb == -2147483648)
    {
        write(1, "-", 1);
        ft_putnbr(nb / -10);
        c = '8';
    }
    else
    {
        if (nb < 0)
        {
            write(1, "-", 1);
            nb = -nb;
        }
        if (nb > 9)
            ft_putnbr(nb / 10);
        c = nb % 10 + '0';
    }
    write(1, &c, 1);
}

int main(void)
{
    ft_putnbr(42);
    return (0);
}