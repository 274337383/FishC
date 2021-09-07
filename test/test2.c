#include "stdio.h"

int main()
{
    int counts = 1, i;
    char *cBooks[] = {"《C语音程序设计》", "《C专家编程》", "《Visual Studio程序设计》", "《C Primer Plus》", "《C陷阱和缺陷》","《C和指针》"};
    for (i = 0; i < 6; i++) {
        printf("%s\n", cBooks[i]);
    }
    counts = counts + i;
    printf("一共有%d本书。\n", counts-1);
    return 0;
}