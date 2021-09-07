#include "stdio.h"

int main()
{
    int num = 520;
    int *p = &num;  // 将num的地址存储在指针p；
    int **pp = &p;  // 将指针p的地址存储在指针pp里，形成了一个二级指针结构；


    printf("num value:%d\n", num);
    printf("p value:%d\n", *(p));       // or p[0]
    printf("pp value:%d\n", *(*pp));    // or pp[0][0];
    printf("num address:%p\n", &num);
    printf("p address:%p\n", p);
    printf("pp address:%p\n", pp);
    printf("&num address:%p\tp address:%p\tpp address:%p\n", &num, p,pp);

    return 0;
}