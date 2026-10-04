# CSAPP 第 1 章
- 编译四阶段：预处理 → 编译 → 汇编 → 链接
- gcc -E hello.c -o hello.i   # C 源码
- gcc -S hello.i -o hello.s   # 汇编代码
- gcc -c hello.s -o hello.o   # ELF relocatable
- gcc hello.o -o hello        # ELF executable
- ./hello 输出 hello, system
- relocatable vs executable
