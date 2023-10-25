/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   punteros.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:03:02 by damateu-          #+#    #+#             */
/*   Updated: 2023/10/25 14:02:38 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    Los punteros nos permiten guardar direcciones de memoria de variables, funciones, etc.

    Para declarar un puntero, se hace de la siguiente manera:
        tipo *nombre;

    Para asignarle un valor a un puntero, se hace de la siguiente manera:
        nombre = &variable;

    Para acceder al valor de la variable a la que apunta un puntero, se hace de la siguiente manera:
        *nombre;

    Para acceder a la dirección de memoria de un puntero, se hace de la siguiente manera:
        &nombre;

*/

// #include <unistd.h>
#include <stdio.h>

void jugar(int* n){
    int y = *n;
    y = y + 10;
    *n = y;

    // printf("%d\n", y);
}

int main(){
    // int x = 10;
    // int *dirX = &x;

    // printf("x = %d\n", x);
    // printf("Direcion de memoria de x = %u\n", &x);
    // printf("dirX = %u\n", dirX);
    int x = 10;
    jugar(&x);
    printf("%d", x);


    return 0;
}