#include <iostream>
using namespace std;

/*
要求:数组中指定下标位置添加元素   int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};0 是无效元素，仅作为空位置占位使用，
不要在添加数据过程中，添加数据 0 添加数据 20 到下标为 6 的位置，数组中数据结果的情况{1, 2, 3, 4, 5, 6, 20, 7, 8, 9}
*/
void adds(int arr[],int index,int num,int capacity)
{
    for (int i = 9; i >= capacity-4; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[6] = num;

    for (int j = 0; j < capacity; j++)
    {
        cout<<" "<<arr[j];
    }
    cout<<endl;
}


int main(int argc,const char * argv[])
{
    int index;
    int num;
    int arr[10] = {1,2,3,4,5,6,7,8,9,0};
    int capacity = sizeof(arr)/sizeof(arr[0]);
    cout<<"请输入下标和要添加的元素"<<endl;
    cin>>index>>num;
    adds(arr,index,num,capacity);
    return 0;
}