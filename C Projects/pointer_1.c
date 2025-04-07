#include <stdio.h>

int main() {

    // 获取变量的内存地址
    int a = 10;
    printf("%p\n", &a); // 打印变量 a 的内存地址

    int b = 20;
    int c = 30;
    printf("%p\n", &b); // 打印变量 b 的内存地址
    printf("%p\n", &c); // 打印变量 c 的内存地址

    return 0;
}