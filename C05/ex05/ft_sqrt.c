/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 13:24:26 by damateu-          #+#    #+#             */
/*   Updated: 2023/11/03 13:38:15 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    Escribe una funcion que devuelva la raiz cuadrada entera de un numero, si existe, o 0 si a raiz cuadrada no es entera.
*/

int ft_sqrt(int nb){
    int i;

    i = 1;
    while (i * i < nb)
        i++;
    if (i * i == nb)
        return (i);
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
