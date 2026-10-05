#include <stdio.h>

int main() {
    unsigned int a = 5;
    unsigned int b = 3;

    printf("a & b  = %u\n", a & b);
    printf("a | b  = %u\n", a | b);
    printf("a ^ b  = %u\n", a ^ b);
    printf("~a     = %u\n", ~a);
    printf("a << 1 = %u\n", a << 1);
    printf("a >> 1 = %u\n", a >> 1);

    int x = -1;
    printf("x          = %d\n", x);
    printf("(unsigned)x = %u\n", (unsigned)x);

    return 0;
}
