#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len) {
    for (size_t i = 0; i < len; i++) {
        printf(" %.2x", start[i]);
    }
    printf("\n");
}

int main() {
    char *s = "hello";
    printf("字符串: %s\n", s);
    printf("字节: ");
    show_bytes((byte_pointer) s, 6);
    printf("长度: %zu\n", sizeof("hello"));

    return 0;
}
