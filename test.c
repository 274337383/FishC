#include<stdio.h>

main()
{
    double shuzu[3][3] =
            {
                    {1,2,3},
                    {4,5,6},
                    {7,8,9}
            };
    double*yiyi = &shuzu;
    double*erer = &shuzu[2][2];
    double * shoudizhi=shuzu;
    printf("数组的首地址是%p\n ",shoudizhi);
    printf("数组中yiyi的地址是%p\n",yiyi);
    printf("数组的erer元素的地址是%p\n",erer);


    getchar();   //如果程序闪退，加上这一行代码，别忘记    ；  这个符号。

}
