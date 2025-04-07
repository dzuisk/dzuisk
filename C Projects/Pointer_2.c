#include <stdio.h>

void swap(int num1, int num2);
void swapPointer(int* p1, int* p2);

int main() {

    /*
    定义两个变量 交换变量中记录的值
    交换的代码在一个新的函数swap中
    */

    int a = 10;
    int b = 20;

    printf("调用前：%d %d\n", a, b);
    swap(a, b); // 仅仅把a和b中的值传递过去
    printf("调用后：%d %d\n", a, b);

    printf("调用前：%d %d\n", a, b);
    swapPointer(&a, &b); // 传递a b的指针
    printf("调用后：%d %d\n", a, b); // 此时变量a b成功交换数值

    return 0;
}

void swap(int num1, int num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

void swapPointer(int* p1, int* p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}