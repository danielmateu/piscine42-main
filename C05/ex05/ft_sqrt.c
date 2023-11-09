/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 13:24:26 by damateu-          #+#    #+#             */
/*   Updated: 2023/11/09 12:25:54 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    Escribe una funcion que devuelva la raiz cuadrada entera de un numero, si existe, o 0 si a raiz cuadrada no es entera.
*/

int ft_sqrt(int nb){
    int i;

    i = 1;
    /* mientras el cuadrado de i sea menor que nb. En cada iteración del bucle, i se incrementa en 1.*/
    while (i * i < nb)
        i++;
        /*Si el cuadrado de i es igual a nb, eso significa que i es la raíz cuadrada entera de nb, por lo que la función devuelve i*/
    if (i * i == nb)
        return (i);
        /*Si el cuadrado de i no es igual a nb, eso significa que nb no tiene una raíz cuadrada entera, por lo que la función devuelve 0.*/
    else
        return (0);
}


//main
#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("%d\n", ft_sqrt(256));
    return 0;
}
