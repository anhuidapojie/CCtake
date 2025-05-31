#include "days.h"

void days(int year,int month)
{
    if (year>0)
    {
        if (month==1 || month==3 || month==5 || month==7 || month==9 || month==11)
        {
            cout<<"该月有31天";
        }
        if (month==4 || month==6 || month==8 || month==10 || month==12)
        {
            cout<<"该月有30天";
        }
        if (month==2)
        {
            if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
            {
                cout<<"该月有29天";
            }
            else
            {
                cout<<"该月有28天";
            }
        }
    }
    else
    {
        cout<<"请输入合法年份";
    }
    
}