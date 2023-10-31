/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:26:34 by damateu-          #+#    #+#             */
/*   Updated: 2023/10/31 16:29:36 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    Escribe una función que muestre uno a uno en la pantalla los caracteres de una
cadena de caracteres.

La dirección del primer carácter de la cadena de caracteres está incluida en el
puntero usado como parámetro a la función.
*/

#include <unistd.h>

void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    write(1, str, i);
}