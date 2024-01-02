/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 14:21:54 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/02 16:07:39 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Create a function that displays the alphabet in lowercase, on a single line, by
// ascending order, starting from the letter ’a’.

// Allowed functions : ft_putchar

// Here’s how it should be prototyped : 
// void ft_print_alphabet(void);

/* #include <unistd.h> */

/* int ft_putchar(char c)
{
    write(1, &c, 1);
    return (0);
} */
void    ft_putchar(char c);

void ft_print_alphabet(void)
{
    char c;

    c = 'a';
    while(c <= 'z')
    {
        ft_putchar(c);
        c++;
    }
}

/* int main(void)
{
    ft_print_alphabet();
    return (0);
}  */

