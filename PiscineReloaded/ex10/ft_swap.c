/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 16:35:36 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/02 16:47:49 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
    Create a function that swaps te value of two integer whose addresses are entered as parameters. 

    Your function must be declared as follows:
    void ft_swap(int *a, int *b);
 */

#include <stdio.h>

void ft_swap(int *a, int *b)    
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

/* int main(void)
{
    int a;
    int b;

    a = 1;
    b = 2;
    ft_swap(&a, &b);
    printf("%d\n", a);
    printf("%d\n", b);
    return (0);
} */
