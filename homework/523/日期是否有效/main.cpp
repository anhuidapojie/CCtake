#include "effective.h"

int main(int argc,char const * argv[])
{
    int year,month,day;
    cout<<"请输入年月日"<<endl;
    cin>>year>>month>>day;
    effective(year,month,day);
    return 0;
}