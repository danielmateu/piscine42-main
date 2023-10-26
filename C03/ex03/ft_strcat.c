/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 00:07:06 by user              #+#    #+#             */
/*   Updated: 2023/10/27 00:12:10 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strcat(char *dest, char *src)
{
        int i;
        int j;

        i = 0;
        j = 0;
        while (dest[i] != '\0')
                i++;
        while (src[j] != '\0')
        {
                dest[i] = src[j];
                i++;
                j++;
        }
        dest[i] = '\0';
        return (dest);
}

// #include <stdio.h>

// int main(void)
// {
//         char dest[100] = "Hello";
//         char src[100] = "World";
//         printf("%s\n", ft_strcat(dest, src));
//         return (0);
// }




