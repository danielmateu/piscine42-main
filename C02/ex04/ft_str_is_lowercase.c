/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:24:02 by damateu-          #+#    #+#             */
/*   Updated: 2023/10/26 12:41:26 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    Crea una funcion que devuelva 1 si el string usado como parametro contiene unicamente caracteres alfabeticos en minusculas y 0 en caso contrario.
*/

int ft_str_is_lowercase(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        if(str[i] < 'a' || str[i] > 'z')
        {
            return (0);
        }
        i++;
    }
    return (1);
}

#include <stdio.h>

int main(void)
{
    char str[] = "holaA";
    printf("%d", ft_str_is_lowercase(str));
    return (0);
}