#include <stdio.h>

int main() {
    unsigned char a = 0x0F;   // 0000 1111 (15)
    
    // 左移
    printf("a << 1 = 0x%02X\n", (unsigned char)(a << 1));
    printf("a << 2 = 0x%02X\n", (unsigned char)(a << 2));

    // 右移
    printf("a >> 1 = 0x%02X\n", a >> 1);
    printf("a >> 2 = 0x%02X\n", a >> 2);

    // 负数右移（看最高位补什么）
    signed char b = -16;      // 1111 0000
    printf("b       = %d\n", b);
    printf("b >> 2  = %d\n", b >> 2);

    return 0;
}
