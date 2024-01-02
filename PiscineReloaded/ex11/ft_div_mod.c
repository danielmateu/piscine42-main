/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 16:49:55 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/02 17:01:10 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
    Create a function ft_div_mod that divides parameters a by b and stores the result in the int pointed by div. It also stores the remainder of the division of a by b in the int pointed by mod.

    Your function must be declared as follows:
    void ft_div_mod(int a, int b, int *div, int *mod);
 */

#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}

/* int main(void)
{
    int a;
    int b;
    int div;
    int mod;

    a = 10;
    b = 3;
    ft_div_mod(a, b, &div, &mod);
    printf("%d\n", div);
    printf("%d\n", mod);
    return (0);
} */
