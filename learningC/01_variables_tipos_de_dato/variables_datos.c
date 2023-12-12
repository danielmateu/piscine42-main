/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   variables_datos.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 11:46:42 by user              #+#    #+#             */
/*   Updated: 2023/12/12 16:20:40 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Prgramacion proecudural

// funcion main. Es la funcion principal del programa, el codigo que haya en main se ejecutara funcion por funcion

// Las funciones devolveran tipos de datos

// Tipos de datos:

// int: numeros enteros 
// float: numeros decimales. El simbolo decia siempre será un punto
// char: caracteres. 'a', 'b', 'c' ... 'z', 'A', 'B', 'C' ... 'Z', '0', '1', '2' ... '9' Como referencia se puede usar la tabla ASCII
// cadena de caracteres: "Hola mundo" "42" "Hola 42" "42 mundo" "Hola 42 mundo"
// void: vacio. No devuelve nada. Son procedimientos que no devuelven nada

// construcción de una funcion main qe devuelva un entero:

#include <stdio.h> // archivo de cabecera que contiene la funcion printf

int main()
{
    printf("Hola mundo");
    return (0);
}