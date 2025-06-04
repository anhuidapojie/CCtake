#include "rev.h"

void rev(int num)
{
    int res = 0;
    while (num>0)
    {
        res = res*10+num%10;
        num/=10;
    }
    cout<<res<<endl;
}