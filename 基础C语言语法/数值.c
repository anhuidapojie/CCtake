#include <stdio.h>
int main()
{
    //数组是由一系列类型相同数据对象依次排列组合而成
    int arr[5][3] = {{1,2,3},{4,5,6},{7,8,9,},{10,11,12},{13,14,15}};
    int capacity = sizeof(arr)/sizeof(arr[0]); 
    for (int i = 0; i < capacity; i++)
    {
        for (int j = 0; j < capacity-2; j++)
        {
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}