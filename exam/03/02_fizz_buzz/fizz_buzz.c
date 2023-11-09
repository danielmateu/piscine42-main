/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizz_buzz.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:03:00 by damateu-          #+#    #+#             */
/*   Updated: 2023/11/09 15:22:36 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    Escribe un programa que imprima una secuencia de números del 1 al 100 en la salida estándar, todos separados por una nueva línea.

Si el número es múltiplo de 3, el programa debe escribir 'fizz' en su lugar.

Si el número es múltiplo de 5, el programa debe escribir 'buzz' en su lugar.

Si el número es múltiplo de 3 y múltiplo de 5, el programa debe escribir 'fizzbuzz' en su lugar.
*/

#include <unistd.h>

void ft_write_numbers(int n){
    if(n == 0){
        write(1, "0", 1);
        return;
    }
    else if(n < 0){
        write(1, "-", 1);
        n = -n;
    }

    if(n > 9){
        ft_write_numbers(n / 10);
    }
    write(1, &"0123456789"[n % 10], 1);
}

int main(void){
    int n;

    n = 1;
    while(n <= 100){
        if (n % 3 == 0 && n % 5 == 0){
            write(1, "fizzbuzz", 8);
        }
        else if (n % 3 == 0){
            write(1, "fizz", 4);
        }
        else if (n % 5 == 0){
            write(1, "buzz", 4);
        }
        else{
            ft_write_numbers(n);
        }
        write(1, "\n", 1);
        n++;
    }
}