#include <iostream>
using namespace std;
/**
int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9,10};
要求:0 是无效元素，仅作为空位置占位使用删除数组中下标为 6 的元素需要告删除的数据情况数组元素被删除之后的数据形式删除
下标 5数据情况 {1, 2, 3, 4, 5, 7, 8, 9, 10,0}数据向前移动，同时原本最后一个有效元素位置 0占位表示空
 */
void deletes(int arr[],int index,int capacity)
{
    for (int i = 6; i < capacity-1; i++)
    {
        arr[i] = arr[i+1];
    }
    arr[capacity - 1] = 0;
    for (int j = 0; j < capacity; j++)
    {
        cout<<" "<<arr[j];
    }
    cout<<endl;
}

int main(int argc,const char * argv[])
{
    int index;
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int capacity = sizeof(arr)/sizeof(arr[0]);
    cout<<"请输入下标和要添加的元素"<<endl;
    cin>>index;
    deletes(arr,index,capacity);
    return 0;
}