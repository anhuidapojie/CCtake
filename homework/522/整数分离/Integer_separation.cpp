#include "Integer_separation.h"

void Integer_separation(int num)
{
    if (num<0)
    {
        cout<<"负数"<<endl;
        num = -num;
    }

    if (num==0)
    {
        cout<<"个位：0"<<endl;
        return ;
    }

    int temp[10];
    int count = 0;
    while (num>0)
    {
        temp[count] = num%10;
        num/=10;
        count++;
    }
    
    for (int i = count-1; i >=0; i--)
    {
        switch (i)
        {
        case 0:cout<<"个位:";break;
        case 1: cout << "十位: "; break;
        case 2: cout << "百位: "; break;
        case 3: cout << "千位: "; break;
        case 4: cout << "万位: "; break;
        default: cout << "第" << i+1 << "位: "; break;
        }
        cout<<temp[i]<<endl;
    }
}