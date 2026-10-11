#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len) {
    for (size_t i = 0; i < len; i++) {
        printf(" %.2x", start[i]);
    }
    printf("\n");
}

void show_int(int x) {
    show_bytes((byte_pointer) &x, sizeof(int));
}

int main() {
    int x = 0x12345678;
    printf("show_int(0x12345678):");
    show_int(x);

    int (*fp)(int) = &show_int;
    printf("函数地址: %p\n", (void *)fp);

    return 0;
}
