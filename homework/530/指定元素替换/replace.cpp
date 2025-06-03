#include "replace.h"

void replace(int arr[],int index,int num,int capacity)
{
    arr[index] = num;
    for (int i = 0; i < capacity; i++)
    {
        cout<<" "<<arr[i];
    }
    
}
