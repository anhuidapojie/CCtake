#include <iostream>
using namespace std;
int main(int argc,char const * argv[])
{
    int n;
    cout<< "请输入一个整数：";
    cin>> n;
    if (1<=n && n<=9)
    {
        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= n-i; ++j)
            {
                cout<< " ";
            }
            for (int j = 1; j<=i; ++j)
            {
                cout<<j;
            }
            for (int j = i-1; j>=1; --j)
            {
                cout<<j;
            }
            cout<<endl;
        }
    }
    else
    {
        cout<<"请输入1 ~ 9之间的数";
    }
    return 0;
}