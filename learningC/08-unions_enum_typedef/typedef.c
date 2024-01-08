// Typedef en C

// Typedef es una palabra reservada que permite crear un alias para un tipo de dato existente. Por ejemplo, si queremos crear un alias para el tipo de dato int, podemos hacerlo de la siguiente forma:

typedef int entero;

// De esta forma, podemos usar el alias entero en lugar de int:

#include <stdio.h>

typedef int entero;

int main()
{
    entero numero = 5;
    printf("Numero: %d", numero);
    return 0;
}

// Utilizando typedef estamos ensuciando el código, ya que estamos creando un alias para un tipo de dato que ya existe. Sin embargo, en algunos casos puede ser útil, por ejemplo, si queremos crear un alias para un tipo de dato que es muy largo, o si queremos crear un alias para un tipo de dato que es muy complejo, como un puntero a una función. 
