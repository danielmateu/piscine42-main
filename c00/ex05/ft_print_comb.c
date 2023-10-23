/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:07:49 by damateu-          #+#    #+#             */
/*   Updated: 2023/10/23 10:15:59 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    Escribe una función que muestre, en orden creciente, todas las combinaciones posibles de tres dígitos distintos en orden creciente sí, 

    El resultado debe ser:
    012, 013, 014, 015, 016, 017, 018, 019, 023, ..., 789

    La funcion debe tener máximo 24 lineas

*/

#include <unistd.h>

void ft_print_comb() {
    char a;
    char b;
    char c;

    a = '0';
    b = '1';
    c = '2';

    while (a <= '7') {
        while (b <= '8') {
            while (c <= '9') {
                write(1, &a, 1);
                write(1, &b, 1);
                write(1, &c, 1);
                if (a != '7') {
                    write(1, ", ", 2);
                }else {
                    write(1, "\n", 1);
                }
                c++;
            }
            c = b + 2;
            b++;
        }
        b = a + 1;
        a++;
    }
}

// int main() {
//     ft_print_comb();
//     return 0;
// }



