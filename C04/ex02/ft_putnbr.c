/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:39:03 by damateu-          #+#    #+#             */
/*   Updated: 2023/11/02 15:41:03 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    Escribe una función que muestre un número pasado como parámetro. La función
    deberá ser capaz de mostrar todos los valores posibles en una variable de tipo int.
*/

#include <unistd.h>

void    ft_putnbr(int nb)
{
    /* 
    Declaramos una variable c de tipo char. Esta variable se utiliza para almacenar el carácter que se escribirá en la salida estándar utilizando la función write.
     */
    char c;

    /* 
    Comprobamos si el número nb es igual al valor mínimo de un int (-2147483648). Si es así, escribe un carácter "-" en la salida utilizando la función write, luego llama a la función ft_putnbr recursivamente con nb dividido por -10. 
    Esto se hace para manejar el caso en que nb es el valor mínimo de un int, ya que tomar su valor absoluto resultaría en un desbordamiento. Finalmente, asigna el carácter '8' a la variable c. 
    Se le asigna el caracter '8' por que el valor mínimo de un int es -2147483648, y si se le asigna el caracter '9' se desbordaría.
    */
    if (nb == -2147483648)
    {
        write(1, "-", 1);
        ft_putnbr(nb / -10);
        c = '8';
    }
    else
    {
        /* 
        El bloque de código if (nb < 0) verifica si el número nb es negativo. Si lo es, escribe un carácter "-" en la salida estándar utilizando la función write y luego cambia el valor de nb a su valor absoluto multiplicándolo por -1. Esto asegura que el número se muestre correctamente sin el signo negativo.
         */
        if (nb < 0)
        {
            write(1, "-", 1);
            nb = -nb;
        }
        /* 
            El código está llamando recursivamente a la función ft_putnbr para imprimir los dígitos del número nb uno por uno.
         */
        if (nb > 9)
            ft_putnbr(nb / 10);
        c = nb % 10 + '0';
    }
    write(1, &c, 1);
}

int main(void)
{
    ft_putnbr(42);
    return (0);
}