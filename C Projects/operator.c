#include<stdlib.h>
#include<stdio.h>

int main(void)
{
    int a = 1;
    int b = 2;
    int c = 3;

    int temp = a > b ? a : b;
    int max = temp > c ? temp : c;
    printf("%d\n", temp);
    printf("%d\n", max);

    int d,e,f;
    d = 1;
    e = 2;
    f = 3;
    e = 1, d = e, d = 4;
    printf("%d\n" ,d);

    int user_input;
    scanf("%d", &user_input);
    switch(user_input)
    {
        case 1: printf("跑步"); break;
        case 2: printf("游泳"); break;
        case 3: printf("慢走"); break;
        case 4: printf("动感单车"); break;
        case 5: printf("拳击"); break;
        case 6: printf("爬山"); break;
        case 7: printf("好好吃一顿"); break;
        default: printf("错啦"); break;
    }

    return 0;
}