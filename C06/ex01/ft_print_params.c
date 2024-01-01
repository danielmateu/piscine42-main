/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 11:21:40 by damateu-          #+#    #+#             */
/*   Updated: 2023/12/09 11:29:55 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Aqui estamos hablando de un programa, por lo tanto tendremos que tener una funcion main en el archivo

// Escribe un programa que muestre los argumentos recibidos en la linea de comandos, uno por linea, en el mísmo orden que en la linea de comandos

// Se deben mostrar todos los argumentos, salvo argv[0].

//  Ejemplo:

/*
$>./a.out test1 test2 test3 | cat -e
test1$
test2$
test3$
$>
*/

// Tan solo podemos usar la funcion write de la libreria unistd.h

// Para compilar: gcc -Wall -Wextra -Werror ft_print_params.c

#include <unistd.h>

/* The function `void ft_write_arr(char *arr);` is a function declaration. It declares a function named
`ft_write_arr` that takes a pointer to a character (`char *`) as a parameter and returns nothing
(`void`). This function is used to write the characters of a string to the standard output using the
`write` function from the `unistd.h` library. */
void ft_write_arr(char *arr);

int main(int argc, char *argv[])
{
    int i;

    i = 1;
    if (argc < 2)
        return (0);
    while (argv[i] != 0)
    {
        ft_write_arr(argv[i]);
        write(1, "\n", 1);
        i++;
    }
}

void ft_write_arr(char *arr)
{
    int i;

    i = 0;
    while (arr[i])
    {
        write(1, &arr[i], 1);
        i++;
    }
}


