


#include <stdio.h>

int main() {
    printf("char      = %zu 字节\n", sizeof(char));
    printf("short     = %zu 字节\n", sizeof(short));
    printf("int       = %zu 字节\n", sizeof(int));
    printf("long      = %zu 字节\n", sizeof(long));
    printf("long long = %zu 字节\n", sizeof(long long));
    printf("float     = %zu 字节\n", sizeof(float));
    printf("double    = %zu 字节\n", sizeof(double));
    printf("指针      = %zu 字节\n", sizeof(void *));

    return 0;
}
