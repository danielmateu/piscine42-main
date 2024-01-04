/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 15:23:10 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/04 15:31:00 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_abs.h"
#include <stdio.h>

int main() {
    int a = -5;
    printf("El valor absoluto de %d es %d\n", a, ABS(a));

    int b = 3;
    printf("El valor absoluto de %d es %d\n", b, ABS(b));

    return 0;
}