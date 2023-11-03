/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 13:08:05 by damateu-          #+#    #+#             */
/*   Updated: 2023/11/03 13:20:10 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    Escribe la función ft_fibonacci que devuelve el n-ésimo elemento de la
    secuencia de Fibonacci, el primero siendo el 0. Consideraremos que el
    primer elemento de la secuencia es el elemento 0. Por lo tanto, en la
    secuencia de Fibonacci, los primeros elementos son 0, 1, 1, 2.

    No se tendran que gestionar los overflows

    Tendra que ser una función recursiva

    Si el indice es inferior a 0, la función devolverá -1
*/

int ft_fibonacci(int index)
{
    if (index < 0)
        return (-1);
    if (index == 0)
        return (0);
    if (index == 1)
        return (1);
        /*
        Esta línea de código está implementando la secuencia de Fibonacci de manera recursiva. En la secuencia de Fibonacci, cada número es la suma de los dos números anteriores. Por lo tanto, esta línea de código está sumando el número de Fibonacci en la posición index - 1 y el número de Fibonacci en la posición index - 2 para obtener el número de Fibonacci en la posición index.
        */
    return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

//main
#include <stdio.h>

int main(void)
{
    printf("%d\n", ft_fibonacci(0));
    printf("%d\n", ft_fibonacci(1));    
    printf("%d\n", ft_fibonacci(10));

    return (0); 

}