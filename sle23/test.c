#include "stdio.h"

int main()
{
    int count = 0;

    printf("请输入字符串:");

    while (getchar() != '\n') {
        count++;
    }

    printf("您总共输入了%i个字符", count/2);

    return 0;
}