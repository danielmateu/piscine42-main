/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 11:21:40 by damateu-          #+#    #+#             */
/*   Updated: 2023/12/09 11:29:55 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Escribe un programa que muestre el nombre del programa seguido de un salto de
// línea.

//  Ejemplo:

// $>./a.out | cat -e
// ./a.out$
// $>

#include <unistd.h>

int main(int argc, char *argv[])
{
    while (*argv[0] != 0)
        write(1, argv[0]++, 1);
    write(1, "\n", 2);
}
