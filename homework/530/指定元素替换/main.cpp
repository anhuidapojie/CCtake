#include "replace.h"

int main(int argc,const char * argv[])
{
    int index,num;
    cout<<"请输入要替换的下标和替换元素"<<endl;
    cin>>index>>num;
    int arr[5] = {1,2,3,4,5};
    int capacity = sizeof(arr)/sizeof(arr[0]);
    replace(arr,index,num,5);
    return 0;
}