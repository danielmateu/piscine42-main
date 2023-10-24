/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:46:34 by damateu-          #+#    #+#             */
/*   Updated: 2023/10/24 16:14:50 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    Escribe una funcion que invierta un array de int.

    Los parametros son un puntero a int y el numero de in en el array
*/

void ft_rev_int_tab(int *tab, int size)
{
    int i;
    int temp;

    i = 0;
    /* The `while (i < size / 2)` loop is used to iterate through the first half of the array. It stops
    when `i` reaches the middle index of the array. This is done because we only need to swap
    elements up to the middle index in order to reverse the array. */
    while (i < size / 2)
    {
        /* `temp = tab[i];` is assigning the value of `tab[i]` to the variable `temp`. This is done in
        order to temporarily store the value of `tab[i]` before it is overwritten in the next line
        of code. */
        temp = tab[i];
        /* `tab[i] = tab[size - i - 1];` is swapping the value at index `i` with the value at the
        corresponding index from the end of the array. */
        tab[i] = tab[size - i - 1];
        /* `tab[size - i - 1] = temp;` is swapping the value at index `size - i - 1` with the value
        stored in the variable `temp`. This line of code is used to reverse the array by swapping
        elements from the end of the array with elements from the beginning of the array. */
        tab[size - i - 1] = temp;
        i++;
    }
}