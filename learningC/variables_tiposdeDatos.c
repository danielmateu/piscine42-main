/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   variables_tiposdeDatos.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 09:58:13 by damateu-          #+#    #+#             */
/*   Updated: 2023/10/25 10:17:46 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


void imprimir_datos(int edad, char* nombre)
{
    printf("Hola, tu nombre es %s y tienes %d años", nombre, edad);
}

int main()
{
    //declarar variable
    // int a;
    // char b; 1 byte

    //asignar valor
    // a = 10;
    // b = 'c';

    // int z = a * 2;

    // printf("a = %d y z = %d. En cambio b = %c", a, z, b);
    imprimir_datos(37, "Daniel");

    return 0;
}