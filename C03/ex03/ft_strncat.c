/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:32:21 by damateu-          #+#    #+#             */
/*   Updated: 2023/10/31 14:29:35 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    Reproduce el comportamiento de la función strncat (man strncat).
*/

/*
    La funcion strncat concatena dos cadenas de caracteres. La funcion toma tres argumentos: el primer argumento es la cadena de destino a la que se agregara la segunda cadena, el segundo argumento es la cadena que se agregara a la primera y el tercer argumento es el numero maximo de caracteres que se agregaran. La funcion devuelve un puntero a la cadena de destino. La cadena de destino debe tener suficiente espacio para contener ambas cadenas.
*/

// • El prototipo de la función deberá ser el siguiente:
// char *ft_strncat(char *dest, char *src, unsigned int nb);

char    *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int i;
    unsigned int j;

    i = 0;
    j = 0;
    while (dest[i] != '\0')
        i++;
    while (src[j] != '\0' && j < nb)
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (dest);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
    char dest1[100] = "aaaa";
    char src1[100] = "xyz";
    ft_strncat(dest1, src1, 2);
    printf("Resultado de ft_strncat: %s\n", dest1);

    char dest2[100] = "aaaa";
    char src2[100] = "xyz";
    strncat(dest2, src2, 3);
    printf("Resultado de strncat: %s\n", dest2);

    return 0;
}