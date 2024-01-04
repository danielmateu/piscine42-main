/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 17:30:49 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/04 13:57:10 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Reproduce the behavior of the function strdup (man strdup).
// Here's how it should be prototyped :
//  char *ft_strdup(char *src);
// Allowed functions : malloc

#include <stdlib.h>

/*La función ft_strdup toma como entrada un puntero a una cadena de caracteres (char *src).*/
char *ft_strdup(char *src)
{
    /*inicializa una variable entera i a 0 y un puntero a char dest que será la nueva cadena duplicada.*/
    int i;
    char *dest;

    i = 0;
    /*La función entra en un bucle while para calcular la longitud de la cadena de entrada src. Recorre la cadena src hasta que encuentra el carácter nulo de terminación ('\0'), incrementando i en cada iteración.*/
    while (src[i])
        i++;

    /*Una vez que se ha determinado la longitud de la cadena, la función asigna memoria para la nueva cadena dest utilizando la función malloc. El tamaño de la memoria asignada es igual a la longitud de la cadena original más uno para el carácter nulo de terminación ('\0').*/
    dest = (char *)malloc(sizeof(char) * (i + 1));
    /*reinicia i a 0 y entra en otro bucle while para copiar los caracteres de la cadena original src a la nueva cadena dest. Recorre la cadena src de nuevo, asignando cada carácter a la posición correspondiente en dest, hasta que encuentra el carácter nulo de terminación ('\0').*/
    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    /*Después de copiar todos los caracteres, la función añade un carácter nulo de terminación al final de la cadena dest.*/
    dest[i] = '\0';
    /*Finalmente, ft_strdup devuelve un puntero a la nueva cadena duplicada dest.*/
    return (dest);
}

#include <stdio.h>

int main(void)
{
    char *str = "Hello World!";
    char *str2;

    str2 = ft_strdup(str);
    printf("%s\n", str2);
    return (0);
}


/* 
Comportamiento de la funcion strdup

La función strdup se utiliza comúnmente en escenarios donde necesitas crear una copia modificable de una cadena. Aquí están algunos casos de uso comunes:

1 -> Manipulación de Cadenas: Cuando tienes una cadena constante y quieres realizar operaciones que modifiquen la cadena, como insertar o eliminar caracteres, puedes usar strdup para crear una copia modificable de la cadena.

2 -> Gestión de Memoria: Si estás trabajando con cadenas en un contexto donde la memoria necesita ser asignada y desasignada dinámicamente, strdup puede ser útil. Asigna la cantidad exacta de memoria necesaria para la copia de la cadena.

3 -> Protección de Datos: Si tienes una cadena que quieres pasar a una función pero no quieres que la función pueda cambiar la cadena original, puedes pasar una copia de strdup de la cadena a la función.

4 -> Multihilo: En aplicaciones multihilo, strdup puede ser utilizado para asegurar que cada hilo tenga su propia copia de una cadena, previniendo carreras de datos.
*/


