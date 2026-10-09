#include <stdio.h>

int main() {
    unsigned int x = 0x12345678;
    unsigned char *p = (unsigned char *)&x;

    printf("x = 0x%X\n", x);
    printf("内存里逐字节看：\n");
    for (int i = 0; i < 4; i++) {
        printf("  第 %d 字节: 0x%02X\n", i, p[i]);
    }

    if (p[0] == 0x78) {
        printf("→ 小端 (little-endian)\n");
    } else if (p[0] == 0x12) {
        printf("→ 大端 (big-endian)\n");
    }

    return 0;
}
