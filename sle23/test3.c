#include "stdio.h"

int main(){
    char str[] = "I Love FishC.com!";
    char *target = str;
    int count = 0;

    while (*target++ != '\0'){
        count++;
    }

    printf("sum=%d\n", count);

    return 0;
}

