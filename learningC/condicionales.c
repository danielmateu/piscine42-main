/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   condicionales.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 10:19:16 by damateu-          #+#    #+#             */
/*   Updated: 2023/10/25 11:45:38 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void imprimir_dia(int numero_dia)
{
    switch(numero_dia){
        case 1:
            write(1, "Lunes", 5);
            break;
        case 2:
            write(1, "Martes", 6);
            break;
        default:
            write(1, "Are you sure?",13);
    }   
}

int main()
{
    imprimir_dia(4);
}