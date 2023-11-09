/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 10:47:25 by damateu-          #+#    #+#             */
/*   Updated: 2023/11/09 12:14:40 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    Escribe una funcion iterativa que devuelva una potencia de un numero

    Una potencia inferior a 0 devuelve 0

    Se ha decidido que 0 elevado a 0 es 1
*/

int ft_iterative_power(int nb, int power)
{
    /*
    primero inicializa dos variables enteras, i y result, a 0 y 1 respectivamente. i se utiliza como un contador en el bucle, y result se utiliza para almacenar el resultado del cálculo de la potencia.
    */
    int i;
    int result;

    i = 0;
    result = 1;
    /*
        verifica si power es menor que 0. Si lo es, la función devuelve 0. 
    */
    if (power < 0)
        return (0);
        /*
        la función entra en un bucle while que continúa mientras i sea menor que power. Dentro del bucle, result se multiplica por nb, y i se incrementa en 1. Esto efectivamente eleva nb a la potencia de power.
        */
    while (i < power)
    {
        result *= nb;
        i++;
    }
    return (result);
}