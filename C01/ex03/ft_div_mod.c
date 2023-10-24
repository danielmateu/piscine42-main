/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 13:21:59 by damateu-          #+#    #+#             */
/*   Updated: 2023/10/24 13:33:47 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Escribe una funcion ft_div_mod que tega el prototipo siguiente:

// void ft_div_mod(int a, int b, int *div, int *mod);

// Esta funcion divide los dos parametros a y b y almacena el resultado en el int apuntado por div. Tambien almacena el resto de la division de a y b en el int apuntado por mod.


void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;

    return;
}
