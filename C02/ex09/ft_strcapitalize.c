/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:51:13 by damateu-          #+#    #+#             */
/*   Updated: 2023/10/26 17:20:27 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Crea una funcion que ponga en mayusculas la primera letra de cada palabra y el resto en minúsculas.
*/


char	*ft_strcapitalize(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}

		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0)
			{
				str[i] = str[i] - 32;
			}


			if (str[i - 1] >= ' ' && str[i - 1] <= '/')
			{
				str[i] = str[i] - 32;
			}
		}

		i++;
	}

	return (str);
}

#include <stdio.h>

int main(void)
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(str));
	return (0);
}
