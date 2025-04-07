#include <stdio.h>

void method();
int method2();

int main() {

    /*
        函数指针
    */

    void (*p1)() = method;
    int (*p2)(int, int) = method2;

    // 利用函数指针调用函数
    p1();
    int num = p2(10, 20);
    printf("%d\n", num);

    return 0;
}

void method() {
    printf("method\n");
}

int method2(int num1, int num2) {
    printf("method2\n");
    return num1 + num2;
}