#include <stdio.h>

int* method();

int main() {

    // 调用method函数，使用函数中的变量a
    int* p = method(); // method函数结束后所有非static变量都会释放
    printf("%d", *p);
}

int* method() {
    static int a = 10;
    return &a;
}