#include "stdio.h"
#define NULL ((void *)0)

int main()
{
    int num = 1024;
    int *pi = &num;
    char *ps = "FishC";
    void *pv;
    pv = pi;
    printf("pv:%p\npi:%p\n", pv, pi);
    printf("pv value:%d\n", *(int *)pv);

    pv = ps;
    printf("pv:%p\nps:%p\n", pv, ps);

    printf("pv value:%s\n", (char *)pv);

    return 0;
}
