// Crea una funcion que devuelva 1 si el string usado como parametro contiene unicamente digitos y devuelva 0 si contiene otro tipo de caracteres

// Tendra que devolver 1 si str es un string vacio

int ft_str_is_numeric(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] < '0' || str[i] > '9')
        {
            return (0);
        }

        i++;
    }
    return (1);
}

#include <stdio.h>

int main(void)
{
    char str[] = "123456789A";
    printf("%d", ft_str_is_numeric(str));
    return (0);
}