#include "mul.h"

void mul(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<j<<"*"<<i<<"=";
            if (i*j<10)
            {
                cout<<" ";
            }
            cout<<i*j<<" ";
        }
        cout<<endl;
    }
}