#include <stdio.h>

int main() {

    /*
    冒泡排序
    相邻元素两两比较，大的放右边，小的放左边
    每次比较完一轮，最大值已经确定，max-1
    数组有n个数据，只需执行n-1轮
    */
    
    // 优化建议：添加标志位，用于检测是否发生过交换
    //int swapped = 0;
    // 如果发生排序则置1 未发生排序则为0 提前退出 提高效率

    int arr[] = {3, 5, 2, 1, 4};
    int len = sizeof(arr)/ sizeof(arr[0]);


    for(int i = len - 1; i > 0; i--) {

        for (int j = 0; j < i; j++) {

            if (arr[j] > arr[j + 1]) {

                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
}