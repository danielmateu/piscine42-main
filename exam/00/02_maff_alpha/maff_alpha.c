// Write a program that displays the alphabet, with even letters in uppercase, and odd letters in uppercase, followed by a new line

#include <unistd.h>

int main(){
    write(1, "aBcDeFgHiJkLmNoPqRsTuVwXyZ\n", 27);
    return (0);
}