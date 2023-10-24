/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:28:48 by damateu-          #+#    #+#             */
/*   Updated: 2023/10/24 14:47:22 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    Escribe una funci'on que muestre uno a uno en pantalla los caracteres de un string. 

    La direccion del primer caracter del string esta incluida en el puntero utilizado como parametro para la funcion

    El prototipo de la funcion debera ser el siguiente:

    void ft_putstr(char *str);
*/

#include <unistd.h>

void ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

// int main(void)
// {
//     char *str;

//     str = "Hola mundo";
//     ft_putstr(str);
//     return (0);
// }