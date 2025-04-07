#include <stdio.h>

int main() {

    /*
        二级指针
            格式： 数据类型** 指针名
    */

    int a = 10;
    int b = 20;
    int* p = &a;

    // 作用一：利用二级指针修改一级指针记录的内存地址
    int** pp = &p;
    *pp = &b; // 将p指向b

    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p\n", p);

    // 作用二：利用二级指针获取变量中记录的数据
    printf("%d\n", **pp);


    return 0;
}