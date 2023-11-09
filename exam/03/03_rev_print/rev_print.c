/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:30:49 by damateu-          #+#    #+#             */
/*   Updated: 2023/11/09 15:37:36 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Escribe una función que tome una cadena y muestre la cadena en orden inverso seguido de una nueva línea. Su prototipo se construye de esta manera: char *ft_rev_print (char *str) Debe devolver su argumento.
*/

#include <unistd.h>
#include <stdio.h>
int	ft_strlen(char *str)
{
	int	i;
	i = 0;
	while(str[i] != '\0')
		i++;
	return (i);
}
char *ft_rev_print(char *str)
{
	int	i;

	i = ft_strlen(str);
	i--;
	while (i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
	return(str);
}

int main()
{
	char str[] = "Hola!";
	ft_rev_print(str);
}