/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:08:34 by damateu-          #+#    #+#             */
/*   Updated: 2023/11/03 14:14:59 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    Escribe una funcion que cuente el numero de caracteres de un string y que devuelva el numero encontrado
*/

#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}

int main(void)
{
    char *str;

    str = "Adios mundo hostia!";
    ft_strlen(str);
    printf("%d", ft_strlen(str));
    return (0);
}
