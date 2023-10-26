/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:58:09 by damateu-          #+#    #+#             */
/*   Updated: 2023/10/26 13:09:57 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i]<'A' || str[i] > 'Z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

#include <stdio.h>

int  main(void)
{
	char str[] = "ABCD";
	printf("%d", ft_str_is_uppercase(str));
	return(0);
}
