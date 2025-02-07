#include<stdio.h>

void PrintArr(int arr[], int len);

int main(void)
{
    int arr1[5] = {1,2,3,4,5};
    int sum;
    sum = sum + arr1[0] + arr1[2] + arr1[4];
    arr1[4] = 10;
    printf("%d %d\n", sum, arr1[4]);


    // 获取变量内存地址
    int a = 10;
    printf("%p\n", &a); //000000000061FDFC
    int b = 20;
    int c = 30;
    printf("%p\n", &b); //000000000061FDF8
    printf("%p\n", &c); //000000000061FDF4
    //  整数类型占用四个字节

    printf("----------------------------\n");
    int arr2[] = {1,2,3,4,5};
    printf("%p\n", &arr2);
    printf("%p\n", &arr2[0]);
    printf("%p\n", &arr2[1]);
    printf("%p\n", &arr2[2]);
    printf("%d\n", sizeof(arr2));

    int arr2_total_size = sizeof(arr2);
    int arr2_single_size = sizeof(arr2[0]);
    int arr2_length = arr2_total_size / arr2_single_size;
    printf("arr2的长度是%d\n", arr2_length);

    int arr[] = {1,2,3,4,5};
    printf("%zu\n", sizeof(arr)); // %zu 打印arr的内存大小，单位为字节

    // 数组作为参数传递的时候，传递的是数组在内存中的首地址，也就是指针
    // 其大小在64位操作系统中固定为8bit
    // printf("%zu\n", sizeof(arr));
    // 'sizeof' on array function parameter 'arr' will return size of 'int *' [-Wsizeof-array-argument]
    // 如果要在函数中对数组进行遍历，要将数组的长度一同传递过去

    int arr_len = sizeof(arr) / sizeof(arr[0]);

    PrintArr(arr, arr_len);

    return 0;
}

void PrintArr(int arr[], int len)
{
    // printf("%zu\n", sizeof(arr));
    for(int i = 0; i < len; i++)
    {
        printf("%d\n", arr[i]);
    }
}