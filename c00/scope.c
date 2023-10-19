/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scope.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:55:19 by damateu-              #+#    #+#             */
/*   Updated: 2023/10/19 14:55:21 by damateu-             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Purpose: Illustrate scope of variables.

#include <stdio.h>

int function_1(int a, int b) {
    int variable_3;
    
    variable_3 = a + b;
    // imprimir el resultado    
    return variable_3;
}

int main(void) {

    int a;
    int b;

    b = 8;
    a = function_1(b, 2);

    // imprimir el resultado
    printf("variable_3 = %d\n", a);

    return 0;
}