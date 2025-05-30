#include "upper_to_lower.h"

void upper_to_lower(char ch)
{
    if ((ch<'a' || ch>'z') && (ch<'A' || ch>'Z'))
    {
        cout<<"请输入正确英文字符"<<endl;
    }
    else
    {
        if (ch>='a' && ch<='z')
        {
            cout<<(char)(ch-32);
        }

        if (ch>='A' && ch<='Z')
        {   
            cout<<(char)(ch+32);
        }
    }
}