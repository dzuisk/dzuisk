#include<stdio.h>
#include<time.h>

int main(void)
{
    // int count = 0;
    // for(int i = 1; i < 100; i++)
    // {
    //     if(i%5==0 && i%3==0)
    //     {
    //         printf("%d\n", i);
    //         break;
    //     }
    // }
    // for(int i = 1; i <= 9; i++)
    // {
    //     for(int j = 1; j <= i; j++)
    //     {
    //         printf("%d*%d=%d\t", i, j, i*j);
    //     }
    //     printf("\n");
    // }
    // printf("name\t\tage\tgender\thobby\t\nzhangsan\t23\t男\t篮球\t\n");

    // int num = 100;
    // long long sum = 0;
    // for(int i = 1; i <= 10; i++)
    // {
    //     long long temp = 1;
    //     for(int j = 1; j <= i; j++)
    //     {
    //         temp = temp * i;
    //     }
    //     sum += temp;       
    // }
    // printf("%lld", sum);

    // 123 -> 321

    // int num1 = 123456;
    // int result = 0;
    // int origin = num1;
    // int i = 0;
    // while(num1>=0 && num1<10)
    // {
    //     result = result * 10 + num1 % 10;
    //     num1 = num1 / 10;
    //     i++;
    // }
    // if(origin == result)
    // {
    //     printf("1");
    // }
    // printf("%d", result);

    // int num = 10086;
    // int i = 1;
    // int result;
    // while(i * i <= num)
    // {
    //     i++;
    // }
    // result = i - 1;
    // printf("%d", result);

    // int i = 0;
    // int num = 0;
    // for(i; i<1000; i++)
    // {
    //     // 获取当前位数
    //     int j = 0;
    //     int temp = i;
    //     while(temp > 0)
    //     {
    //         temp = temp / 10;
    //         j++;
    //     }

    //     int sum = 0;
    //     temp = i;
    //     for(int k = 0; k < j; k++)
    //     {
    //         sum = sum + temp % 10;
    //         temp = temp / 10;
    //     } 
    //     if(sum == 15)
    //     {
    //         num++;
    //         printf("%d\t", i);
    //         if(num % 8 == 0)
    //         {
    //             printf("\n");
    //         }
    //     }
    // }
    // printf("%d\n", num);

    // int i = 0;
    // int num = 0;
    // for (i = 0; i < 1000; i++) {
    //     // 获取当前位数
    //     int j = 0;
    //     int temp = i; // 使用临时变量，避免修改 i
    //     while (temp > 0) {
    //         j++;
    //         temp /= 10;
    //     }

    //     int sum = 0;
    //     temp = i; // 重置临时变量
    //     for (int k = 0; k < j; k++) {
    //         sum += temp % 10; // 累加各位数字
    //         temp /= 10;
    //     }

    //     if (sum == 15) {
    //         num++;
    //     }
    // }
    // printf("%d\n", num);

    // goto：结合标号可以跳转到程序的任意位置
    //       一般只用于跳出循环嵌套

    return 0;
}
