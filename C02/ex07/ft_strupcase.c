/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:55:24 by damateu-          #+#    #+#             */
/*   Updated: 2023/10/26 14:05:54 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strupcase(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if ((str[i] >= 97) && (str[i] <= 122))
            str[i] = str[i] - 32;
        i++;
    }
    return (str);
}

#include <stdio.h>

int main(void)
{
    char str[] = "Hello World";
    printf("%s", ft_strupcase(str));
    return (0);
}