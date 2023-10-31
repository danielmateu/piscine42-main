/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 00:13:06 by user              #+#    #+#             */
/*   Updated: 2023/10/31 14:31:47 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
        La función strstr busca la primera aparición de una subcadena en una cadena dada. La función toma dos argumentos: el primer argumento es la cadena en la que se buscará la subcadena, y el segundo argumento es la subcadena que se buscará. La función devuelve un puntero al comienzo de la subcadena en la cadena dada, o un puntero nulo si la subcadena no se encuentra en la cadena dada.
*/

char    *ft_strstr(char *str, char *to_find)
{
        int i;
        int j;

        i = 0;
        if (to_find[0] == '\0')
                return (str);
        while (str[i] != '\0')
        {
                j = 0;
                while (str[i + j] == to_find[j])
                {
                        if (to_find[j + 1] == '\0')
                                return (&str[i]);
                        j++;
                }
                i++;
        }
        return (0);
}

#include <stdio.h>

int main(void)
{
        char str[100] = "Hello World";
        char to_find[100] = "World";
        printf("%s\n", ft_strstr(str, to_find));
        return (0);
}
