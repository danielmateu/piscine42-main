/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 00:20:46 by user              #+#    #+#             */
/*   Updated: 2023/10/23 09:38:11 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
    char	negative;
    char	positive;

    negative = 'N';
    positive = 'P';
    if (n < 0)
    {
        write(1, &negative, 1);
    }
    else
    {
        write(1, &positive, 1);
    }
}

// int	main(void)
// {
//     ft_is_negative(-10);
//     return (0);
// }
