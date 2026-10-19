#include <stdio.h>
#include <limits.h>

int main() {
    printf("===== 整型大小 =====\n");
    printf("sizeof(char)        = %zu 字节\n", sizeof(char));
    printf("sizeof(short)       = %zu 字节\n", sizeof(short));
    printf("sizeof(int)         = %zu 字节\n", sizeof(int));
    printf("sizeof(long)        = %zu 字节\n", sizeof(long));

    printf("\n===== 极值 =====\n");
    printf("INT_MAX             = %d\n", INT_MAX);
    printf("INT_MIN             = %d\n", INT_MIN);
    printf("UINT_MAX            = %u\n", UINT_MAX);

    printf("\n===== 无符号编码验证 =====\n");
    unsigned char x = 178;   // 二进制 1011 0010
    printf("x 的十进制          = %u\n", x);
    printf("x 的十六进制        = 0x%02X\n", x);

    return 0;
}	
