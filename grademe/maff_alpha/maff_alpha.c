/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:56:02 by damateu-          #+#    #+#             */
/*   Updated: 2023/11/09 12:06:04 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    Write a program that displays the alphabet, with even letters in uppercase, and
odd letters in lowercase, followed by a newline.
*/

#include <unistd.h>

int main(void)
{
    char c;
    char d;

    c = 'a';
    d = 'B';
    while (c <= 'z' && d <= 'Z')
    {
        write(1, &c, 1);
        write(1, &d, 1);
        c += 2;
        d += 2;
    }
    write(1, "\n", 1);
    return (0);
}
