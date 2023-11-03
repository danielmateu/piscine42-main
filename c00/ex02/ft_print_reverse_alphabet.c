/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:30:06 by user              #+#    #+#             */
/*   Updated: 2023/11/03 13:57:52 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Escribe una función que muestre el alfabeto en minúsculas en una sola línea, en
// orden decreciente, empezando en la letra “z”

void    ft_print_reverse_alphabet(void)
{
        char    c;
        c = 'z';

        while (c >= 'a')
        {
                write(1, &c, 1);
                c--;
        }
}

int main(void)
{
        ft_print_reverse_alphabet();
        return (0);
}

