/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 13:51:16 by damateu-          #+#    #+#             */
/*   Updated: 2023/10/24 14:00:02 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Escribe una funcion ft_ultimate_div_mod que tegna el prototype siguiente:

// void ft_ultimate_div_mod(int *a, int *b);

// Esta funcion divide los int apuntados por a y b. El resultado de la division se almacena en el int apuntado por a. El resultado del resto de la division se almacena en el input apuntado por b

void ft_ultimate_div_mod(int *a, int *b)
{
    int div;
    int mod;

    div = *a / *b;
    mod = *a % *b;

    *a = div;
    *b = mod;

    return;
}
