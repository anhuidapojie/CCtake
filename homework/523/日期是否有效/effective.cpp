#include "effective.h"

void effective(int year,int month, int day)
{
    if (year>0)
    {
        if (month>=1 && month<=12)
        {
            if (month==1 || month==3 || month==5 || month==7 || month==9 || month==11)
            {
                if (day>=1 && day <=31)
                {
                    cout<<"合法";
                }
                else
                {
                    cout<<"不合法";
                }
            }
            else
            {
                if (month==2)
                {
                    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
                    {
                        if (day>=1 && day<=29)
                        {
                            cout<<"合法";
                        }
                        else
                        {
                            cout<<"不合法";
                        }
                    }
                    else
                    {
                        cout<<"不合法";
                    }

                }
                if (month==4 || month==6 || month==8 || month==10 || month==12)
                {
                    if (day>=1 && day <=30)
                    {
                        cout<<"合法";
                    }
                    else
                    {
                        cout<<"不合法";
                    }
                }
            }
        }
        else
        {
            cout<<"月份不合法";
        }
    }
    else
    {
        cout<<"年份不合法";
    }
    
}