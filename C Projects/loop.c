#include<stdio.h>

int main(void)
{
    int i;
    int sum = 0;
    for(i=1;i<=5;i++)
    {
        sum += i;
    }
    printf("%d\n", sum);
    int a;
    for(a=5;a>=1;a--)
    {
        printf("%d\n", a);
    }
    int summary = 0;
    for(int num = 0; num<=100; num+=2)
    {
        summary += num;
    }
    printf("%d\n", summary);
    return 0;
}