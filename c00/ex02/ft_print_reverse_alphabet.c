/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:30:06 by user              #+#    #+#             */
/*   Updated: 2023/10/23 09:37:42 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
    char c;
    int i;

    c = 'z';
    i = 0;
    while (i < 26)
    {
        write(1, &c, 1);
        c--;
        i++;
    }
}

// int main(void)
// {
//     ft_print_reverse_alphabet();
//     return (0);
// }