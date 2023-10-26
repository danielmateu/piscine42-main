/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 00:21:08 by user              #+#    #+#             */
/*   Updated: 2023/10/27 00:23:00 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    La función strlcat concatena dos cadenas de caracteres, pero a diferencia de strcat, la función strlcat garantiza que la cadena de destino no se desbordará. La función toma tres argumentos: el primer argumento es la cadena de destino a la que se agregará la segunda cadena, el segundo argumento es la cadena que se agregará a la primera, y el tercer argumento es el tamaño del búfer de la cadena de destino. La función devuelve la longitud total de la cadena que se habría creado si no hubiera restricciones de tamaño. La cadena de destino debe tener suficiente espacio para contener ambas cadenas y un carácter nulo adicional al final.
*/

unsigned int ft_strlcat(char *dest, char *src, unsigned int size){
    unsigned int i;
    unsigned int j;
    unsigned int k;

    i = 0;
    j = 0;
    k = 0;
    while (dest[i] != '\0')
        i++;
    while (src[j] != '\0')
        j++;
    if (size <= i)
        j += size;
    else
        j += i;
    while (src[k] != '\0' && i + 1 < size)
    {
        dest[i] = src[k];
        i++;
        k++;
    }
    dest[i] = '\0';
    return (j);

}