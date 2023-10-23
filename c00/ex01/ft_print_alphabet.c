/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:23:45 by user              #+#    #+#             */
/*   Updated: 2023/10/23 09:37:22 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_alphabet(void)
{
    char c;
    int i;

    c = 'a';
    i = 0;
    while (i < 26)
    {
        write(1, &c, 1);
        c++;
        i++;
    }
}

// int main(void)
// {
//     ft_print_alphabet();
//     return (0);
// }