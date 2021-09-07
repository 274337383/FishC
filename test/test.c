#include "stdio.h"

int main()
{
    int *p1;    // 未初始化的指针请为它赋予一个NULL值这样可以为你省下许多调试的时间。
    int *p2 = NULL; // NULL用于指针和对象，表示控制，指向一个不被使用的地址，而'\0'表示字符串的结尾。

    printf("%d\n", p1);
    printf("%d\n", p2);

    return 0;
}