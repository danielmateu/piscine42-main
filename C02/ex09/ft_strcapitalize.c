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

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}

		if (str[i] >= 'a' && str[i] <= 'z')
		{
			/* The code `if (i == 0)` checks if the current character `str[i]` is the first character of the
			string. If it is, then it means that it is the first word of the string, so it should be
			capitalized. Therefore, the code `str[i] = str[i] - 32;` converts the lowercase letter to
			uppercase. */
			if (i == 0)
			{
				str[i] = str[i] - 32;
			}

			/* The condition `if (str[i - 1] >= ' ' && str[i - 1] <= '/')` checks if the character before the
			current character `str[i]` is a space or a punctuation mark. If it is, then it means that the
			current character `str[i]` is the first character of a new word, so it should be capitalized.
			Therefore, the code `str[i] = str[i] - 32;` converts the lowercase letter to uppercase. */
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
