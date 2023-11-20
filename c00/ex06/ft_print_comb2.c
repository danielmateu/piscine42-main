/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 23:10:35 by user              #+#    #+#             */
/*   Updated: 2023/10/22 15:04:40 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void p2d_int(int n)
{
	int div;
	int mod;

	mod = n % 10 + 48;
	div = n / 10 + 48;
	write(1, &div, 1);
	write(1, &mod, 1);
}

/**
 * The function ft_print_comb2 prints all possible combinations of two digits.
 */
void ft_print_comb2(void)
{
	int a;
	int b;

	b = 0;
	while (b <= 99)
	{
		a = b + 1;
		while (a <= 99)
		{
			p2d_int(b);
			write(1, " ", 1);
			p2d_int(a);
			if (!(b == 98 && a == 99))
				write(1, ", ", 2);
			a++;
		}
		b++;
	}
}

int main(void)

{
	ft_print_comb2();
	return (0);
}