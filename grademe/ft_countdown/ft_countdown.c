/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:45:02 by damateu-          #+#    #+#             */
/*   Updated: 2023/11/09 11:46:22 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    Escribe un programa que muestre todos los numeros en orden descendente desde 9 hasta 0, separados por un salto de linea.
*/

#include <unistd.h>

int main(void)
{
    char c;

    c = '9';
    while (c >= '0')
    {
        write(1, &c, 1);
        c--;
    }
    write(1, "\n", 1);
    return (0);
}



