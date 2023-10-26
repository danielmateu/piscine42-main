/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:29:32 by damateu-          #+#    #+#             */
/*   Updated: 2023/10/26 13:37:55 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if(str[i] < ' ' || str[i] > '~')
		{
			return(0);
		}
		i++;
	}

	return (1);
}

#include<stdio.h>

int main()
{
	char str[] = "Hello World!@ã";
	printf("%d", ft_str_is_printable(str));
	return (0);
}
