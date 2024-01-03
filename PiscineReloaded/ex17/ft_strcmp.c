

/* 
    Reproduce the behavior of the function strcpm

    Your function must be declared as follows:
    int ft_strcmp(char *s1, char *s2);

    
 */

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i] && s2[i] && s1[i] == s2[i])
        i++;
    return (s1[i] - s2[i]);
}

#include <stdio.h>

int main(void)
{
    char s1[] = "Hello Wor";
    char s2[] = "Hello Wor";

    printf("%d\n", ft_strcmp(s1, s2));
    return (0);
}