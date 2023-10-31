/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 00:07:06 by user              #+#    #+#             */
/*   Updated: 2023/10/31 12:06:09 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
        La función strcat concatena dos cadenas de caracteres. La función toma dos argumentos: el primer argumento es la cadena de destino a la que se agregará la segunda cadena, y el segundo argumento es la cadena que se agregará a la primera. La función devuelve un puntero a la cadena de destino. La cadena de destino debe tener suficiente espacio para contener ambas cadenas.
*/

char *ft_strcat(char *dest, char *src)
{
        int i;
        int j;

        i = 0;
        j = 0;

        // Encuentra el final de la cadena dest
        while (dest[i] != '\0')
                i++;

        // Copia la cadena src a dest desde donde termina dest
        while (src[j] != '\0')
        {
                dest[i + j] = src[j];
                j++;
        }

        // Asegura que dest esté terminada por '\0'
        dest[i + j] = '\0';

        // Devuelve la cadena dest
        return (dest);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
        char dest1[100] = "aaaa";
        char src1[100] = "xyz";
        ft_strcat(dest1, src1);
        printf("Resultado de ft_strcat: %s\n", dest1);

        char dest2[100] = "aaaa";
        char src2[100] = "xyz";
        strcat(dest2, src2);
        printf("Resultado de strcat: %s\n", dest2);

        return 0;
}
