// La memoria es el recurso más importante de un programa.
// Necesitamos saber cómo se asigna y libera la memoria.

// Cuando creamos una variable, el compilador reserva un espacio en memoria para almacenarla.

// Las variables las declararemos al principio de cada función, antes de cualquier otra instrucción.

// La declaración de una variable consta de dos partes:

// El tipo de dato de la variable.
// El nombre de la variable.

// Ejemplo:

// int numero;
// char letra;
// float decimal;

#include <stdio.h>

// Parametros en funciones
void imprimir_datos(int edad, char* nombre)
{
    printf("Hola, tu nombre es %s y tienes %i años", nombre, edad);
}

int main()
{
    // Declaración de variables. Un caracter y un numero entero
    char c;
    int n;
    
    // Tipos de dato int:
    // short: 16 bits
    // int: 32 bits
    // long: 64 bits
    // unsigned: sin signo utiliza todos los bits para almacenar el valor

    // Asignamos el valor a las variables
    c = 'A';
    n = 65;
    int z = 2 * n;
    // Placeholder. Debemos indicar el tipo de dato que queremos imprimir
    printf("El valor de c es %c y z = %i\n", c, z);

    imprimir_datos(25, "Dani");

}   