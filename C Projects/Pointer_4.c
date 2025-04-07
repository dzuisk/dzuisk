#include <stdio.h>

void getMaxAndMin(int arr[], int len, int* max, int* min);

int main() {

    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int len = sizeof(arr)/ sizeof(arr[0]);

    int max = arr[0];
    int min = arr[0];

    getMaxAndMin(arr, len, &max, &min);

    printf("最大值：%d\n", max);
    printf("最小值：%d\n", min);

    return 0;
}

void getMaxAndMin(int arr[], int len, int* max, int* min) {

    // 求最大
    *max = arr[0];
    for (int i = 1; i < len; i++) {
        if (arr[i] > *max) {
            *max = arr[i];
        }
    }

    // 求最小
    *min = arr[0];
    for (int i = 1; i < len; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        }
    }
}