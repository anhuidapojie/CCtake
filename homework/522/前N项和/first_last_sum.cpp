#include "first_last_sum.h"

void first_last_sum(int first,int last)
{
    int sums = 0;
    for (int i = first; i <= last; i++)
    {
        sums+=i;
    }
    cout<<"前n项和为:"<<sums<<endl;
}