/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 15:54:51 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/04 15:57:56 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
    Create a file ft_point.h that will compile the following main:

    #include "ft_point.h"
    void set_point(t_point *point)
    {
        point->x = 42;
        point->y = 21;
    }

    int main(void)
    {
        t_point point;
        set_point(&point);
        return (0);
    }
*/

#ifndef FT_POINT_H
# define FT_POINT_H

typedef struct s_point
{
    int x;
    int y;
}   t_point;

#endif

