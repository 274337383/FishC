#include <stdbool.h>
#include "stdio.h"

int main()
{
    int i;
    bool a = 0;
    char *cBooks[] = {"《C语音程序设计》",
                      "《C专家编程》",
                      "《Visual Studio程序设计》",
                      "《C Primer Plus》",
                      "《C陷阱和缺陷》",
                      "《C和指针》"};
    char **byFishC;
    char  **JiaYuLoves[4];
    byFishC = &cBooks[5];
    while (a == 0) {
        JiaYuLoves[i] = &cBooks[i];
        i++;
        printf("%s\n", *(*JiaYuLoves));
        if (i == 6) {
            a = 1;
        }
    }

    return 0;
}