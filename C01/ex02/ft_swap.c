/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 13:00:21 by damateu-          #+#    #+#             */
/*   Updated: 2023/10/24 13:04:06 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Escribe una uncion que intercambie el contenido de dos enteros cuyas direcciones se utilicen como parametros.

void ft_swap(int *a, int *b)
{
    int c;

    /* `c = *a;` is assigning the value of the variable `a` to the variable `c`. The `*` operator is
    used to dereference the pointer `a` and get the value it points to. */
    c = *a;
    /* `*a = *b;` is assigning the value of the variable `b` to the variable `a`. The `*` operator is
    used to dereference the pointer `b` and get the value it points to. */
    *a = *b;
    /* `*b = c;` is assigning the value of the variable `c` to the variable `b`. The `*` operator is
    used to dereference the pointer `b` and modify the value it points to. In this case, it is
    assigning the value of `c` to the variable `b`, effectively swapping the values of `a` and `b`. */
    *b = c;
}