/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:16:45 by damateu-          #+#    #+#             */
/*   Updated: 2023/10/26 15:30:57 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strlowcase(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if ((str[i] >= 65) && (str[i] <= 90))
            str[i] = str[i] + 32;
        i++;
    }
    return (str);
}

#include <stdio.h>

int main(void)
{
    char str[] = "Hello World";
    printf("%s", ft_strlowcase(str));
    return (0);
}

