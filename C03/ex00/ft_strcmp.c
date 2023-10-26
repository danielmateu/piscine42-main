/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 23:07:06 by damateu-          #+#    #+#             */
/*   Updated: 2023/10/26 23:38:28 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    La función strcmp compara dos cadenas de caracteres y devuelve un valor entero que indica si son iguales o cuál es la cadena que es mayor en orden lexicográfico. Si las cadenas son iguales, devuelve 0. Si la primera cadena es mayor que la segunda, devuelve un valor positivo. Si la segunda cadena es mayor que la primera, devuelve un valor negativo.
*/

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '/0' && s2[i] != '/0')
	{
		i++;
	}	
	return (s1[i] - s2[i]);
}
