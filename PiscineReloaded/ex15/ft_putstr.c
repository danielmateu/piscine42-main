

/*
    Create a function that displays a string of characters on the standard output.

    Here's how it should be prototyped:

    void ft_putstr(char *str);
*/

// #include <unistd.h>

void ft_putchar(char c);

void ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
}

/*
#include <stdio.h>

int main(void)
{
    char str[] = "Hello World!";

    ft_putstr(str);
    return (0);
}
*/
