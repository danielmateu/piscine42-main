/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 14:01:42 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/04 14:05:33 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    Create a function ft_range which returns an array of ints. This int array should contain all values between min and max.

    Min included - Max excluded

    Here's how it should be prototyped :

    int    *ft_range(int min, int max);

    If min >= max, a NULL pointer should be returned.
*/

#include <stdlib.h>

int *ft_range(int min, int max)
{
    int *range;
    int i;

    if (min >= max)
        return (NULL);
    range = (int *)malloc(sizeof(int) * (max - min));
    i = 0;
    while (min < max)
    {
        range[i] = min;
        min++;
        i++;
    }
    return (range);
}

#include <stdio.h>

int main(void)
{
    int *range;
    int i;

    range = ft_range(5, 10);
    i = 0;
    while (i < 5)
    {
        printf("%d\n", range[i]);
        i++;
    }
    return (0);
}