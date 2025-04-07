#include <stdio.h>

void swap(void* p1, void* p2, int len);

int main() {

    /*
        void类型指针
    */

    int a = 10;
    short b = 20;

    int* p1 = &a;
    short* p2 = &b;

    printf("%d\n", p1);
    printf("%d\n", p2);

    // char* p3 = p1;
    // 不同类型的指针之间不能互相赋值
    // void没有任何类型 可以接收任何类型的指针

    void* p3 = p1;
    void* p4 = p2;

    printf("%d\n", p3);
    printf("%d\n", p4);

    // 缺点：void类型指针无法获取变量中的数据 也无法进行加减运算

    int c = 100;
    int d = 200;

    swap(&c, &d, sizeof(c));

    printf("c = %d, d = %d\n", c, d);

    return 0;
}

// 通用的变量交换函数
void swap(void* p1, void* p2, int len) {
    // 将void指针转为char指针
    char* pc1 = p1;
    char* pc2 = p2;

    char temp = 0;

    // 以字节为单位，逐字节交换
    for(int i = 0; i < len; i++) {
        temp = *pc1;
        *pc1 = *pc2;
        temp = *pc2;

        pc1++;
        pc2++;
    }
}