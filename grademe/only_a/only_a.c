/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   only_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:58:13 by damateu-          #+#    #+#             */
/*   Updated: 2023/11/09 13:59:34 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    Write a program that displays a 'a' character on the standard output.
*/

#include <unistd.h>

int main(void){
    write(1, "a", 1);
    return 0;
}