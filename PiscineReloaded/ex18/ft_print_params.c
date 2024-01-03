

/*
    Create a program that displays its given arguments

    Example:

    $>./a.out test1 test2 test3
    test1
    test2
    test3
    $>
 */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
}

int     main(int argc, char **argv)
{
    int i;

    i = 1;
    while (i < argc)
    {
        ft_putstr(argv[i]);
        ft_putchar('\n');
        i++;
    }
    return (0);
}

// Test 1

// $>./a.out test1 test2 test3




