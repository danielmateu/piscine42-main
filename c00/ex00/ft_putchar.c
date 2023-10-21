/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:11:15 by damateu-          #+#    #+#             */
/*   Updated: 2023/10/21 22:49:53 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Escribe una función que muestre el carácter usado como parámetro.

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// int	main(void)
// {
//     ft_putchar('a');
//     return (0);
// }
