/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:50:38 by damateu-          #+#    #+#             */
/*   Updated: 2023/11/09 14:56:04 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    Assignment name  : ft_print_numbers
Expected files   : ft_print_numbers.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a function that displays all digits in ascending order.

Your function must be declared as follows:

void	ft_print_numbers(void);
*/

#include <unistd.h>

void ft_print_numbers(void)
{
    char d;

    d = '0';
    while(d <= '9')
    {
        write(1, &d, 1);
        // write(1, "\n", 1);
        d++;
    }

}

int main(void)
{
    ft_print_numbers();
    return (0);
}