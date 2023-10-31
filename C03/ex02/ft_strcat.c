/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 00:07:06 by user              #+#    #+#             */
/*   Updated: 2023/10/27 00:17:12 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
        La función strcat concatena dos cadenas de caracteres. La función toma dos argumentos: el primer argumento es la cadena de destino a la que se agregará la segunda cadena, y el segundo argumento es la cadena que se agregará a la primera. La función devuelve un puntero a la cadena de destino. La cadena de destino debe tener suficiente espacio para contener ambas cadenas.
*/

char    *ft_strcat(char *dest, char *src)
{
        int i;
        int j;

        i = 0;
        j = 0;
        while (dest[i] != '\0')
                i++;
        while (src[j] != '\0')
        {
                dest[i] = src[j];
                i++;
                j++;
        }
        dest[i] = '\0';
        return (dest);
}

// #include <stdio.h>

// int main(void)
// {
//         char dest[100] = "Hello";
//         char src[100] = "World";
//         printf("%s\n", ft_strcat(dest, src));
//         return (0);
// }




