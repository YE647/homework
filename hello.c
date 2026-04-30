#include <stdio.h>

int main() {
    char content[100];  // 用来存放输入的内容
    
    // 提示输入
    printf("请输入内容：");
    // 读取键盘输入
    gets(content);
    
    // 输出输入的内容
    printf("你输入的是：%s\n", content);
    
    return 0;
}