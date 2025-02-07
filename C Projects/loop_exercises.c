#include<stdio.h>

int main(void)
{
    // int user_input;
    // scanf("%d", &user_input);
    /*
    0 1
    1 2
    2 4
    4 8
    5 16
    6 32
    */
    // int last;
    // for(int i = 0; i <50; i++)
    // {
    //     for(int j = i; j>1; j--)
    //     {
    //         user_input = user_input/2;
    //         if(user_input == 1)
    //         {
    //             printf("是");
    //             break;
    //         }
    //     }        
    // }
    // int num = 10;
    // while(num > 1 && num % 2 == 0)
    // {
    //     num = num / 2;
    // }
    // if(num == 1)
    //     printf("是\n");
    // else
    //     printf("不是\n");
    
    // double a = 0.1;
    // int count;
    // while(a<8844430)
    // {
    //     a = a * 2;
    //     count ++;
    // }
    // printf("%d", count);

    int num = 1234321;
    int res = 0, count = 0;
    int num1 = num;
    int tenth = 1, tenth1 = 1;
    while(num1 != 0)
    {
        int temp = num1 % 10;
        num1 = num1 / 10;
        res = res * 10 + temp;
    }
    printf("%d", res);
    // res的第i位 和 num的后i位
    for(int i = count; count > 0; count --)
    {
        int count1 = i - count;
        for(int i = count; i>0; i--){tenth = tenth * 10;}
        for(int i = count1; i>0; i--){tenth1 = tenth1 * 10;}
        if(num % tenth == res / tenth1)
        {
            printf("是");
        }
    }
    int number = 1234321;
    int rev[7];

}
