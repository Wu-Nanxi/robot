#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len) {
    for (size_t i = 0; i < len; i++) {
        printf(" %.2x", start[i]);
    }
    printf("\n");
}

void myfunc() {
    printf("hello\n");
}

int main() {
    printf("myfunc 的机器码: ");
    show_bytes((byte_pointer) myfunc, 20);
    return 0;
}
