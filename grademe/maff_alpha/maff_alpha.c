/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:56:02 by damateu-          #+#    #+#             */
/*   Updated: 2023/11/09 13:51:10 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    Write a program that displays the alphabet, with even letters in uppercase, and
odd letters in lowercase, followed by a newline.
*/

#include <unistd.h>

/*

Hard way

int main(void) {
    char c = 'a';
    int i = 1;
    char output;

    while (c <= 'z') {
        if (i % 2 == 0) {
            output = c - 32;
        } else {
            output = c;
        }
        write(1, &output, 1);
        c++;
        i++;
    }

    return 0;
}
*/

/* Easy way*/

int main(void) {
    write(1, "aBcDeFgHiJkLmNoPqRsTuVwXyZ\n", 27);
    return 0;
}
