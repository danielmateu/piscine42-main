// Write a program that displays "Hello world" followed by a \n

#include <unistd.h>

int main(){
    write(1, "Hello world!\n", 13);
    return (0);
}