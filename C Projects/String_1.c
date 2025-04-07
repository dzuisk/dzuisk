#include <stdio.h>

int main() {

    char str1[4] = "abc"; // {'a', 'b', 'c', '\0'}
    printf("%s\n", str1);
    
    char* str2 = "abcd"; // 不可修改 可以复用
    char* str3 = "abcd"; // str3的内容和str2一致 发生复用 内存地址相同
    // 复用过程：检查只读常量区里有无abcd，若无则创建新的，有则直接复用
    printf("%p %p\n", str2, str3);

    // 遍历字符串

    char str4[100];
    // 创建一个长度为100的字符数组str4
    scanf("%s", str4);
    // 把键盘录入的每一个字符存入数组str4中，并加上结束标记\0
    // 在这个过程中需要修改字符数组的内容
    printf("%s\n", str4);

    // 遍历字符串

    char *p = str4;
    while (1 + 1 == 2) {
        // 指针获取字符串中的每一个字符，直到\0
        char c = *p;
        if (c == '\0') {
            break; // 结束标记 退出循环
        }
        printf("%c\n", c); // 打印当前遍历到的字符
        ++p; // 指针往后移动一个位置
    }

    return 0;
}