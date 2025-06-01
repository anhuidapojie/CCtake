#include "lin.h"

void lin(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=n-i ; j++)
        {
            cout<<" ";
        }

        for (int j = 1; j <=i ; j++)
        {
            cout<<"*";
        }

        for (int j = i-1; j >=1 ; j--)
        {
            cout<<"*";
        }
        
        cout<<endl;
    }


    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= i ; j++)
        {
            cout<<" ";
        }
        
        for (int j = 1; j <= n-i; j++)
        {
            cout<<"*";
        }
        
        for (int j = n-i-1; j >=1; j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}