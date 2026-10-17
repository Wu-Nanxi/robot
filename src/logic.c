#include <stdio.h>

int main() {
    int a = 5;   // 二进制 0101
    int b = 3;   // 二进制 0011
    int c = 0;   // 假

    printf("a & b  = %d\n", a & b);   // 位运算：0101 & 0011 = 0001 = 1
    printf("a && b = %d\n", a && b);  // 逻辑运算：非0 && 非0 = 1
    
    printf("a | b  = %d\n", a | b);   // 位运算：0101 | 0011 = 0111 = 7
    printf("a || b = %d\n", a || b);  // 逻辑运算：非0 || 非0 = 1

    printf("!a     = %d\n", !a);      // 逻辑非：非0变0
    printf("!c     = %d\n", !c);      // 逻辑非：0变1

    return 0;
}
