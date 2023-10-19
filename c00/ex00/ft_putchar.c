/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:11:15 by damateu-              #+#    #+#             */
/*   Updated: 2023/10/19 16:11:15 by damateu-             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Escribe una funcion que muestre el caracter usado como parámetro

el prototipo de la funcion es el siguiente:

void ft_putchar(char c);

Para mostrar el carácter, debes usar la función write de la siguiente manera:

write(1, &c, 1);
*/


#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

int main(void) {
    ft_putchar('h');
    return 0;
}




