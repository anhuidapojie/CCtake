#include <stdio.h>
int main()
{
    //指针类型是通过值来保存目标数据对象的首地址
    //通过类型本身来标记目标对象的空间大小
    int a = 10;
    int *p = &a;
    printf("%d",*p);
    return 0;
}