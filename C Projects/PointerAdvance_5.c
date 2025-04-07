#include <stdio.h>

int main() {

    /*
        利用指针遍历数组
    */

    int arr[] = {10,20,30,40,50};
    int len = sizeof(arr) / sizeof(arr[0]);

    // 获取数组的首地址
    int* p1 = arr; // 一般用这种
    int* p2 = &arr[0];

    printf("%p %p\n", p1, p2);

    for(int i = 0; i < len; i++) {
        printf("%d ", *p1);
        p1++;
    }
    printf("\n");
}