// Write a program that displays a 'a' character on the standard output.

#include <unistd.h>

int main (void){
    char c = 'a';
    write(1, &c, 1);
    return (0);
}