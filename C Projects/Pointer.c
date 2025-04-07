#include <stdio.h>

int main() {

    int a = 10;
    int* p = &a; // 此处*为标记 说明此变量为指针变量 存储内存地址

    printf("%d %p", a, p);
    printf("%d\n", *p); // 此处*为解引用运算符

    *p = 200; // 通过指针修改数据
    printf("%d\n", a);

    char c = 'a';
    char* p1 = &c;
    
    long long n = 100;
    long long* p2 = &n;

    printf("%zu\n", sizeof(p1));
    printf("%zu\n", sizeof(p2));

    // 指针变量占用的内存大小和数据类型无关 和编译器有关
    // x86编译器中指针变量占用4字节 x64编译器中指针变量占用8字节

    // 不能把数值赋值给指针变量

    return 0;
}