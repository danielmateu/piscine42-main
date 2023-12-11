/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:59:54 by user              #+#    #+#             */
/*   Updated: 2023/12/11 15:15:47 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Escribe una funcion que muestre todas las combinaciones de n digitos en orden creciente.
// n sera tal que : 0 < n < 10  
// Si n = 2, las combinaciones seran:
// 01 02 03 04 05 06 07 08 09 12 13 14 15 16 17 18 19 23 24 25 26 27 28 29 34 35 36 37 38 39 45 46 47 48 49 56 57 58 59 67 68 69 78 79 89

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void print_number(int *number, int n)
{
    int i = 0;
    while (i < n)
    {
        ft_putchar(number[i] + '0');
        i++;
    }
    if (number[0] != 10 - n)
    {
        ft_putchar(',');
        ft_putchar(' ');
    }
}

void ft_print_combn(int n)
{
    int number[n];
    int i = -1;
    while (++i < n)
        number[i] = i;
    while (number[0] <= (10 - n) && n > 0)
    {
        print_number(number, n);
        number[n - 1]++;
        i = n;
        while (i && n > 1)
        {
            i--;
            if (number[i] > 9)
            {
                number[i - 1]++;
                number[i] = number[i - 1] + 1;
            }
        }
    }
}

int main()
{
    ft_print_combn(2);
    return 0;
}