/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:46:34 by damateu-          #+#    #+#             */
/*   Updated: 2023/11/03 14:30:29 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    Escribe una funcion que invierta un array de int.

    El array tiene que ser modificado directamente, sin devolver nada.
    Los parametros son un puntero al primer elemento del array y el numero de elementos del array.
*/

void ft_rev_inv_tab(int *tab, int size)
{
    int i;
    int temp;

    i = 0;
    /*
    El bucle while (i < size / 2) se utiliza para iterar a través de la primera mitad del array. Se detiene cuando i alcanza el índice medio del array. Esto se hace porque solo necesitamos intercambiar elementos hasta el índice medio para invertir el array.
     */
    while (i < size / 2)
    {
        /*
        temp = tab[i]; está asignando el valor de tab[i] a la variable temp. Esto se hace para almacenar temporalmente el valor de tab[i] antes de que se sobrescriba en la siguiente línea de código.
         */
        temp = tab[i];
        /*
        Intercambiamos el valor en el índice i con el valor en el índice correspondiente desde el final del array.
        */
        tab[i] = tab[size - i - 1];
        /*
        Intercambiamos el valor en el índice size - i - 1 con el valor almacenado en la variable temp. Esta línea de código se utiliza para invertir el array intercambiando elementos desde el final del array con elementos desde el principio del array.
         */
        tab[size - i - 1] = temp;
        i++;
    }
}

#include <unistd.h>
#include <stdio.h>

int main(void)
{
    int tab[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int i;

    i = 0;
    ft_rev_inv_tab(tab, size);
    while (i < size)
    {
        printf("%d", tab[i]);
        i++;
    }
    return (0);
}