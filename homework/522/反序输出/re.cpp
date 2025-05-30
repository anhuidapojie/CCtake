#include "re.h"

void re(int num)
{
    while (num>0)
    {
        cout<<num%10;
        num/=10;
    }
}