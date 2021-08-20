#include "stdio.h"

int main()
{
    int a = 1;
    float b = 3.141515;
    char c = 'F';
    double d = 3.14;

    int *pa = &a;
    float *pb = &b;
    char *pc = &c;
    double *pd = &d;

    printf("%d\n", *pa);
    printf("%f\n", *pb);
    printf("%c\n", *pc);
    printf("%2f\n", *pd);

    return 0;
}