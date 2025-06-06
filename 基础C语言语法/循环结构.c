#include <stdio.h>
int main()
{
    /**
     * 循环三要素：
     * 1.开始时，为计数器设置初始值
     * 2.计数器与一个有限制比较作为循环条件
     * 3.更新计数器
     */
    int a = 1;
    int sum = 0;



    while (a<=100)
    {
        sum += a;
        a++; 
    }


    for (int i = 0; i < 100; i++)
    {
        sum += i;
    }


    int x;
    do
    {
        scanf("%d",&x);
    } while (x<0);
    printf("%d",sum);

    //break跳出本次循环
    int password;
    while (1)
    {
        scanf("%d",&password);
        if (password==12345)
        {
            printf("密码正确\n");
            break;
        }
        printf("密码错误\n");
    }


    for (int i = 0; i < 20; i++)
    {
        if (i == 6)
        {
            i=15;
            continue;
        }
        printf("%d",i);
    }
    return 0;
}