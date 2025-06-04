#include "arrsum.h"
// 定义一个长度为 n 的一维数组，输入n 个整数，并计算这些整数的和。

void arrsum(int arr[],int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    cout<<sum;
}