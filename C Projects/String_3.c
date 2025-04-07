#include <stdio.h>
#include <string.h>

int main() {

    char* str1 = "abc";
    char str2[100] = "abc";
    char str3[5] = {'q', 'w', 'e', 'r', '\0'};

    // strlen 长度
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int len3 = strlen(str3);

    printf("%d %d %d\n", len1, len2, len3); // 3 15 4


    // strcat 拼接

    // strcat(str2, str3);
    // printf("%s %s\n", str2, str3);

    // 把第二个字符串中的所有内容 拼接到第一个字符串的末尾
    // 前提是第一个字符串可以被修改 且剩余的空间能够容纳第二个字符串


    // strcpy 复制
    // strcpy(str2, str3);
    // printf("%s %s\n", str2, str3);

    // 把第二个字符串中的内容 拷贝到第一个字符串中并覆盖
    // 前提是第一个字符串可以被修改 且第一个字符串的空间可以容纳第二个字符串

    // strcmp 比较
    // 完全一样：0 顺序内容完全一致
    // 不一样：非0

    // int res = strcmp(str1, str2);
    // printf("%d", res);

    // strlwr 所有字符换为小写
    // struwr 所有字符换为大写 只能转换英文

    _strlwr(str2);
    printf("%s\n", str2);

    _strupr(str2);
    printf("%s\n", str2);
    
    return 0;
}