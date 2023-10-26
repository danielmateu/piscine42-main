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

char	*ft_strcapitalize(char *str)
{
	int i;
	int j;

	/* The line `i = 1;` is initializing the variable `i` to the value 1. This variable is used as an
	index to iterate through the characters of the string `str`. */
	i = 1;
	j = 0;
	while (str[j] != '\0')
	{
		if (str[j] >= 'A' && str[j] <= 'Z')
			str[j] = str[j] + 32;
		j++;
	}

	while (str[i] != '\0')
	{
		/* The `if` statement is checking if the current character `str[i]` is a lowercase letter and if the
		previous character `str[i - 1]` is not a digit or an uppercase letter or a lowercase letter. If
		this condition is true, it means that the current character is the first letter of a word, so it
		converts it to uppercase by subtracting 32 from its ASCII value. */
		if ((str[i] >= 'a' && str[i] <= 'z') &&
			(str[i - 1] < '0' || str[i - 1] > '9') &&
			(str[i - 1] < 'A' || str[i - 1] > 'Z') &&
			(str[i - 1] < 'a' || str[i - 1] > 'z'))
			str[i] = str[i] - 32;
		i++;
	}
	
	return (str);
}

#include <stdio.h>

int		main(void)
{
	char str[] = "Hey! comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("%s\n", ft_strcapitalize(str));
	return (0);
}
