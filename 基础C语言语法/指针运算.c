#include <stdio.h>
int main()
{
    //指针类型与整型加减
    int * pn;
    pn = 100;
    //移动目标数据对象(步长)字节
    pn = (int *)pn+1; 
    //取值运算符的优先级高于算术运算符*(p-1)
    int arr[5] = {1,2,3,4,5};
    //同类型指针进行减法作用计算元素相隔的元素个数
    printf("%d",&arr[0]);
    printf("%d",&arr[4]);
    printf("%d",&arr[4]-&arr[0]);
    return 0;
}