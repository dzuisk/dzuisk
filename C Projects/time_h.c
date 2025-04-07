#include <stdio.h>
#include <time.h>

int main() {
    
    // time() 获取当前时间戳
    // 形参：表示当前获取到的时间是否需要在其他地方进行存储
    //       一般来说，我们不需要存储当前时间戳，所以传入 NULL
    // 返回值：long long

    long long res = time(NULL); // 获取当前时间戳
    printf("当前时间戳：%lld\n", res);

    return 0;
}