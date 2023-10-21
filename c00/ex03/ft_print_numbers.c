/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>                  +#+  +:+       +#+*/
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 00:08:04 by damateu-              #+#    #+#             */
/*   Updated: 2023/10/20 00:08:04 by damateu-             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    Escribe una funcion que muestre en una sola linea y en orden creciente todos los dígitos
*/

#include <unistd.h>

void	ft_print_numbers(void)
{
    char	current_digit;

    current_digit = '0';
    while (current_digit <= '9')
    {
        write(1, &current_digit, 1);
        current_digit++;
    }

}

// int	main(void)
// {
//     ft_print_numbers();
//     return (0);
// }