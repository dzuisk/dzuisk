#include <stdio.h>

int main() {

    /*
    二分查找
    只需要数组有序
    */

    int arr[] = {1, 23, 45, 67, 89, 100, 123, 145, 167, 189};
    int len = sizeof(arr) / sizeof(arr[0]);

    int target = 0;

    int user_input = 0;
    scanf("%d", &user_input);

    int min = 0, max = len - 1, mid = 0;
    // printf("%d\n%d\n%d\n", min, max, mid);

    int found = 0;

    while(found = 0) {
        mid = (min + max) / 2;

        if (min == max) {
            printf("Not Found");
            break;
        }

        if(arr[mid] > user_input) {
            max = mid - 1;
        }

        else if (arr[mid] < user_input) {
            min = mid + 1;
        }

        else if (arr[mid] = user_input) {
            target = mid;
            found = 1;           
        }
    }

    printf("索引为%d", target);

    return 0;
}