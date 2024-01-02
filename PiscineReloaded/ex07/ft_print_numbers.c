/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 14:57:33 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/02 16:27:10 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Create a function that displays all digits, on a single line, by ascending order.

// Here’s how it should be prototyped :
// void ft_print_numbers(void);

/* #include <unistd.h>

int ft_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}  */

void    ft_putchar(char c);

void ft_print_numbers(void)
{
    char c;

    c = '0';
    while(c <= '9')
    {
        ft_putchar(c);
        c++;
    }
}

int main(void)
{
    ft_print_numbers();
    return (0);
} 


