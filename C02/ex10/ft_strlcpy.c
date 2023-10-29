/*
    Reproduce el comportamiento de la funcion strlcpy.
*/

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    unsigned int src_len;

    i = 0;
    src_len = 0;
    while (src[src_len] != '\0')
    {
        src_len++;
    }

    while (src[i] != '\0' && i < size - 1)
    {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0';

    return (src_len);  
}
