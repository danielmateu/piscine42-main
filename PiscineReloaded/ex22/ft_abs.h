/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 14:52:12 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/04 15:12:02 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    Create a macro ABS which replace its argument by it absolute value.

    #define ABS(Value)
*/

/**
 * Este archivo define una macro llamada ABS que calcula el valor absoluto de un número. 
*/

/*
#ifndef FT_ABS_H: 
Esta es una directiva de preprocesador que verifica si FT_ABS_H no está definido. Si FT_ABS_H no está definido, entonces el preprocesador ejecutará el código hasta que encuentre el correspondiente #endif.
*/
#ifndef FT_ABS_H
/*
# define FT_ABS_H: Esta línea define FT_ABS_H. La próxima vez que el preprocesador encuentre #ifndef FT_ABS_H, no ejecutará el código entre #ifndef y #endif porque FT_ABS_H ya está definido. Esto evita la inclusión múltiple del mismo archivo de encabezado, lo cual puede causar problemas.
*/
# define FT_ABS_H
/*
# define ABS(Value) (Value < 0 ? -Value : Value): Esta línea define una macro llamada ABS. Esta macro toma un argumento Value y devuelve -Value si Value es menor que 0, y Value si Value es mayor o igual a 0. En otras palabras, calcula el valor absoluto de Value.
*/
# define ABS(Value) (Value < 0 ? -Value : Value)
/*
#endif: Esta es la directiva de preprocesador que termina el bloque #ifndef.
*/
#endif

