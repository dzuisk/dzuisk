#include <stdio.h>

int main() {

    /*
        二维数组
    */

    int arr_1[4][5] = { // arr[m][n]；m = 二维数组的长度；n = 一维数组的长度
        {1,2,3,4,5},
        {11,22,33,44,55},
        {111,222,333,444,555},
        {1111,2222,3333,4444,5555}
    };

    // for循环遍历
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%d ", arr_1[i][j]);
        }
    }
    
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {1,2,3,4,5,6,7};
    int arr3[] = {1,2,3,4,5,6,7,8,9};

    int len1 = sizeof(arr1) / sizeof(arr1[0]);
    int len2 = sizeof(arr2) / sizeof(arr2[0]);
    int len3 = sizeof(arr3) / sizeof(arr3[0]);

    int lenArr[3] = {len1, len2, len3};

    // 数组的数据类型 和内部存储的元素类型保持一致
    // 这里arr1等作为数组的元素 退化为数组指针
    // 所以外层数组的类型 需要是指针
    // 此时数组也就是指针数组
    int* arr[3] = {arr1, arr2, arr3};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < lenArr[i]; j++) {
            printf("%d ", arr[i][j]);
        }       
    }
    
    return 0;
}