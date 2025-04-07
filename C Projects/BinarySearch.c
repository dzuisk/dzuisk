#include <stdio.h>

int binarySearch(int arr[], int len, int num);

int main() {

    /*
    二分查找
    只需要数组有序
    变量名也可以是 left 和 right
    */ 

    int arr[] = {1, 23, 45, 67, 89, 100, 123, 145, 167, 189};
    int len = sizeof(arr) / sizeof(arr[0]);
    int num = 167;
    int index = binarySearch(arr, len, num);
    if (index == -1) {
        printf("NOT FOUND\n");
    }
    else {
        printf("索引为%d\n", index);
    }

    return 0;
}

int binarySearch(int arr[], int len, int num) {

    int min = 0;
    int max = len - 1;

    while(min <= max) {

        int mid = (min + max) / 2;

        if (arr[mid] < num) {
            min = mid + 1;
        }
        
        else if (arr[mid] > num) {
            max = mid - 1;
        }
        else {
            return mid;
        }
    }

    return -1;
}