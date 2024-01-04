

/*
    Create an iterated function that returns a number. This number is the result of a
factorial operation based on the number given as a parameter.
    
    If there’s an error, the function should return 0.
    
    Here’s how it should be prototyped :
        int ft_iterative_factorial(int nb);
*/

#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    int i;
    int result;

    i = 1;
    result = 1;
    if (nb < 0)
        return (0);
    while (i <= nb)
    {
        result *= i;
        i++;
    }
    return (result);
}

int main (void)
{
    printf("%d\n", ft_iterative_factorial(20));
    return (0);
}
