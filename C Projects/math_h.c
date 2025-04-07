#include <stdio.h>
#include <math.h>

int main() {

    const double M_PI = 3.14159265358979323846; // 定义圆周率常量
    
    // 1. pow 幂
    int pow1 = pow(2, 3); // 2^3 = 8
    printf("pow(2, 3) = %d\n", pow1);

    // 2. sqrt 平方根
    double sqrt1 = sqrt(16); // sqrt(16) = 4.0
    printf("sqrt(16) = %.2f\n", sqrt1);

    // 3. ceil 向上取整
    double ceil1 = ceil(3.2); // ceil(3.2) = 4.0
    printf("ceil(3.2) = %.2f\n", ceil1);

    // 4. floor 向下取整
    double floor1 = floor(3.8); // floor(3.8) = 3.0
    printf("floor(3.8) = %.2f\n", floor1);

    // 5. fabs 绝对值
    double fabs1 = fabs(-5.5); // fabs(-5.5) = 5.5
    printf("fabs(-5.5) = %.2f\n", fabs1);

    // 6. fmod 取模
    double fmod1 = fmod(5.5, 2.0); // fmod(5.5, 2.0) = 1.5
    printf("fmod(5.5, 2.0) = %.2f\n", fmod1);

    // 7. sin 正弦
    double sin1 = sin(M_PI / 2); // sin(π/2) = 1.0
    printf("sin(π/2) = %.2f\n", sin1);

    // 8. cos 余弦
    double cos1 = cos(M_PI); // cos(π) = -1.0
    printf("cos(π) = %.2f\n", cos1);

    return 0;
}