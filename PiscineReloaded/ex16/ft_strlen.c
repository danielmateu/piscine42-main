

/* 
    Reproduce the behavior of the function strlen.

    It will have to return the number of characters found in the string passed as parameter.

    Your function will be prototyped as follows:
        int ft_strlen(char *str);
 */

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

#include <stdio.h>

int main(void)
{
    char str[] = "Hello World!";

    printf("%d\n", ft_strlen(str));
    return (0);
}
