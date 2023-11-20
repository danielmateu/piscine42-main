/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:23:45 by user              #+#    #+#             */
/*   Updated: 2023/11/03 13:55:46 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Escribe una función que muestre el alfabeto en minúsculas en una sola línea, en
// orden creciente, empezando en la letra “a”.

void ft_print_alphabet(void)
{
        char c;

        c = 'a';

        while (c < 'z')
        {
                write(1, &c, 1);
                c++;
        }
}

int main(void)
{
        ft_print_alphabet();
        return (0);
}