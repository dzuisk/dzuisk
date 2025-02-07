#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
    // int arr[] = {33,5,22,44,55};
    // // 求最大值值，max必须是0索引
    // // 不能是0，防止数组都为负数导致结果是0
    // int max = arr[0];
    // int len = sizeof(arr)/sizeof(arr[0]);
    // for(int i = 1; i < len; i++)
    // {
    //     if(max<arr[i])
    //     {
    //         max = arr[i];
    //     }
    // }
    // printf("%d\n", max);

    // srand(time(NULL));
    // int arr[10] = {};
    // for(int i = 0; i < 10; i++)
    // {
    //     arr[i] = rand()%100+1;
    //     printf("%d\t", arr[i]);
    // }
    // int sum = 0;
    // for(int i = 0; i < 10; i++)
    // {
    //     sum += arr[i];
    // }
    // printf("%d\n",sum);
    // // 求平均数和统计比平均数小的数的个数
    // int len = sizeof(arr)/sizeof(arr[0]);
    // int average = sum / len;
    // int count = 0;
    // for(int i = 0; i < 10; i++)
    // {
    //     if(arr[i]<average)
    //     {
    //         count++;
    //     }
    // }
    // printf("%d\t%d", average, count);

    int arr[5] = {};
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < 5; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    // 定义第二个数组
    int arr2[5] = {};
    for(int i = 0; i < 5; i++)
    {
        int temp = 0;
        temp = arr[i];
        arr2[4-i] = temp;
    }
    for(int i = 0; i < 5; i++)
    {
        printf("%d\t", arr2[i]);
    }
    printf("\n");
    // 反转原数组
    int len = sizeof(arr)/sizeof(arr[0]);
    int i = 0;
    int j = len - 1;
    while(i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    for(int i = 0; i < 5; i++)
    {
        printf("%d\t", arr[i]);
    }
    
    
    return 0;
}
