#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    // 随机数
    // 1.设置种子
    srand(time(NULL));
    // 2.获取随机值
    int num = rand();
    printf("%d\n", num);

    int num1 = rand() % 100 + 1; // 1 ~ 100
    int num2 = rand() % 17 + 7; // 7 ~ 23
    // rand() % a + b -> b ~ a+b-1

    int user_input;
    while(1)
    {
        scanf("%d", &user_input);
        if(user_input>num)
        {
            printf("大了");
        }
        else if(user_input < num)
        {
            printf("小了");
        }
        else
        {
            printf("对咯");
            break;
        }
    }


    return 0;
}