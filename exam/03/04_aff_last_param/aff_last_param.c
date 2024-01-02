/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:57:27 by damateu-          #+#    #+#             */
/*   Updated: 2023/11/09 15:57:44 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Escribe un programa que tome cadenas como argumentos y muestre su último argumento seguido de una nueva línea.

Si el número de argumentos es menor a 1, el programa muestra una nueva línea.
*/

#include <unistd.h>

int	main(int argc, char **argv)
{
    int	i;

    i = 0;
    if (argc < 2)
        write(1, "\n", 1);
    else
    {
        while (argv[argc - 1][i] != '\0')
        {
            write(1, &argv[argc - 1][i], 1);
            i++;
        }
        write(1, "\n", 1);
    }
    return (0);
}