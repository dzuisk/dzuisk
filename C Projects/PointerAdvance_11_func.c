#include <stdio.h>

int calculate_addition (int num1, int num2);
int calculate_subtraction (int num1, int num2);
int calculate_multipation (int num1, int num2);
int calculate_division (int num1, int num2);
int calculate(int num1, int num2, int type);

int main() {

    int num1 = 20;
    int num2 = 10;
    int type = 0;
    scanf("%d", &type);
    int result = calculate(num1, num2, type);
    printf("%d\n", result);
    return 0;
}

int calculate(int num1, int num2, int type) {

    // if(type == 1) {return calculate_addition(num1, num2);}
    // if(type == 2) {return calculate_subtraction(num1, num2);}
    // if(type == 3) {return calculate_multipation(num1, num2);}
    // if(type == 4) {return calculate_division(num1, num2);}

    // 函数指针数组
    // 形参完全相同 返回值完全相同的函数 才能放到同个函数指针数组中
    int (*arr[4])(int, int) = {calculate_addition, calculate_subtraction, calculate_multipation, calculate_division};
    int result = (arr[type - 1])(num1, num2);
    return result;
}

int calculate_addition (int num1, int num2) {
    return num1 + num2;
}

int calculate_subtraction (int num1, int num2) {
    return num1 - num2;
}

int calculate_multipation (int num1, int num2) {
    return num1 * num2;
}

int calculate_division (int num1, int num2) {
    return num1 / num2;
}