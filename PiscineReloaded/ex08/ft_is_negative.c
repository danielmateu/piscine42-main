/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 15:39:04 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/02 16:30:55 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Create a function that displays 'N' or 'P' depending on the integers sign entered as a parameter. If n is negative, display 'N'. If n is positive or null, display 'P'.

// Here’s how it should be prototyped :
// void ft_is_negative(int n);

/* #include <unistd.h>

int ft_putchar(char c)
{
    //write(1, &c, 1);
    write(1, &c, 1);
    write(1, "\n", 1);
    return (0);
} */

void ft_putchar(char c);

void ft_is_negative(int n)
{
    if (n < 0)
    {
        ft_putchar('N');
    }
    else
    {
        ft_putchar('P');
    }
}

int main(void)
{
    ft_is_negative(0);
    ft_is_negative(-1);
    ft_is_negative(1);
    return (0);
}