#include <stdio.h>

int main()
{
    // 同类型数据运算(低级别会转化为高级别例如char转化为int)
    // 不同类型数据运算(低级别会均为低于或等于int那么结果为int,或高于int的类型)
    // 类型级别由低到高(char->unsigned char-->short-->unsigned short-->int-->unsigned int -->long-->unsigned long-->float-->double)
    // 强制类型转换
    int a = 4;
    int b = 5;
    printf("%f\n",(float)a/b);
    return 0;
}