/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:32:21 by damateu-          #+#    #+#             */
/*   Updated: 2023/10/31 11:33:04 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    Reproduce el comportamiento de la función strncat (man strncat).
*/

// • El prototipo de la función deberá ser el siguiente:
// char *ft_strncat(char *dest, char *src, unsigned int nb);

char    *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int i;
    unsigned int j;

    i = 0;
    j = 0;
    while (dest[i] != '\0')
        i++;
    while (src[j] != '\0' && j < nb)
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (dest);
}