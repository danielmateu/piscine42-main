/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 23:10:35 by user              #+#    #+#             */
/*   Updated: 2023/10/21 23:25:11 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Escribe una funcion que muestre tdas las combinaciones posibles de dos números entre 00 y 99, en orden creciente, separados por una coma

#include <unistd.h>

void write_result (char a, char b, char c, char d)
{
    write(1, &a, 1);
    write(1, &b, 1);
    write(1, " ", 1);
    write(1, &c, 1);
    write(1, &d, 1);
    if (!(a == '9' && b == '8' && c == '9' && d == '9'))
        write(1, ", ", 2);
}

void last_condition (char a, char b, char c, char d)
{
    if (a < c || (a == c && b < d))
        write_result(a, b, c, d);
}

void while_conditions (char a, char b, char c, char d)
{
    a = '0' - 1;
    while (++a <= '9')
    {
        b = '0' - 1;
        while (++b <= '9')
        {
            c = '0' - 1;
            while (++c <= '9')
            {
                d = '0' - 1;
                while (++d <= '9')
                {
                    last_condition(a, b, c, d);
                }
            }
        }
    }
}

void	ft_print_comb2(void)
{
    char	a;
    char	b;
    char	c;
    char	d;

    while_conditions(a, b, c, d);
}

// int	main(void)

// {
//     ft_print_comb2();
//     return (0);

// }