#include <stdio.h>
int main()
{
    //使用指针来访问数组
    int arr[5] = {1,2,3,4,5};
    //也可使用数组名来获取元素的首地址
    //数组名出现在表达式中数组名将会转换为指向数组第一个元素的指针
    int *pn = arr;
    int *pn = &arr[0];

    //指针访问数组A[i]======>*(A+i)
    return 0;
}