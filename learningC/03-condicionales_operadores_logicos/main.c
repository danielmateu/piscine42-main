/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 16:44:59 by user              #+#    #+#             */
/*   Updated: 2023/12/13 12:27:40 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void dia_semana(int d)
{
    switch (d)
    {
    case 1:
        write(1, "Lunes\n", 6);
        break;
    case 2:
        write(1, "Martes\n", 7);
        break;
    case 3:
        write(1, "Miercoles\n",10);
        break;
    case 4:
        write(1, "Jueves\n", 7);
        break;
    case 5:
        write(1, "Viernes\n", 8);
        break;
    case 6:
        write(1, "Sabado\n", 7);
        break;
    case 7:
        write(1, "Domingo\n", 8);
        break;
    
    default:
        write(1, "Error\n", 6);
        break;
    }
}


int main()
{
    int x = 20;

    if(x < 10 )
    {
        printf("x es menor que 10\n");
    }
    else if(x < 20)
    {
        printf("x es menor que 20\n");
    }
    else
    {
        printf("x es mayor o igual que 20\n");
    }
    dia_semana(1);
    return 0;

}