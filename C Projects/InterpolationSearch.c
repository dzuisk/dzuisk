#include <stdio.h>

int interpolationSearch(int arr[], int len, int num);

int main() {

    /*
    插值查找
    要求数据有序，且分布均匀
    满足要求时效率比二分查找快 否则反而更慢
    */
 
    int arr[] = {1, 23, 45, 67, 89, 100, 123, 145, 167, 189};
    int len = sizeof(arr) / sizeof(arr[0]);
    int num = 167;
    int index = interpolationSearch(arr, len, num);
    if (index == -1) {
        printf("NOT FOUND\n");
    }
    else {
        printf("索引为%d\n", index);
    }

    return 0;
}

int interpolationSearch(int arr[], int len, int num) {

    int min = 0;
    int max = len - 1;

    while(min <= max) {

        int mid = min + ((num - arr[min]) / (arr[max] - arr[min])) * (max - min);

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