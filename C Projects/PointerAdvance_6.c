#include <stdio.h>

int main() {
    /*
        arr参与计算时会退化为第一个元素的指针
        sizeof运算时不会退化 arr还是整体
        &arr获取地址的时候不会退化
    */

    int arr[] = {1,2,3,4,5,6,7,8,9,10};

    // &arr获取地址的时候不会退化，记录的内存地址是数组首地址，步长为 数据类型 * 数组长度 = 数组大小
    // arr参与计算时会退化为第一个元素的指针，记录的内存地址是数组首地址，步长为 数据类型
    
    printf("%p\n", arr);
    printf("%p\n", &arr);
    
    printf("%p\n", arr+1);
    printf("%p\n", &arr+1);

    return 0;
}