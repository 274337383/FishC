#include "stdio.h"

int main()
{
    int count = 0;

    printf("�������ַ���:");

    while (getchar() != '\n') {
        count++;
    }

    printf("���ܹ�������%i���ַ�", count/2);

    return 0;
}