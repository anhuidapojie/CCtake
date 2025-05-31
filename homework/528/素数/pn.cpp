#include "pn.h"

void pn(int num)
{
    if (num<2)
    {
        cout<<"不是素数";
    }
    for (int i = 2; i*i <= num; i++)
    {
        if (num%i==0)
        {
            cout<<num<<"不是素数"<<endl;
            return;
        }
    }
    cout<<num<<"是素数"<<endl;
}