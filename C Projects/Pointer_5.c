#include <stdio.h>

int getReminder(int num1, int num2, int* res);

int main() {

    int a = 10;
    int b = 3;
    int res = 0;

    int flag = getReminder(a, b, &res); // flag记录状态

    // 对状态进行判断
    if (!flag) { // 对flag取反 非0为真 执行语句
        printf("获取到的余数为：%d\n", res);
    }
    return 0;
}

// 返回值：表示计算的状态 0为正常 -1为异常
int getReminder(int num1, int num2, int* res) {
    if (num2 == 0) {
        return -1;
    }
    *res = num1 % num2; // 对res解运算
    return 0;
}