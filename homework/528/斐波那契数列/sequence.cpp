#include "sequence.h"

void sequence(int n)
{
    int a = 0;
    int b = 1;
    int temp = 0;
    if (n==1)
    {
        cout<<a;
    }

    if (n>=2)
    {
        cout<<b<<" ";
        for (int i = 2; i <= n; i++)
        {
            temp=a+b;
            a=b;
            b=temp;
            cout<<temp<<" ";
        }
    }
}