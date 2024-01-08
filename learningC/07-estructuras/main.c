// Estructuras en C

// Las estructuras son un tipo de dato que nos permiten almacenar varios datos de distintos tipos en una misma variable.

// Las estructuras se declaran de la siguiente forma:

// struct nombre_estructura
// {
//     tipo1 nombre1;
//     tipo2 nombre2;
//     tipo3 nombre3;
//     ...
// };

// Ejemplo:

// struct persona
// {
//     char nombre[20];
//     int edad;
//     float altura;
// };

// Para acceder a los campos de una estructura se utiliza el operador punto (.)

// Cuando tengamos que pasar una estructura como parámetro a una función, lo haremos por valor, es decir, pasaremos una copia de la estructura.imprimir_datos(struct persona p)

#include <stdio.h>
#include <string.h>

struct cuenta
{
    char nombre[30];
    char apellido[40];
    int id;
    int saldo;
};

void imprimir_datos(struct cuenta *c)
{
    printf("%s %s, con DNI: %d tiene %d€ en su cuenta",
        c->nombre, c->apellido, c->id, c->saldo);
}

int main()
{
    struct cuenta dani = {"Daniel", "Mateu", 46410283, 1000};
    strcpy(dani.apellido, "Mateu Pardo");
    dani.saldo = 4000;

    imprimir_datos(&dani);
    return 0;
}