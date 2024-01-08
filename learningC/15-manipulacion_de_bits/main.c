#include <stdio.h>

int main()
{
    unsigned char a = 185, b = 42;

    printf("a = %u\n", a);
    printf("b = %u\n", b);

    // NOT(x)
    // not de foo
    // foo = ~foo;
    printf("el not de a = %u\n", (unsigned char)~a);
    // imprimir el not de foo

    //  AND(x, y)
    // and de foo
    // foo = foo & 0x0F;
    printf("a AND b = %u\n", (unsigned char)(a & b));

    // OR(x, y)
    // or de foo
    // foo = foo | 0x0F;
    printf("a OR b = %u\n", (unsigned char)(a | b));

    // XOR(x, y)
    // xor de foo
    // foo = foo ^ 0x0F;
    printf("a XOR b = %u\n", (unsigned char)(a ^ b));
}