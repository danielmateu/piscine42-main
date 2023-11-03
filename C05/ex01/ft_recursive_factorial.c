/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 09:45:26 by damateu-          #+#    #+#             */
/*   Updated: 2023/11/03 09:53:12 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    Escribe una funcion recursiva que devuelva el factorial de un numero usado como parametro.

    Si el argumento no es valido, la funcion debe devolver 0.

    No hay que gestionar el desbordamiento.
*/

int ft_recursive_factorial(int nb)
{
    /*
        primero verifica si nb es menor que 0 o mayor que 12. Si alguna de estas condiciones es verdadera, la función devuelve 0. Esto se debe a que el factorial de números negativos no está definido, y el factorial de números mayores que 12 excede el límite máximo de un int en C, lo que podría llevar a un desbordamiento.
    */
    if (nb < 0 || nb > 12)
        return (0);
        /*
        la función verifica si nb es igual a 0. Si lo es, la función devuelve 1. Esto se debe a que el factorial de 0 se define como 1.
        */
    if (nb == 0)
        return (1);
        /*
            si nb es un entero positivo menor o igual a 12, la función devuelve el producto de nb y el factorial de nb - 1. Este es el paso recursivo donde la función se llama a sí misma con un valor más pequeño. La recursión continúa hasta que nb es 0, momento en el que la función devuelve 1, terminando la recursión.
        */
    return (nb * ft_recursive_factorial(nb - 1));
}

#include <stdio.h>

int main(void)
{
    printf("%d\n", ft_recursive_factorial(3));
    return (0);
}