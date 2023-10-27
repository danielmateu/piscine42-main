/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:08:58 by damateu-          #+#    #+#             */
/*   Updated: 2023/10/27 13:29:47 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Reproduce el comportamiento de la función strncpy (man strncpy).

// • El prototipo de la función deberá ser el siguiente:

// char *ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		++i;
	}
	if (i < n && src[i] == '\0')
	{
		while (dest[i] != '\0')
		{
			dest[i] = '\0';
			++i;
		}
	}
	return (dest);
}

// #include <stdio.h>

// int main(void)
// {
//     char src[] = "Hola ";
//     char dest[] = "Adios";
//     unsigned int n = 3;

//     printf("%s\n", ft_strncpy(dest, src, n));
//     return (0);
// }