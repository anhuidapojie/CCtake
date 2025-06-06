#include <stdio.h>
int main()
{
    int a;
    printf("请输入一个数\n");
    scanf("%d",&a);
    if (a>=2 && a<=10)
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }
    //条件运算符
    char x,c;
    if (x>=10)
    {
        c = 'Y';
    }
    else
    {
        x = 'N';
    }
    char x,c;
    c = x >= 10 ?'Y':'N';
    return 0;
}