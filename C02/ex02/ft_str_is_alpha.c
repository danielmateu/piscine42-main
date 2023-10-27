/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:39:26 by damateu-          #+#    #+#             */
/*   Updated: 2023/10/27 10:52:49 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



// Crea una funcion que devuelva 1 si el string usado como parámetro contiene unicamente caracteres alfabéticos y 0 si contiene otro tipo de caracteres.

// Deberá devolver 1 si str es un string vacío

int ft_str_is_alpha(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        /* The `if` statement is checking if the character at index `i` in the string `str` is not an
        alphabetic character. */
        if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
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
    char str[] = "";
    printf("%d", ft_str_is_alpha(str));
    return (0);
}

