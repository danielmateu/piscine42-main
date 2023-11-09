// Reproduce el comportamiento de la funcion strcmp. Tu funcion debe ser declarada de la siguiente manera: int ft_strcmp(char *s1, char *s2);

#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
    {
        i++;
    }
    return (s1[i] - s2[i]);
}

int main()
{
    char s1[] = "Hola";
    char s2[] = "Hola";
    printf("%d\n", ft_strcmp(s1, s2));
    return (0);
}