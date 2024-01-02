/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 15:45:52 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/02 16:31:47 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
    Create a function that takes a pointer to int as a parameter, and sets the value '42' to that int.
    Here's how it should be prototyped :
    void ft_ft(int *nbr);
 */

void ft_ft(int *nbr)
{
    *nbr = 42;
}   

/* int main(void)
{
    int a;
    int *ptr;

    a = 0;
    ptr = &a; // ptr now points to the memory location of a
    ft_ft(ptr); // call the function with ptr as argument

    return 0;
} */




