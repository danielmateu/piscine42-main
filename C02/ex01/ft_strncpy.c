/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:08:58 by damateu-          #+#    #+#             */
/*   Updated: 2023/10/25 16:51:21 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    La funcion strncpy copia n caracteres de la cadena apuntada por src, incluyendo el caracter nulo final (y siempre y cuando src tenga suficientes caracteres). Si la longitud de src es menor que n, se copian caracteres adicionales de la cadena nula final para rellenar los n caracteres de destino.

    La funcion strncpy devuelve un puntero al destino.

*/

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    /* The line `unsigned int i;` is declaring a variable `i` of type `unsigned int`. This variable is
    used as a counter in the subsequent loops in the function `ft_strncpy`. */
    unsigned int i;

    i = 0;
    /* The code `while (i < n && src[i] != '\0')` is a loop that copies characters from the source
    string `src` to the destination string `dest`. It continues copying characters until either `n`
    characters have been copied or the end of the source string is reached (indicated by the null
    character `\0`). */
    while (i < n && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    /* The code `while (i < n)` is a loop that fills the remaining characters in the destination string
    `dest` with null characters (`'\0'`). This ensures that the destination string is properly
    terminated with a null character, even if the source string `src` is shorter than `n`. */
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return (dest);
}