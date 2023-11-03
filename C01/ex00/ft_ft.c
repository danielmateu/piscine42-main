/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:55:39 by damateu-          #+#    #+#             */
/*   Updated: 2023/11/03 14:10:05 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Escribe una funcion que reciba como parámetro un puntero a int, y ponga el valor de este int a 42.

#include <unistd.h>

void ft_ft(int *nbr) {
    *nbr = 42;
}

int main(void) {
    int a;
    int *ptr;

    a = 0;
    ptr = &a;
    //Imprime el valor de a, que es 42
    ft_ft(ptr);
    write(1, &a, 1);
    
    return (0);
}


