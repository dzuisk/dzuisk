#include <stdio.h>

int main() {

    char strArr[5][100] = { // 二维数组
        "jianbao",
        "xunxingye",
        "dong",
        "dzu",
        "computer academy"
    };

    // 遍历
    for(int i = 0; i < 5; i++) {
        char* str = strArr[i];
        printf("%s\n", str);
    }

    char* strArr2[5] = { // 指针数组
        "jianbao",
        "xunxingye",
        "dong",
        "dzu",
        "computer academy"
    };

    for(int i = 0; i < 5; i++) {
        char* str = strArr2[i];
        printf("%s\n", str);
    }


    return 0;
}