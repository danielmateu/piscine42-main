/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:38:59 by damateu-          #+#    #+#             */
/*   Updated: 2023/10/26 10:39:00 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



// Crea una funcion que devuelva 1 si el string usado como parametro contiene unicamente digitos y devuelva 0 si contiene otro tipo de caracteres

// Tendra que devolver 1 si str es un string vacio

int ft_str_is_numeric(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] < '0' || str[i] > '9')
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
    char str[] = "123456789A";
    printf("%d", ft_str_is_numeric(str));
    return (0);
}