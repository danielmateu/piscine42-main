// Escribe una función que intercambie los contenidos de dos enteros, cuyas direcciones se pasan como parámetros. Tu función debe declararse de la siguiente manera: void ft_swap(int *a, int *b);

#include <unistd.h>

void ft_swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}