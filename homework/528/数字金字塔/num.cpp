#include "num.h"

void num(int n)
{
    // 上半部分金字塔
    for (int i = 1; i <= n; i++)
    {
        // 打印空格
        for (int j = 1; j <= n-i; j++)
        {
            cout<<" ";
        }

        // 打印递增数字
        for (int k = 1; k <= i; k++)
        {
            cout<<k;
        }
        
        // 打印递减数字
        for (int x = i-1; x >=1; x--)
        {
            cout<<x;
        }
        cout<<endl;
    }

    // 下半部分金字塔
    for (int i = 1; i < n; i++)
    {
        // 打印空格
        for (int j = 1; j <= i; j++)
        {
            cout<<" ";
        }

        // 打印递增数字
        for (int k = 1; k <= n-i; k++)
        {
            cout<<k;
        }
        
        // 打印递减数字
        for (int x = n-i-1; x >= 1; x--)
        {
            cout<<x;
        }
        cout<<endl;
    }
}