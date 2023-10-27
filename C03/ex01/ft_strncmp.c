/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 23:46:13 by user              #+#    #+#             */
/*   Updated: 2023/10/27 10:43:23 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
        Reproduce el comportamiento de la función strncmp (man strncmp)

        La función strncmp compara los primeros n caracteres de las cadenas s1 y s2.
        Devuelve un entero menor que, igual a, o mayor que cero si s1 es, respectivamente,
        menor que, igual a, o mayor que s2.
        La comparación se realiza utilizando caracteres sin signo, por lo que '\200' es mayor que '\0'.
*/

int     ft_strncmp(char *s1, char *s2, unsigned int n)
{
        int i;
        unsigned int j;
        /*
                unsigned int n es un parámetro de la función ft_strncmp que indica el número máximo de caracteres que se deben comparar entre las cadenas s1 y s2. El tipo de datos unsigned int es un entero sin signo que solo puede tomar valores positivos o cero. En este caso, se utiliza para asegurarse de que el valor de n sea siempre positivo o cero, ya que no tendría sentido comparar un número negativo de caracteres.
        */

        i = 0;
        j = 0;
        while (s1[i] != '\0' && s2[j] != '\0' && j < n)
        {
                if (s1[i] != s2[j])
                        return (s1[i] - s2[j]);
                i++;
                j++;
        }
        if (j == n)
                return (0);
        return (s1[i] - s2[j]);
}
