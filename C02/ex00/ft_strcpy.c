/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:48:35 by damateu-          #+#    #+#             */
/*   Updated: 2023/11/02 13:29:29 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    Reproduce el comportamiento de la funcion strcpy

    La funcion strcpy copia la cadena de caracteres apuntada por src, incluyendo el caracter nulo final, al array de caracteres apuntado por dest.

    La funcion strcpy devuelve un puntero al array de caracteres apuntado por dest.

*/

char    *ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    /* The line `dest[i] = '\0';` is adding a null character at the end of the copied string in the
    `dest` array. This is necessary to indicate the end of the string and ensure that it is properly
    terminated. */
    dest[i] = '\0';
    return (dest);
}


    #include <stdio.h>
    #include <string.h>

    int main(void)
    {
        char src[] = "Hello World!";
        char dest[1];

        ft_strcpy(dest, src);
        printf("%s\n", dest);
        return (0);
    }
