// #include <stdio.h>

// int main() {
//     // Prueba con un solo argumento
//     char *args1[] = {"./programa", "Hola"};
//     int argc1 = sizeof(args1) / sizeof(args1[0]);
//     ft_print_params(argc1, args1); // Debería imprimir "Hola"

//     // Prueba con múltiples argumentos
//     char *args2[] = {"./programa", "Hola", "mundo", "!", "Esto", "es", "una", "prueba"};
//     int argc2 = sizeof(args2) / sizeof(args2[0]);
//     ft_print_params(argc2, args2); // Debería imprimir "Hola", "mundo", "!", "Esto", "es", "una", "prueba"

//     // Prueba sin argumentos
//     char *args3[] = {"./programa"};
//     int argc3 = sizeof(args3) / sizeof(args3[0]);
//     ft_print_params(argc3, args3); // No debería imprimir nada

//     return 0;
// }