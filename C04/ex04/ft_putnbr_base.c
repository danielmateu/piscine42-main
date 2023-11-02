/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:20:01 by damateu-          #+#    #+#             */
/*   Updated: 2023/11/02 15:00:35 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    Escribe una funcion que muestre un numero en la terminal en una base determinada.

    Se proporciona este numero en forma de un int y la base en forma de un string.

    La base contiene todos los simbolos que se pueden utilizar para mostrar el numero

    0123456789 es la base que se suele utilizar para representar los 'numeros decimales'
    01 es la base binaria
    0123456789ABCDEF para hexadecimal
    poniguay es una base octal

    La funcion debe gestionar numeros negativos.

    Si un parametro contiene un error la funcion no muestra nada. Un error puede ser:
    - la base esta vacia o su tamañao es 1
    -las base contiene dos veces el mismo caracter
    -el numero contiene el caracter + o -.

    El prototipo de la funcion es el siguiente:
    void ft_putnbr_base(int nbr, char *base);
*/

#include <unistd.h>

/**
 * The function ft_strlen calculates the length of a string by iterating through each character until
 * it reaches the null terminator.
 * 
 * @param str The parameter "str" is a pointer to a character array (or string) that we want to find
 * the length of.
 * 
 * @return The function ft_strlen is returning the length of the string passed as an argument.
 */
int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return i;
}

int check_base(char *base)
{
    int i;
    int j;

    if (base[0] == '\0' || base[1] == '\0')
        return (0);
    i = 0;
    while (base[i])
    {
        if (base[i] == '+' || base[i] == '-')
            return (0);
        j = i + 1;
        while (base[j])
        {
            if (base[i] == base[j])
                return (0);
            j++;
        }
        i++;
    }
    return (1);
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr_base(int nbr, char *base)
{
    long nb;
    int size;

    nb = nbr;
    if (check_base(base))
    {
        if (nb < 0)
        {
            ft_putchar('-');
            nb = -nb;
        }
        size = ft_strlen(base);
        if (nb >= size)
            ft_putnbr_base(nb / size, base);
        ft_putchar(base[nb % size]);
    }
}

/*
    Main

    
*/

int main(void)
{
    ft_putnbr_base(42, "0123456789");
    ft_putchar('\n');
    ft_putnbr_base(42, "0123456789ABCDEF");
    
    
}


